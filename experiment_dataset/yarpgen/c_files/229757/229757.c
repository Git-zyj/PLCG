/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 += var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_19 = (arr_1 [1] [1]);
            var_20 = (min(((((((arr_1 [17] [i_1 - 1]) * var_3))) ? ((1 ? 2099540647471711977 : 6270464557793392645)) : ((min(var_5, (arr_1 [i_0] [0])))))), (arr_3 [i_0])));
        }
        arr_4 [i_0] = (((((max((arr_0 [i_0]), 2147483646))) && (6 | 2099540647471711977))));
        arr_5 [i_0] [i_0] = (1 & 2099540647471711977);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_3] [18] [i_0] = ((((arr_10 [i_3] [i_2] [1]) ^ (arr_10 [i_0] [i_0] [i_0]))) | ((~(arr_10 [i_0] [i_2] [i_3]))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_3] [i_4] [i_5] = ((~(min(var_1, ((~(arr_17 [i_0] [1] [1] [i_3] [21] [i_5 + 1])))))));
                                var_21 = (((~-2099540647471711978) < ((((arr_3 [i_2]) / (arr_9 [i_0] [i_2] [6] [i_5]))))));
                                var_22 &= ((-11 ? ((min(var_8, 2551818964))) : ((~(arr_17 [i_5] [i_5 + 1] [i_5 - 2] [22] [i_5 - 1] [i_5 + 3])))));
                                arr_21 [i_0] [i_0] [18] [i_0] [13] [18] [i_0] = (min((arr_11 [i_5 - 2]), (arr_6 [i_4] [i_2])));
                            }
                        }
                    }
                    var_23 &= -5210681520963260660;
                }
            }
        }
        arr_22 [i_0] = ((var_6 ^ (((arr_3 [i_0]) ? (~var_3) : (min(var_2, var_11))))));
    }
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        var_24 = (max(var_24, ((((~var_11) ^ -var_5)))));
        arr_25 [i_6] = (min((min(((min((arr_23 [i_6]), -1730908465))), (max(-5210681520963260660, var_4)))), (min(2099540647471711988, var_8))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_25 = (max(var_25, var_14));
        var_26 *= (max(1, ((2347748810 | (arr_15 [i_7] [i_7] [i_7] [i_7])))));
        arr_29 [i_7] = (min(((((arr_15 [i_7] [7] [1] [23]) != 1718664061))), ((4294967281 ? 1 : 2963891600))));
        var_27 = (min(var_27, (((!(arr_2 [i_7] [i_7]))))));
    }
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        arr_33 [i_8] = ((var_3 || (((~(~127))))));
        arr_34 [i_8] = (arr_17 [i_8] [i_8] [i_8] [12] [i_8] [i_8]);
        arr_35 [i_8] [i_8] = (((arr_7 [i_8] [13]) && (arr_17 [i_8] [i_8 + 2] [i_8 - 1] [i_8] [i_8 + 2] [i_8])));
    }
    #pragma endscop
}
