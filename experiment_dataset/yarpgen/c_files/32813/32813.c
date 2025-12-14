/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_18 += ((-(arr_5 [i_0 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = ((~((((arr_4 [i_0 + 2]) == (arr_4 [i_0 - 1]))))));
                            var_20 = ((min(((max((arr_9 [i_2]), 65535))), ((-(arr_3 [i_0]))))));
                            var_21 = (max(var_21, (!39857)));
                        }
                    }
                }
                arr_11 [i_1] [i_0 - 1] [i_0] = (min((((((max(var_10, (arr_2 [i_0])))) ? (((arr_3 [i_0]) / (arr_1 [i_0]))) : (((min(var_12, (arr_4 [i_0])))))))), ((((((arr_6 [i_0] [i_1] [8]) ? var_5 : (arr_10 [4] [0] [i_0 - 1] [i_0])))) ? 5779434800227910564 : 2033156957))));
                var_22 -= max((min((arr_10 [i_0 + 2] [8] [i_0] [i_0]), (arr_10 [i_0 + 2] [10] [i_0 + 2] [i_0]))), (((arr_10 [i_0 - 1] [4] [i_0] [i_1]) && (arr_5 [i_1 - 1]))));
            }
        }
    }
    var_23 = (((((min(var_6, var_4)) % ((var_6 ? var_13 : var_7)))) >= var_9));
    var_24 = (~((var_0 ? var_5 : ((var_13 ? var_10 : 51349)))));
    #pragma endscop
}
