/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_10 = (max(var_10, var_8));
                        var_11 = ((arr_3 [i_2 + 1] [i_0 - 1]) > (arr_5 [i_0 + 1] [i_0 + 1]));

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_12 = (max(var_12, var_8));
                            var_13 = (max(var_13, (((-((1 ? var_2 : var_9)))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_14 *= (((arr_14 [i_3 - 2] [i_3 - 1] [i_2 + 1] [i_0 - 3] [i_0 - 1]) ? -1 : var_0));
                            var_15 = (1804159301 | var_0);
                            var_16 = (arr_4 [i_0 - 2]);
                            arr_16 [i_5] [i_2] [i_3] [i_3] [i_1] [i_0] = (((arr_15 [i_0 - 3] [i_0 - 3] [i_3] [i_2] [i_5]) ^ -73743381));
                        }
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            arr_19 [1] [16] [i_2] [i_1] |= (var_2 ? (((!(arr_7 [i_6 - 1] [i_6])))) : 0);
                            var_17 = (~(arr_2 [i_0 - 1]));
                            var_18 = (max(var_18, ((((arr_14 [1] [i_6 + 1] [i_3 + 3] [i_3 - 1] [i_2]) ? (arr_14 [i_6] [i_3 + 3] [i_3 + 3] [i_3 - 3] [i_3 - 3]) : (arr_14 [i_3] [i_3] [i_3 + 3] [i_3] [i_3]))))));
                        }

                        for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_1] [15] [i_3] [i_3] [i_7] = -1804159301;
                            var_19 = (1 > 1);
                        }
                        for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            arr_25 [1] [1] [i_3] [3] = ((-1250279506 ? var_4 : (arr_10 [i_3] [i_0 - 1] [i_2 - 1] [i_0 + 1])));
                            var_20 -= var_7;
                            var_21 = (!(((var_1 ? var_5 : (arr_0 [i_0])))));
                        }
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_3] = ((1 << (!12)));
                            arr_29 [i_9] [i_9] [i_3] [i_3] [i_3] [i_1] [i_0] = var_4;
                            var_22 = ((var_1 == ((1804159301 - (arr_17 [i_0] [i_2] [i_2] [i_3] [i_3])))));
                        }

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_23 = 1804159301;
                            var_24 |= ((arr_9 [i_0 - 3] [i_1] [i_2 + 1] [i_3 + 2] [12]) && (arr_9 [i_0 + 1] [i_2] [i_2 - 1] [i_3 + 2] [i_3 + 2]));
                            arr_33 [i_0] [i_0] [i_0] [i_0 - 3] [i_10] [i_0] [18] &= ((-1804159311 ? var_6 : (arr_2 [i_0 - 3])));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_25 = var_0;
                            var_26 = ((arr_18 [i_3] [i_0 - 3] [i_3]) ? 1 : var_8);
                            arr_37 [i_11] [i_11] |= (((!var_9) / 1203150982));
                            var_27 ^= (((arr_10 [i_1] [i_3 - 3] [i_1] [i_3]) ? 1 : var_1));
                        }
                    }
                }
            }
            var_28 = (min(var_28, (arr_7 [i_0 - 2] [i_1])));
            var_29 = var_0;
        }
        var_30 -= ((((min((arr_34 [1]), var_1))) ? (arr_11 [10]) : (max(var_0, ((1 ? var_3 : var_2))))));
        var_31 = (~var_1);
        arr_38 [i_0 - 2] [i_0 - 2] = -var_6;
    }
    var_32 = -1;
    #pragma endscop
}
