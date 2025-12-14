/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = ((70 << ((((~(min(2097120, 179)))) + 195))));
                var_18 = (min(var_18, var_12));
                arr_6 [i_0] [i_0] = (((((arr_4 [i_0] [i_0] [5]) + 2147483647)) << (((((arr_4 [i_1] [i_0] [i_0]) + 766561132)) - 25))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] = (((((arr_8 [i_4] [i_2]) ? (arr_15 [i_2] [i_2] [2]) : ((96 ? var_4 : -647558975))))) ? (max(((max(184, var_5))), (-2147483647 - 1))) : -20);
                        var_19 = (max(var_19, (arr_10 [i_2] [i_4])));
                        var_20 = ((((max((((arr_12 [i_4] [i_2]) ? 235 : 0)), (-2147483647 - 1)))) ? ((971290553 ? ((var_1 ? 53 : 242)) : 59)) : var_3));
                        var_21 -= (((((min((arr_2 [i_2]), (arr_13 [4]))) / 255)) > (!255)));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_2] = (((((221 ? 21 : 32))) && ((((((~(arr_3 [i_2] [i_3])))) ? (219 & var_12) : ((247870147 ? 9 : 2015249088)))))));
                        arr_22 [i_2] [i_4] [i_4] [i_3] [i_2] [i_2] = max(242, 130);
                    }
                    arr_23 [i_2] [i_2] [i_3] [i_2] = (min(var_1, (arr_13 [i_3])));
                    var_22 = (max((-2147483647 - 1), ((16320 ? 2147483647 : -1588432020))));
                    var_23 += ((min((arr_17 [i_2] [i_4]), var_14)));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_26 [i_2] [i_2] [i_7] = (-2147483647 - 1);
                    var_24 = (max(var_24, ((max((arr_5 [i_2] [6] [i_7]), (((!(arr_2 [i_2])))))))));

                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        arr_29 [i_3] [i_3] [i_7] [0] [i_2] [i_7] = (max((-2147483647 - 1), ((var_7 ? ((var_6 - (arr_8 [i_2] [i_3]))) : 2147483647))));

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_25 = ((!2147483647) ? 255 : -488268880);
                            var_26 = (147 & ((2147483647 & (arr_25 [i_8 + 1] [i_8] [i_8] [i_8]))));
                            arr_32 [4] [i_3] [i_2] [i_3] [2] [2] = (arr_7 [i_2] [i_9]);
                            var_27 ^= min(var_11, ((13 ? (arr_27 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]) : 2147483633)));
                        }
                        var_28 = (min(var_28, (arr_3 [i_2] [i_2])));
                        var_29 ^= (248 / 242);
                        arr_33 [i_2] [i_2] [i_2] [8] = (((((var_11 << (-82287541 + 82287564)))) ? ((var_3 << (var_9 - 112))) : ((8388480 ? var_12 : (arr_28 [i_8 + 1])))));
                    }

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_38 [i_2] [i_2] [i_7] [i_2] [i_7] = 222;
                        arr_39 [i_7] [i_7] |= (min(1902977321, (max(10, -2147483647))));
                        arr_40 [i_2] [i_3] [i_3] [i_10] = (((((min(0, (arr_11 [i_2] [i_3] [11])))) ? 197 : (!200157556))) + -52979853);
                        var_30 = (max(var_30, 235));
                    }
                }
                arr_41 [i_2] [i_2] [i_2] = (arr_34 [7] [i_3] [i_3] [i_3] [7]);
                var_31 ^= 147;
            }
        }
    }
    var_32 = (min(var_32, (((var_11 != ((-2015249084 ? var_0 : var_8)))))));
    var_33 = (~(((112 == 4194240) ? 203 : var_5)));
    #pragma endscop
}
