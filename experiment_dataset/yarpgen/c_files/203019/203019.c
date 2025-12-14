/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(167, 13));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = ((!(arr_2 [i_0])));
        arr_4 [8] = ((~((var_9 & (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min(-8949, (min((var_12 - var_8), 1342090577))));
        var_17 = (max(var_17, (((var_11 && ((((27882 / 13979) ? (arr_6 [i_1 + 2] [i_1 + 2]) : (min((arr_6 [1] [i_1]), 57))))))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_18 ^= 1138752221;
        var_19 = (min(var_19, (arr_1 [5] [0])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = ((var_2 ? -var_9 : (((((~-16) > 2147483647))))));
                                var_21 = 10;
                                var_22 = var_6;
                                var_23 = ((((-27991 ? 13072305117033951959 : ((((-1202354327 + 2147483647) << (20 - 20))))))) ? var_13 : (min(26, var_0)));
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_2] [i_3] [i_2] = ((((max(-27978, -15466))) * ((-(arr_19 [1] [8] [i_7] [i_7 + 2] [1])))));
                        arr_26 [i_2] [i_3] [7] [i_2] = (~-24821);
                    }
                    for (int i_8 = 2; i_8 < 8;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            arr_35 [i_2] [6] [i_2] [i_2] [6] [i_2] [i_2] = (min((min(((((-127 - 1) ? var_4 : -22113))), ((-5 ? 47547 : var_2)))), -var_14));
                            var_24 *= (max(var_12, (arr_2 [i_3])));
                            arr_36 [i_2] [i_3] [i_3] [i_8] [i_3] = ((((min(var_12, ((((arr_18 [i_8] [i_4] [i_3]) << (47579 - 47553))))))) != (min((((~(arr_13 [6] [i_3] [i_4])))), 18446744073709551594))));
                        }
                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_25 = ((~9262) ? ((~(arr_38 [i_8 - 2] [i_8 - 2] [i_10 - 1] [i_10] [i_10 + 1]))) : (((max(867638292, var_0)) | ((min(var_4, (arr_29 [i_2] [8] [i_8] [i_10])))))));
                            arr_39 [4] [9] [9] [i_10] = (((((!(arr_9 [i_2])))) + var_5));
                            arr_40 [i_2] [i_3] [i_4] [i_8 - 1] [i_10] = ((((((27982 || (arr_1 [i_3] [i_4]))))) ? ((((var_5 ? 14849791050433199563 : (arr_19 [2] [i_3] [i_4] [i_4] [i_4]))))) : (((arr_37 [7] [i_8] [7] [5] [i_2]) - ((~(arr_29 [i_8] [i_4] [i_3] [i_2])))))));
                        }
                        var_26 = 1605924985;
                        arr_41 [i_3] = ((-(max(-var_3, var_13))));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_44 [i_2] [i_3] [i_2] [i_3] = -24808;
                        var_27 = ((((min((max(var_5, 2)), (min(var_5, 1))))) && -1034919868));
                        arr_45 [i_2] [i_3] [i_3] [i_4] [i_4] = ((!(57577 && 14814)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
