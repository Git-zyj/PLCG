/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((max(var_4, (var_3 < var_5))), (((((var_5 ? var_1 : var_6))) ? (~var_6) : var_4))));
    var_14 &= (((var_4 && var_12) ? var_12 : (((min(653207030, 14286)) + ((var_4 ? 3641760266 : var_4))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((min((arr_0 [i_0]), (32750 ^ var_12))));
        var_15 = (((~13) * (((min(252, (arr_1 [i_0 - 1])))))));
        var_16 = ((+(((arr_0 [i_0]) >> var_3))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 = (var_1 * var_7);

                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_18 &= (4153838268711153112 * 0);

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_19 = ((var_3 ? (arr_11 [i_3] [i_2] [i_2 + 1] [i_4]) : (arr_11 [i_3] [i_3] [i_2 - 1] [i_4])));
                            var_20 = ((15035300141288345519 ? -5884 : var_7));
                        }

                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_21 = var_1;
                            var_22 -= ((!((((arr_12 [i_3] [i_4] [i_6]) * var_0)))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_23 = ((((((arr_4 [i_1]) ? 14292905804998398503 : var_0))) ? (12216 & var_7) : 869498827));

                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            var_24 = ((7900070548654803001 ? (arr_21 [1] [i_2 + 1] [i_8 - 1]) : 4153838268711153106));
                            var_25 = (((arr_15 [i_2 - 1] [i_8 + 3]) && (arr_15 [i_2 - 1] [i_8 - 1])));
                            arr_24 [i_3] [i_7] [i_2 + 1] [i_3] [i_2 + 1] [i_3] = 3483131461;
                            var_26 = (min(var_26, ((((((-7120030006490141111 ? var_10 : (arr_21 [i_1] [i_2] [i_3])))) ? 14322955104108063574 : (((8558066219892792371 | (arr_14 [i_1] [i_2] [0] [i_7] [i_8] [i_7])))))))));
                            var_27 = ((~(((arr_20 [1] [i_1]) & 1))));
                        }
                        for (int i_9 = 4; i_9 < 15;i_9 += 1)
                        {
                            var_28 = 0;
                            arr_27 [i_1] [i_2] [i_9] [i_7] [i_7] [i_9] [i_9] &= var_6;
                        }
                        var_29 = ((((((arr_25 [i_3]) ? 3805618597 : var_1))) ? var_12 : ((7075240327515533505 ? var_12 : var_10))));
                        var_30 = (((arr_11 [i_3] [i_2] [11] [i_3]) ? var_6 : (arr_13 [i_7] [i_3] [i_2] [i_1])));
                    }
                    var_31 *= (var_8 && 14322955104108063552);
                }
            }
        }
        var_32 = (((1 ^ (arr_10 [i_1] [i_1] [i_1] [13] [i_1]))));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_33 = (max((((arr_19 [1] [i_10] [9]) ? ((18446744073709551603 ? -1 : 4153838268711153112)) : (14322955104108063552 - 32757))), (arr_8 [i_10] [i_10])));

        /* vectorizable */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_34 += ((75 ? (arr_22 [i_10] [i_11]) : 4153838268711153111));
            var_35 = (((((arr_19 [i_10] [i_11] [i_11]) < (arr_6 [i_10] [i_11]))) ? 7900070548654802987 : (((var_2 * (arr_11 [i_10] [6] [i_11] [i_10]))))));
        }
    }
    var_36 = ((var_12 / ((13 | (~var_6)))));
    var_37 = (min((min(-123, 4153838268711153112)), var_0));
    #pragma endscop
}
