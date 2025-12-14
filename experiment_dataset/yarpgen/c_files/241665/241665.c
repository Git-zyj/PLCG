/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 336390148894521224;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_16 : (min((arr_4 [i_0] [i_1 - 2]), (arr_3 [i_1] [i_1 - 3])))));
                            var_19 = 1073741823;
                            var_20 = (((((((~(arr_1 [i_0 - 3])))) ? (((max((arr_0 [i_2]), var_4)))) : (((arr_0 [9]) ? (-9223372036854775807 - 1) : (arr_5 [i_0] [i_0] [i_2]))))) + (min((((arr_7 [i_0] [i_0] [i_0 - 4] [i_0]) ? (arr_4 [i_0] [i_2]) : (arr_0 [i_1]))), var_11))));
                        }
                    }
                }
                var_21 = (max(var_21, (((-((~(((arr_3 [7] [7]) / (arr_2 [i_0] [i_1] [i_0]))))))))));
                var_22 |= (arr_3 [i_0 - 4] [i_1 - 3]);
            }
        }
    }
    var_23 = var_1;
    var_24 = 7485463091649968421;
    var_25 = var_4;
    #pragma endscop
}
