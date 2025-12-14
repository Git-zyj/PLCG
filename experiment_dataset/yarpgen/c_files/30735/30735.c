/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((4191780534677696218 < 3930133915) ? (((var_2 >= (((-6006575188405814944 ? 0 : 805306368)))))) : ((min(var_7, var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 2] = ((((arr_0 [i_0 - 2] [i_1 + 2]) ? ((min(var_1, (arr_0 [i_0] [i_0])))) : ((var_2 ? (arr_4 [i_0]) : (arr_3 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = ((arr_12 [i_1] [i_3 + 1] [9] [i_1]) ? (((((((arr_4 [4]) ? (arr_9 [i_0] [i_0] [i_3]) : (arr_7 [i_0] [i_0] [i_0] [i_0 + 1]))) + 9223372036854775807)) << (((((arr_15 [i_3 - 1] [i_2] [i_0 - 1]) + 1063058264)) - 30)))) : ((max(var_8, var_7))));
                                arr_16 [i_1] [i_2] [i_1] [9] = (max((((var_0 + (max((arr_6 [1] [i_1] [i_1]), (arr_14 [2] [i_1] [i_1])))))), (((arr_15 [i_0] [i_0 - 2] [i_1]) ? var_5 : (arr_15 [i_0] [i_0 - 1] [i_0 - 1])))));
                            }
                        }
                    }
                }
                var_12 = (((arr_10 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]) ? var_7 : ((((var_9 / (arr_14 [i_1] [i_1] [i_1])))))));
                arr_17 [i_0] [i_1] = (arr_6 [i_0] [i_1] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
