/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((-((-220086794 ^ (!var_5)))));
        var_18 = (((min(1079508636, (arr_1 [i_0]))) - ((((max((arr_1 [i_0]), 32767))) ? (arr_0 [i_0]) : (min((arr_1 [i_0]), (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_19 ^= ((((max((arr_2 [i_1]), 77))) - (max(((101 ? (arr_1 [i_1]) : -3)), ((max(-9, 178)))))));
        var_20 = -1126234117;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((-(arr_9 [i_2]))));
        var_21 = ((!(~var_9)));

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            var_22 = ((((min(3794987203, -2))) ? (max(188, (arr_6 [i_3 + 2]))) : (724360335614187461 ^ 3366900496646136674)));
            var_23 *= arr_11 [i_3 + 2] [i_3 + 2] [i_3 + 2];
            var_24 = 0;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_25 *= ((-(arr_14 [i_2])));
            arr_17 [i_4] [i_2] = (((arr_6 [20]) ? (arr_4 [i_2] [i_4]) : 1));
        }
        arr_18 [i_2] = min((min(1255513204, 18)), (arr_11 [i_2] [i_2] [i_2]));
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_23 [i_5] = (min((arr_8 [i_5]), (min((arr_6 [i_5]), 10184086035464204574))));
        arr_24 [i_5] [i_5] = arr_7 [i_5];
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_32 [i_7] [i_7] [i_8] [i_6] = -179;

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_26 = ((arr_28 [i_8]) && var_11);
                        var_27 = (max(var_27, ((1 ? (arr_27 [i_9] [i_8] [i_6]) : 1703349622))));
                        arr_35 [i_6] [i_7] [i_8] [1] [i_9] = (arr_26 [i_8]);
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_28 |= (arr_31 [i_10] [i_8]);
                        var_29 -= (1 || 1);
                    }
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_30 = 1235343268;
                    var_31 = (min(var_31, ((((arr_36 [i_6] [i_7] [i_11]) ^ (arr_25 [i_11] [i_6]))))));
                    arr_42 [i_6] [i_11] [i_11] [i_11] = (arr_40 [i_11] [i_11] [i_11] [i_7]);
                    arr_43 [0] [i_11] [i_11] [24] = (arr_29 [i_6] [i_6] [1] [i_11]);
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    arr_46 [i_12] [i_12] = (((((arr_34 [i_12] [i_7]) != -1)) ? (((((max((arr_31 [i_7] [i_6]), (arr_36 [i_6] [i_7] [i_12])))) >= (((arr_28 [20]) - -790002105))))) : ((3 ? 1 : -54))));
                    var_32 = var_0;
                }
                arr_47 [i_6] = (min((min(71867117, (arr_33 [i_6] [i_6] [i_6] [i_6]))), (arr_33 [i_6] [5] [i_7] [i_7])));
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_33 = 63;
                                var_34 = (max(var_34, ((((((arr_33 [i_13 - 1] [4] [i_13 - 1] [i_13 + 3]) | (arr_33 [i_13 + 1] [i_13] [i_13] [i_13 + 2]))) / (arr_40 [22] [i_13 + 1] [i_13] [i_13 + 3]))))));
                                var_35 = (max(var_35, ((max((((arr_28 [i_13 + 1]) + (arr_28 [i_13 - 1]))), (arr_49 [i_13 - 1]))))));
                                var_36 -= ((((min(var_12, (arr_53 [i_15] [i_14] [i_13 + 2] [20])))) ^ -2053));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
