/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_14 += (min(-28941, (((4 && ((min((arr_0 [7]), var_7))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = (min((((arr_2 [i_3 - 1] [i_1 + 2] [i_0 - 1]) ? (arr_2 [i_3 - 1] [i_1 + 2] [i_0 - 1]) : var_2)), var_3));
                            var_16 = (max(var_16, (((~(min(var_1, (arr_4 [i_1] [i_3 - 1] [i_3]))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [1] [i_1 + 1] = (-9223372036854775807 - 1);
                            var_17 = (min(var_17, (arr_3 [i_2] [i_1 + 1] [i_2])));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = var_4;
                        }
                    }
                }
            }
        }
    }
    var_18 -= var_1;
    #pragma endscop
}
