/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 = (((((((min((arr_0 [i_0] [i_0]), var_4))) | (arr_0 [i_0] [i_0])))) >= (min(11953, 274877644800))));
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? ((1 | (arr_1 [i_0]))) : ((min(-11, (min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = var_5;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_15 -= -274877644801;
                            arr_17 [i_2] [i_2] [i_3] [i_4] [i_5] = (max((arr_13 [i_2] [i_2] [i_2] [i_4] [i_5]), (arr_16 [i_1] [i_2] [i_3] [i_4] [i_5])));
                            var_16 = (min(var_16, (max((arr_12 [i_2] [i_2] [i_2]), ((min((arr_12 [i_1] [i_1] [i_1]), var_9)))))));
                            var_17 = (max((arr_5 [i_1] [i_3]), ((-18 ? 6637814709294694938 : 24144))));
                        }
                        arr_18 [i_2] = ((((-((7553428195328275506 ? (arr_0 [i_3] [i_4]) : var_10))))) ? var_1 : -250);
                        var_18 = ((-(((((arr_6 [i_2]) ? var_6 : var_3)) << (((((arr_6 [i_2]) ? 19344 : (arr_5 [i_4] [i_2]))) - 19329))))));

                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            var_19 = (max((max((arr_21 [i_2] [i_2] [i_3] [i_4] [i_6] [i_6 + 1]), 93)), (!18590)));
                            var_20 = -11;
                            var_21 = (arr_0 [i_6 - 2] [i_2]);
                        }
                        arr_22 [i_2] [i_2] [i_2] = ((((!(((202 ? 12 : 56))))) ? 120 : (((((-(arr_8 [i_2] [i_2])))) ? ((-5629 ? var_10 : (arr_10 [i_4] [i_3] [i_1] [i_1]))) : (144 || 274877644801)))));
                    }
                }
            }
        }
        var_22 = (((((-12964 ? (arr_7 [i_1] [i_1] [i_1]) : (arr_14 [i_1] [i_1])))) ? (min(18446744073709551604, 10893315878381276094)) : (((+(((arr_14 [i_1] [i_1]) ? 69 : var_0)))))));
    }

    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    arr_30 [i_8] [i_8] [i_8] [i_9] = (((arr_7 [i_7] [i_7 - 1] [i_8]) ? ((((arr_10 [i_8] [i_7 - 1] [i_7 - 1] [i_7 - 1]) ? (arr_10 [i_8] [i_7 - 1] [i_7 - 1] [i_7 - 1]) : 3874959962))) : (((arr_7 [i_9] [i_7 - 1] [i_8]) ? 3874959974 : (arr_5 [i_7 - 1] [i_7])))));
                    var_23 = (((-12 | 6875) ? var_1 : ((~((5624 ? var_5 : var_3))))));
                }
            }
        }
        arr_31 [i_7 - 1] = (arr_4 [i_7 - 1]);
        var_24 = ((!((((arr_28 [0]) ? 32757 : (min(46, -274877644802)))))));
    }
    var_25 = var_10;
    var_26 = ((((var_12 ? (((746065846 >> (var_5 - 1268491703)))) : (min(-5632, var_8)))) | ((min(-var_10, var_2)))));
    #pragma endscop
}
