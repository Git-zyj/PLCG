/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_11 ? 0 : var_10))) - ((min(((var_11 ? var_6 : var_9)), (!var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((~(-57 == 1)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] [2] = (((1 | 1) ? ((((arr_5 [20] [0] [i_2]) ? var_7 : ((1 ? 89 : var_3))))) : ((-(arr_2 [i_2] [i_2] [i_2])))));
                    arr_11 [i_0] [i_0] [2] = 806920740548772546;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_14 [i_1] [i_1] [i_3] = ((-(64 - 25)));
                    arr_15 [i_1] [i_1] = ((((1 - var_4) ? ((min(var_5, 44))) : (arr_5 [i_1] [i_1] [i_1]))));

                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_3] [i_1] = (((((-(((arr_7 [i_0] [i_1] [i_1] [i_4 + 2]) ? 1 : var_8))))) ? (arr_16 [i_1]) : 4421230075955361082));
                        arr_19 [1] [i_1] [1] = (((((((arr_9 [18] [18] [i_3] [i_4]) % var_2)) - 1)) << ((max(0, var_8)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5] = (((~(-127 - 1))));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_3] [i_1] = -57;
                            arr_27 [i_0] [i_6] [i_1] [i_3] [i_5] [i_5] [i_6] |= -26;
                            arr_28 [i_0] [i_1] [8] [i_3] [i_5 + 1] [i_6] = var_9;
                            arr_29 [i_0] [i_1] [i_3] [i_6] [0] [i_6] = ((((((arr_0 [12] [i_1]) - (arr_5 [i_6] [i_5] [i_6])))) ? -var_11 : 1018058220));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_32 [i_0] [i_1] [i_0] [i_5 + 1] [14] [i_1] [14] = (arr_2 [i_5 + 1] [i_5 + 1] [i_3]);
                            arr_33 [i_0] [i_1] [i_1] [i_5] [i_5] = -25;
                            arr_34 [i_1] [i_1] [i_1] = (((((-44 + 2147483647) << (((-21 + 52) - 31)))) != (arr_12 [14] [i_1] [i_5 + 1] [i_1])));
                            arr_35 [i_0] [i_1] [i_3] [i_5] [i_1] = ((6077195869751614692 ? 21 : 881071597));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_38 [i_8] [i_8] [13] [16] [i_1] [i_0] = (var_8 - 32671);
                            arr_39 [i_1] [i_1] [i_3] [9] [i_8] = (((-15 + 9) ? 16 : -364622890888695913));
                        }
                    }
                }
                arr_40 [i_1] [i_1] [i_1] = ((~(((1 && (arr_5 [i_1] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            {
                arr_45 [i_9] [i_10 + 1] = -56;
                arr_46 [i_9] = (min((arr_43 [i_9]), (65532 % 1)));
            }
        }
    }
    #pragma endscop
}
