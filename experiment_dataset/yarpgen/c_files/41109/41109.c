/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, 1));

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_20 = (min(var_20, 1));
                            var_21 = (max(var_21, ((((arr_2 [i_3 - 1]) % var_3)))));
                            var_22 = var_1;
                            arr_15 [i_0] [i_0 - 1] [i_0] [i_2] [i_3] [i_4] [i_4] = var_5;
                            var_23 = (((arr_12 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3]) - 72057594037927935));
                        }
                        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_24 = (arr_1 [i_0 - 1] [i_1]);
                            var_25 = 110933779;
                            var_26 = (min((((arr_1 [i_0 - 1] [i_3 - 1]) ? (arr_1 [i_0 - 1] [i_3 - 1]) : (arr_1 [i_0 - 1] [i_3 - 1]))), 72057594037927935));
                        }
                        for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, -1424087817));
                            var_28 *= min(var_8, (arr_0 [i_6 + 2] [i_0 - 1]));
                            var_29 = 1;
                            var_30 = (((~711565077) == -711565077));
                        }
                        arr_20 [12] [i_2] [i_1] [12] &= ((1 == (~2301908621)));
                        var_31 = (min((((((arr_10 [i_0] [i_3]) | 8112121579360022875)) != 1)), ((!(arr_9 [i_0 - 1] [i_0 - 1])))));
                        var_32 = (((min((min(1424087816, 9029772908723830628)), ((max(1904616455, 1317787604315648846))))) + (((((1 != (arr_10 [i_0] [i_3]))))))));
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_33 *= ((min((arr_17 [i_0 - 1] [i_0 - 1] [i_7 + 1] [i_7 + 1]), (arr_17 [i_0 + 1] [i_0 + 1] [i_7 - 1] [i_7 + 1]))));
                        var_34 = (min(var_34, (((arr_10 [i_0 - 2] [2]) == ((min((arr_0 [i_0 - 2] [i_7 - 1]), (arr_4 [i_0 + 1]))))))));
                        var_35 = (min(6, 3804975695));
                        arr_24 [i_0] [i_0] [i_7] [i_7] [i_7] = (arr_21 [i_7 - 1]);
                        var_36 = (max(var_36, (arr_21 [i_0 - 2])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            {
                var_37 *= ((var_8 & ((1 ? (arr_10 [i_9 + 1] [12]) : (arr_10 [i_9 + 1] [4])))));
                arr_29 [i_8] [i_9 + 2] = ((((((max((arr_23 [i_8] [i_9] [i_8] [i_8]), var_6))) - ((1 ? var_9 : var_5))))) ? ((min(2439783302, (((var_3 || (arr_9 [i_8] [i_8]))))))) : var_16);
            }
        }
    }
    #pragma endscop
}
