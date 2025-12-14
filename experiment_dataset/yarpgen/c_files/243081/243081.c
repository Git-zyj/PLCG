/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((arr_3 [5] [i_1] [i_1]) % (((arr_3 [i_0] [i_0] [i_1]) ? var_5 : -28548))))));
                var_19 = (min(var_19, -40));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_20 = (arr_5 [i_2] [i_5]);
                        arr_16 [i_2] [i_3] [i_4] [i_2] = ((~((max(1, var_17)))));
                        arr_17 [i_2] [i_3] [i_4] [i_5] = (min((((arr_14 [i_2] [i_3] [i_4] [i_5]) ^ var_5)), (~-32750)));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = (min(var_21, var_12));
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((!(~var_5)));
                            var_22 = ((1 % (min((var_7 * var_0), var_15))));
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_23 = (min(var_23, (((~(~7))))));
            var_24 |= (var_16 ^ 1);
            arr_25 [4] [i_7] [i_7] &= ((max(189, 32764)));
            arr_26 [i_2] = (max((max(-4427, var_6)), var_3));
            var_25 = (max(var_25, ((((arr_5 [i_7] [i_7]) ? -32750 : (((min(var_3, 14)))))))));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_26 = (max(var_26, var_7));
                arr_32 [i_2] [i_8] [i_2] = ((~((-(arr_8 [i_2])))));
            }

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_27 = 194;

                for (int i_11 = 2; i_11 < 19;i_11 += 1)
                {
                    arr_38 [i_2] [i_10] [i_2] [i_2] [i_2] = (((0 ? 192 : var_6)));
                    arr_39 [i_10] [i_8] [i_10] [i_11 + 3] |= 14;
                }
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_28 = (max(var_28, var_2));
                arr_42 [i_2] [14] = (min((max(var_2, (arr_12 [i_2]))), (((!(arr_12 [17]))))));
                arr_43 [i_2] = 252;
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        arr_49 [i_2] [i_8] [i_13] [1] = (((var_6 ? (arr_12 [i_2]) : 32256)));

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                        {
                            var_29 ^= ((-(arr_6 [i_2])));
                            var_30 = -119;
                        }
                        for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                        {
                            arr_56 [i_2] = ((-(((arr_23 [i_2]) ? 171 : 95))));
                            arr_57 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = min(((((((arr_41 [i_2] [19] [i_14] [i_2]) > (arr_29 [i_2] [1] [i_2] [i_14]))) && ((min(var_10, 4970355531537376481)))))), var_10);
                            var_31 += (min(((~((var_8 ? 15 : 15268)))), (((var_10 ? var_3 : ((169 ? 250186589 : 15268)))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                        {
                            arr_60 [i_2] = ((((1 ? 7498512007419623876 : 30872)) == (~0)));
                            var_32 -= 1526663202;
                            var_33 = (max(var_33, (((((var_13 ? 1 : (arr_35 [i_2] [7] [i_13] [i_2] [13])))) ? 1 : var_4))));
                        }
                        arr_61 [9] [i_2] [18] = var_2;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_18 = 2; i_18 < 21;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        {
                            arr_70 [i_2] [i_2] [i_8] [i_18] [21] [i_2] = min(var_5, 7434717615217612400);
                            var_34 = ((!((!(arr_35 [i_8] [14] [i_18 - 2] [6] [i_18 - 1])))));
                        }
                    }
                }
            }
        }
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {

            for (int i_22 = 1; i_22 < 20;i_22 += 1)
            {
                var_35 = (min(var_35, ((min(61898547, (min((min(0, var_5)), ((min(var_2, 251727126))))))))));
                var_36 = (((((~(arr_14 [i_2] [i_2] [0] [i_22 - 1])))) - 6229386039671887483));
            }
            arr_77 [i_2] [i_2] [21] = ((-(min(((var_16 ? 5520506793847324517 : (-32767 - 1))), 165))));
        }
        for (int i_23 = 0; i_23 < 22;i_23 += 1)
        {

            for (int i_24 = 0; i_24 < 22;i_24 += 1)
            {
                var_37 = var_8;
                var_38 = (max(var_38, (-12 || 16582)));
            }
            var_39 = (max((arr_8 [i_2]), (-4603 == 6055743680339222023)));
            arr_84 [i_2] [i_2] [i_23] = var_7;
            arr_85 [i_2] [i_23] = (max(115, 43));
        }
    }
    for (int i_25 = 0; i_25 < 22;i_25 += 1)
    {
        arr_88 [i_25] = var_1;
        var_40 = (var_1 % ((min(50267, 8))));
        arr_89 [i_25] [i_25] = 524287;
    }
    for (int i_26 = 3; i_26 < 14;i_26 += 1)
    {
        arr_93 [i_26] = (arr_48 [i_26] [i_26] [i_26] [i_26] [0] [i_26]);
        var_41 = (((max((arr_30 [i_26 - 2]), (arr_30 [i_26 - 1]))) < (max(32767, (arr_30 [i_26 - 1])))));
    }
    #pragma endscop
}
