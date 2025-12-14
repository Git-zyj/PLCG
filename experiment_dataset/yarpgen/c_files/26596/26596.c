/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_13 = -4602652927873019353;
                    var_14 |= ((4798281239850362811 && (((4424138850094840701 ? -6889759723732758571 : 0)))));
                    var_15 = (17 & 0);
                }
                var_16 = 236;
            }
        }
    }
    var_17 = var_11;

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_18 = 2479;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_19 = var_2;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_20 = -8985853047932441914;
                                var_21 = 30974;
                                var_22 = (max((((((var_4 + 9223372036854775807) >> (var_8 - 1890825389))))), (((arr_17 [2] [1] [i_6] [i_7]) ? (~11115387541144484361) : (min((arr_15 [i_3] [i_6] [i_3] [i_3]), var_12))))));
                            }
                        }
                    }
                }
            }
        }
        var_23 &= (((553197071 ^ ((0 >> (987556685 - 987556672))))));
        var_24 = (arr_19 [17]);

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_25 = 30974;

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_26 = -4920567927325162654;
                        var_27 = (max(var_27, (arr_13 [i_8] [i_9])));
                        var_28 = (arr_22 [i_10]);
                        var_29 = 1;
                        var_30 = 2731745780;
                    }
                    for (int i_12 = 1; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        var_31 = ((-var_8 < (arr_14 [i_3] [i_3] [i_10] [2])));
                        var_32 = (arr_29 [1] [i_8] [1] [i_10] [i_12 + 1] [i_8] [i_8]);
                    }
                    var_33 = ((((((arr_27 [i_3]) | var_8))) ? 3605374762971319274 : (arr_16 [20] [i_9] [i_8] [i_3])));
                    var_34 = (~(arr_25 [i_8] [i_8] [i_10]));
                }
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_35 = -11501;
                            var_36 = (((((1 != (arr_26 [i_3] [i_8] [i_3])))) * var_9));
                            var_37 = (((var_3 ? (arr_31 [i_3] [i_3] [i_13] [i_14]) : 2649083087)));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                var_38 &= (!-var_10);
                var_39 = 1;
            }
            var_40 *= ((-4920567927325162682 ? -94373325 : -3173874809045105582));
            var_41 = (arr_18 [i_8] [i_8] [i_3] [i_3] [i_3]);

            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        {
                            var_42 = ((~(((((arr_46 [i_3] [i_3] [i_3] [6] [i_3] [19]) + var_9)) ^ ((((arr_24 [i_18] [i_3] [i_3] [i_3]) ? 13500525075785465 : -9143872447961738440)))))));
                            var_43 = (min(34141, (var_7 ^ 609260716)));
                            var_44 += (arr_31 [i_3] [i_3] [i_3] [3]);
                        }
                    }
                }
                var_45 = var_3;
                var_46 = ((-(-14832 ^ -7395)));
                var_47 = (arr_39 [i_3] [19] [i_16] [i_8]);
                var_48 = (+-5);
            }
            var_49 = ((!((!((var_9 >= (arr_35 [i_3] [i_3] [i_3] [i_3] [12])))))));
        }
    }
    #pragma endscop
}
