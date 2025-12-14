/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 198));
    var_21 = (max(7, 193));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (((((arr_3 [9] [3] [i_1 + 2]) > var_19)) ? (var_13 > 58) : var_13));
                var_23 = (max(var_23, (arr_0 [0] [0])));
                var_24 = (max(var_24, ((min((arr_3 [i_1] [15] [14]), var_16)))));
                var_25 = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_26 ^= (arr_0 [i_0] [5]);
                            arr_9 [i_0] [i_0] [i_0] [2] |= (arr_7 [14] [i_1 - 2] [i_2] [5]);
                            var_27 = (!199);
                            var_28 = var_19;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
