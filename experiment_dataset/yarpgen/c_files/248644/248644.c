/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = 1;
                                var_16 = ((((var_3 ? var_7 : 1))));
                                arr_10 [i_0] [i_1] [10] [i_0] [i_4] = ((((min(2, 253))) ? ((max(var_12, (arr_3 [i_0] [i_2])))) : (~2)));
                                var_17 = (min(37, var_7));
                                var_18 = (253 ? (((((-5505 ? 2 : 62)) == 1))) : (arr_6 [i_0] [i_1] [i_0] [i_3] [i_4]));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_14 [i_0] [11] [i_0] = 254;
                    var_19 = (i_0 % 2 == 0) ? ((((max(-3, ((4294967295 ? 0 : 4294967295)))) << ((((253 ? (arr_2 [i_0]) : ((-1 ? 1 : 1)))) + 105))))) : ((((max(-3, ((4294967295 ? 0 : 4294967295)))) << ((((((253 ? (arr_2 [i_0]) : ((-1 ? 1 : 1)))) + 105)) - 190)))));
                    var_20 = (((((-var_5 ? 1 : ((var_4 ? 9223372036854775807 : var_6))))) <= var_7));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_21 |= (((arr_11 [i_1]) / var_13));
                    var_22 = ((1 ? ((var_6 ? 1 : var_14)) : 0));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] = ((~(arr_9 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])));
                    var_23 = ((var_12 ? (9 / var_11) : ((0 ? var_10 : 32))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_24 = var_3;
                    arr_24 [i_0] [i_0] [i_8] = (((((13 / ((var_8 ? 13226841585955879659 : var_8))))) ? (((-1 % ((((arr_9 [i_0] [i_1] [9] [i_0] [i_8]) ? (arr_13 [i_0] [i_1] [i_0]) : 254)))))) : -1));
                    var_25 = ((~((9 ? -124 : 0))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_26 ^= var_4;
                                var_27 = ((-(-var_8 / 1)));
                            }
                        }
                    }
                }
                var_28 = (max(var_28, (((((min(1, -1))) ? ((-124 ? (arr_20 [i_0 + 3] [16] [i_1]) : 63)) : 136)))));
            }
        }
    }
    var_29 = (max(var_29, (4 == 28)));
    var_30 -= (255 & 74);

    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_31 = var_1;
        arr_32 [i_11] = 1;
        var_32 -= ((((((((arr_8 [i_11] [i_11] [i_11] [i_11] [6] [i_11] [i_11]) + 2147483647)) << (((arr_15 [i_11] [6] [i_11]) - 627183482))))) % (arr_15 [i_11] [i_11] [i_11])));
    }
    var_33 = 0;
    #pragma endscop
}
