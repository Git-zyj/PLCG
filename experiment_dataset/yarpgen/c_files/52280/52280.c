/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_7);
    var_14 = (((-var_5 + 2147483647) << (((((!var_4) + var_2)) - 29365))));
    var_15 = 25;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_16 -= -6343;
            var_17 = ((1686840627 ^ (arr_5 [i_1])));

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                var_18 -= ((~(arr_4 [i_1] [i_2 - 1])));
                var_19 = (min(var_19, 24884));
            }
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_20 = (((arr_8 [i_0 - 1] [i_3 + 1] [i_3]) ^ (arr_0 [i_0])));
            var_21 = ((!(arr_9 [i_0] [i_0 + 3] [0])));
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [i_4] [i_4] = ((arr_8 [i_0] [i_4] [i_5]) == (arr_2 [i_0] [2]));

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            var_22 = ((-(arr_22 [i_0] [i_4] [i_4] [i_0] [i_5] [0] [i_5])));
                            arr_23 [i_7 - 1] [i_4] [i_6] [i_6] [i_5] [i_4] [8] = (((((arr_8 [i_4 + 2] [i_4] [i_4 + 2]) != var_5)) ? (((arr_0 [i_6]) | (arr_2 [i_5] [i_6]))) : (((((arr_13 [i_7] [i_6]) && var_2))))));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_23 = (min(var_11, (((var_2 > (arr_26 [i_5] [i_4 + 3]))))));
                            arr_28 [i_8] [i_4] [i_5] [i_4] [i_0] = (((arr_8 [i_8] [i_4 + 1] [i_0 + 2]) * (max((arr_24 [i_0] [0] [i_8] [i_4] [i_5] [i_4 + 3]), (arr_8 [i_0 - 1] [i_4] [i_5])))));
                            arr_29 [i_8] [i_4] [i_6] [i_6] [i_5] [i_4] [i_0] = (min((((((arr_19 [i_6] [i_0] [i_5] [i_0]) ? (arr_14 [i_0]) : (arr_16 [i_5] [i_5] [i_5] [i_5]))))), ((-((4638080596663796037 ? 19247 : (arr_24 [i_8] [i_6] [i_4] [i_4] [1] [i_0])))))));
                            var_24 = var_5;
                            var_25 = (19247 + 1);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_33 [i_0] [i_4 + 1] [i_5] [i_9] [i_4] [i_4] [i_9] = (!var_10);
                            arr_34 [i_4] [i_4] = 1;
                            var_26 = (arr_25 [i_0 + 2] [i_5] [i_4] [i_9]);
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_39 [i_4] [i_6] = (-32767 - 1);
                            var_27 = ((((((arr_22 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) & (arr_22 [i_0 + 3] [i_4] [1] [i_0 - 1] [i_10] [i_10] [i_4])))) ? ((364817459 ? (arr_36 [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_4 - 1] [i_4]) : (arr_32 [i_0 + 3] [i_4]))) : (arr_17 [18] [i_4] [i_4] [i_4] [i_4 + 1])));
                            var_28 -= var_3;
                        }
                        arr_40 [i_0] [i_4] [i_4 + 1] [i_4] [i_5] [i_6] = (min((arr_1 [i_0] [i_0]), (max(((-19271 ? var_10 : 62)), (arr_21 [i_0] [i_4] [i_6])))));
                        var_29 = (min(var_29, (((12 ? ((var_6 / (var_12 ^ var_2))) : ((((max(2147483647, -29335))))))))));

                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 16;i_11 += 1)
                        {
                            var_30 = (arr_7 [i_0 + 3] [i_4 - 1] [i_11 + 1]);
                            var_31 = 62;
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_32 = ((((((arr_10 [i_0] [i_4 + 3] [i_5]) ? (arr_30 [i_0] [i_6] [i_4] [i_0] [i_4]) : var_7))) && 13808663477045755579));
                            arr_47 [i_0] [i_0] [i_5] [i_4] [i_12] = 15757965131782559529;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        var_33 = ((((-(arr_38 [i_13] [i_13]))) == var_11));
        var_34 = (((arr_19 [i_13] [i_13] [i_13] [i_13]) ? (arr_38 [i_13] [i_13]) : var_9));
    }
    var_35 = ((((var_12 + var_12) > var_10)));
    #pragma endscop
}
