/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(5978142238996334566, var_4));
    var_17 |= 3200025667338219330;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((~(!2097151)));
                var_19 += (((((~var_11) <= (3200025667338219327 % var_11))) ? (11250865011588051322 + 15246718406371332285) : 15246718406371332286));
                arr_4 [i_0] [i_0] = var_15;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 ^= (+(max((arr_7 [i_0] [0] [0] [i_0]), var_2)));
                    var_21 = 77;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = ((((((arr_9 [i_1 - 1] [i_1] [i_1] [i_1]) >= var_9))) | ((-(arr_0 [i_0])))));
                                arr_13 [i_4] [i_3] [i_0] [i_1] [1] = ((((min(((!(arr_7 [i_0] [i_0] [i_0] [i_0]))), (min((arr_6 [i_0] [i_3] [i_0]), var_1))))) | ((-(arr_11 [i_3] [i_0] [i_3] [2])))));
                                var_23 = (max(var_23, var_3));
                                var_24 += (arr_2 [i_4]);
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    var_25 = var_3;
                    arr_16 [i_0] [i_1] = (((!48808) <= (((!(((~(arr_2 [i_0])))))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] = var_7;
                        var_26 = (max(var_26, (arr_2 [i_0])));
                        var_27 = var_12;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_28 [i_8] [i_0] [i_0] = -68;
                            var_28 *= ((+((((arr_2 [i_0]) && (arr_5 [1] [i_5] [1]))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_29 = var_0;
                            var_30 *= arr_10 [i_0] [i_0] [i_1] [i_1 - 1] [i_7];
                            var_31 = (((((var_4 ? (arr_0 [i_0]) : var_3))) ? 3200025667338219304 : -81));
                            arr_32 [i_0] [i_0] [i_7] [i_0] [6] [6] = 1;
                            var_32 += (~(arr_18 [i_1 - 1] [i_1 - 1] [6] [6]));
                        }
                        var_33 = var_1;
                        var_34 = (min(var_34, 1));
                    }
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        var_35 = ((((max(1, -6927324795720720795))) + (max((max(15246718406371332285, var_5)), (((-(arr_35 [i_0]))))))));

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            arr_39 [1] [i_10 + 1] [i_11] [i_0] [i_11] [i_0] [i_0] |= (arr_18 [i_11] [i_10] [i_5] [i_11]);
                            var_36 = (min(var_36, var_12));
                            arr_40 [i_0] [i_10] [i_5] [i_1] [i_0] = ((~(((arr_14 [i_10 - 2] [i_10] [i_10 + 1] [i_10]) - (arr_37 [i_11] [i_11] [i_11] [i_10] [i_10 - 1] [i_0])))));
                            var_37 = (arr_31 [i_0] [i_1] [i_0] [i_10] [i_11]);
                        }
                        arr_41 [i_0] [0] [i_5] [i_0] &= (((arr_24 [i_0] [i_1] [14] [6] [i_1]) ? (max(-543215073, (var_15 && var_15))) : var_8));
                    }
                    var_38 = ((~(arr_31 [i_1] [i_5] [i_0] [i_1] [0])));
                }
            }
        }
    }
    #pragma endscop
}
