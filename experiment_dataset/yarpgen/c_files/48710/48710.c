/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (arr_13 [i_0] [4] [i_2] [i_2])));
                                var_17 = min((~34408), var_0);
                                arr_15 [i_0 - 1] [i_0 - 1] [i_3] [i_0] [i_0 - 1] = ((~((max((var_4 || var_5), var_14)))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [8] = (arr_3 [i_2]);
                    var_18 = (max(var_18, (arr_0 [3])));
                    var_19 = (max(var_19, var_4));
                }
            }
        }
    }
    var_20 -= ((((min(var_10, ((var_14 ? var_10 : var_2))))) || (!var_1)));

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_21 = var_12;
                            arr_29 [12] [i_6] [i_6] [i_7] [10] [i_8] [i_6] &= var_13;
                            arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_9] |= ((((((arr_27 [i_5] [i_5]) + var_10))) ? ((0 ? (arr_17 [3] [i_6]) : var_5)) : (arr_18 [i_7 - 1])));
                            arr_31 [i_6] &= (var_11 ? (arr_27 [i_7 - 1] [i_7 - 1]) : var_13);
                            var_22 = (((arr_18 [i_5]) ? ((var_7 >> (8214035186414971660 - 8214035186414971642))) : 641077376));
                        }
                    }
                }
            }
            var_23 = var_8;
        }
        arr_32 [i_5] = 4292870144;
        var_24 = var_2;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    arr_39 [i_5] [i_10] [i_10] = ((var_15 ? (arr_35 [i_5]) : (((arr_24 [0] [i_5]) ? 3416908339 : (min(var_8, var_11))))));
                    var_25 = 1928843383;
                    arr_40 [i_5] = (((arr_23 [1]) + (max(((min(1928843403, 446386104))), (min(var_11, 10232708887294579955))))));

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_26 = ((+(((12 != 62838) ? (arr_42 [i_5] [i_10] [i_5] [i_11] [i_12] [i_11]) : (var_9 % var_6)))));

                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            var_27 *= (arr_33 [i_5]);
                            var_28 = (min((127 + -641077377), ((min(var_2, 74)))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, var_0));
                            var_30 = (max(var_30, (arr_43 [i_12] [14] [i_11] [i_11] [i_14])));
                        }
                        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, (815993493 != 641077376)));
                            arr_52 [i_5] [i_5] [i_5] [i_5] [17] = (max((arr_20 [i_5]), ((((arr_18 [i_15]) || (arr_18 [i_5]))))));
                            var_32 = (arr_50 [i_5] [3] [9] [9] [i_5] [i_12] [i_15]);
                            var_33 ^= (~var_8);
                        }
                        arr_53 [i_5] [i_10] [i_11] [i_5] = (max((~6587917929693311464), 4294967285));
                    }
                    var_34 = (max(var_34, (((((~(arr_33 [i_5]))) != (((arr_27 [i_5] [7]) ? (arr_46 [i_10] [i_11]) : var_3)))))));
                }
            }
        }
    }
    #pragma endscop
}
