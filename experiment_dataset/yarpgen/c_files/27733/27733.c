/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 = (375055453 == 375055459);
                                var_11 = (min(((max((max(var_7, var_1)), ((min(var_5, (arr_3 [i_0] [i_0] [i_0]))))))), (((var_3 ? 3919911843 : var_6)))));
                            }
                        }
                    }
                }
                var_12 = ((((-(max((arr_10 [i_0]), var_1)))) ^ ((((arr_0 [i_1 + 1]) ? var_6 : -127)))));

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_13 = (min(var_13, (((max(var_3, ((1023 ? 18446744073709550599 : (arr_6 [i_1 + 1] [i_1 + 1] [i_5])))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_14 = (max((((arr_5 [i_5]) ? 18446744073709550606 : 2111007613)), -27392));
                                var_15 = var_0;
                                var_16 = (min(0, var_7));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_17 = ((0 ? -6031 : -88));
                                arr_23 [0] [i_1 + 1] [7] [i_1] [i_5] = ((var_2 ? 0 : (arr_6 [3] [15] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((((((-15311 ? 1 : 0))) ? -4611650834055299072 : (((1016 ? 1 : 1014397682)))))) ? (((!(var_0 ^ var_6)))) : 0));
    var_19 = (!(!2183959705));
    #pragma endscop
}
