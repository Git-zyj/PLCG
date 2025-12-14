/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (((!210) << (((var_10 || (((2318603908 ? 1976363388 : 1976363380))))))));
                    var_22 = 1976363387;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_23 = ((var_3 ? (1976363387 & 2318603878) : (var_3 & 4592578014123670902)));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((2318603878 ? (arr_1 [i_0]) : ((-(arr_1 [i_0])))));
                        }

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_24 = 2318603884;
                            var_25 = (arr_5 [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_26 = (max(var_26, (((((~(var_9 || var_10))) < ((((max(var_12, -15291))) / ((var_3 ? var_6 : 5839)))))))));
                            arr_21 [i_6] [i_2] [i_1 + 3] [i_6] |= -27264;
                        }
                        arr_22 [i_0] = 1382429428;
                        var_27 = (arr_12 [i_0] [i_0] [i_1 + 1] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] = var_4;
                                var_28 -= (max(((((~var_1) != (((var_15 ? -307903235 : (arr_5 [i_1 + 4]))))))), ((1352739742181229493 ? ((var_14 ? 1009502398 : 51337)) : ((var_17 ? 96 : 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
