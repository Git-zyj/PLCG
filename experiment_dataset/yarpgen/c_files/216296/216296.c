/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 += (min(7630443902279036643, -1));
                                var_18 = (min(var_18, ((min(((0 + (arr_4 [i_4] [i_4] [i_4 + 3]))), (((var_9 < ((max((arr_8 [i_0] [i_1] [i_0] [i_3] [i_4]), var_13)))))))))));
                                arr_12 [i_0] [i_4] [i_2] [i_3] [i_4] = ((min(var_2, (arr_11 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 2] [i_4 + 3]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((max(69, 71062786892735015)) == ((max((min(var_6, 2234691392)), (arr_17 [i_0] [i_0] [i_0]))))));
                                arr_20 [i_0] [i_0] [i_2] [i_0] [i_6] = (arr_1 [i_0] [i_0]);
                                var_19 ^= 12658907506789354002;
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_6] = (max((min((1 / var_6), 11084)), (arr_15 [i_1] [i_1] [i_2] [i_1] [i_1])));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_20 = ((var_5 ^ (arr_5 [i_2])));
                        var_21 -= var_0;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_22 = (-6646987195918855589 >= 0);
                            var_23 = var_3;
                        }
                        var_24 += var_12;
                        arr_31 [i_0] [i_0] = -108;
                        arr_32 [i_0] [i_0] = min(((min(var_3, (arr_14 [i_0] [i_0 + 1] [i_0 + 1])))), 2878104519);
                        var_25 *= var_12;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, var_8));
                        arr_35 [i_0] [i_0] = (min((arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]), ((var_10 << (((arr_26 [i_0] [i_0 + 1] [i_0 + 1]) + 9328))))));
                        var_27 = (max(var_27, ((((((arr_13 [i_0 - 2]) >= var_8)) && ((((arr_13 [i_0 - 2]) ? var_8 : (arr_13 [i_0 - 2])))))))));
                    }
                    arr_36 [i_0] [i_1] [i_2] = max((!18445618173802708992), var_15);
                    arr_37 [i_2] [i_1] [i_0] [i_0] = (max(3957535018, var_13));
                }
            }
        }
    }
    var_28 -= var_6;
    var_29 = (((max(-var_3, (var_2 >= var_4))) + var_6));
    var_30 = ((min(var_14, ((var_1 ? var_10 : var_6)))));
    #pragma endscop
}
