/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (min(var_6, var_2));
    var_12 = var_0;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_13 -= (max(((((arr_0 [0]) && 18989))), ((max(var_4, 41832)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_14 = (!((13 > (var_1 | 46547))));
                            var_15 ^= (max(17282897303587533724, ((((arr_13 [1] [10] [i_4] [i_4]) % ((-12417 ? 1470651431 : (arr_9 [i_3]))))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_16 = (min((arr_9 [i_1]), 46551));
                            var_17 = ((!(~19001)));
                        }
                        var_18 = 192;
                        var_19 = ((~(arr_3 [i_0] [i_2] [i_3])));
                        var_20 = -48;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    {
                        var_21 = 18979;
                        var_22 -= (min(((((12425 & var_4) ? (((arr_2 [i_0 + 1]) << (55 - 38))) : (((arr_7 [i_0] [i_6] [i_7] [i_8 - 1]) ^ 56))))), (14793854118687287931 ^ 1)));
                    }
                }
            }
        }
    }
    var_23 = ((((((min(var_4, -29372))) | ((min(var_9, 46547)))))) && (((((max(131, var_9))) << ((((var_1 << (46547 - 46517))) - 3221225459))))));

    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                {

                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        arr_36 [1] [i_11] [8] [7] [i_9] = (!55);
                        arr_37 [i_9] [i_12 + 1] [i_11] [i_12 + 1] [i_10] = (arr_35 [i_9] [i_10] [i_11] [17]);
                        arr_38 [10] [i_10] [i_11 - 1] = ((~(arr_33 [i_12 - 1] [13] [i_12] [i_12 + 4] [i_10])));
                        var_24 = var_7;
                    }
                    var_25 = 18989;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_26 = ((-((~(arr_24 [i_9])))));
                                var_27 = ((19016 == (((((-1 + 9223372036854775807) >> 0)) << (((arr_35 [9] [14] [i_9] [i_10]) - 141))))));
                                var_28 = (max((arr_29 [i_13]), ((min(((min(-12412, 12576))), (min((arr_27 [7] [6] [i_14]), (arr_41 [i_10] [i_11] [i_10] [i_13]))))))));
                                var_29 &= (arr_28 [i_9] [i_10] [13]);
                            }
                        }
                    }
                    var_30 |= (min(var_2, (((12420 && ((min(-12417, (arr_32 [i_10])))))))));
                    var_31 |= ((((10313 ^ (arr_34 [i_10] [i_11 + 1] [i_11 + 1] [2] [i_11 + 1]))) == (arr_34 [1] [14] [i_11] [i_10] [i_9])));
                }
            }
        }
        arr_44 [7] = (min(((min((arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), 2467))), ((((min(119, 40595))) ^ (arr_40 [1] [i_9] [i_9] [i_9])))));
    }
    #pragma endscop
}
