/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [9] [i_1] = ((var_16 ? var_0 : (arr_1 [9])));
                    var_18 = (((arr_8 [i_0] [i_1]) <= var_17));
                    var_19 += ((((((arr_1 [i_0]) - ((((!(arr_0 [i_1])))))))) ? (max((arr_2 [i_0] [i_0]), -var_17)) : (((var_3 ? (arr_8 [0] [i_0]) : (arr_8 [i_1] [i_2]))))));
                }
            }
        }
    }
    var_20 += (((!var_12) ? (((!var_16) ? var_14 : (32613 % var_16))) : (((var_7 ? var_4 : ((-264 ? var_4 : var_14)))))));

    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_20 [1] [i_3] [i_4] [i_5] [6] &= ((+((((min((arr_13 [8]), 0))) << (((~var_16) - 1405502231))))));

                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            var_21 = var_15;
                            var_22 = (((arr_13 [i_4]) ? ((~((min((arr_16 [i_5] [7]), 228))))) : var_12));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_23 = (max(var_23, (((!((((((arr_10 [i_3]) + 9223372036854775807)) << (var_12 - 120)))))))));
                            var_24 = ((2139643168 >> (((((min(24576, 1))) <= 6957994788684846812)))));
                            var_25 = (min((arr_14 [i_3 + 2] [i_3]), 24579));
                            arr_25 [i_3] [i_4] [i_5] [i_5] [i_6] [i_8] = (arr_21 [i_3 + 1] [i_6] [i_5] [i_6 + 1] [5] [7]);
                            var_26 = (max(var_26, (arr_14 [i_4] [i_3])));
                        }
                        var_27 &= (((arr_11 [6]) ? ((~(arr_11 [i_4 + 2]))) : (((arr_11 [15]) - (arr_11 [i_3 - 1])))));
                        var_28 ^= (((((~(arr_16 [i_6 - 1] [i_3 + 2])))) * -4294967295));
                    }
                }
            }
        }
        var_29 = (arr_13 [14]);
    }
    #pragma endscop
}
