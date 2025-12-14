/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = ((((((arr_1 [i_0] [i_0]) / 1659139107))) <= (((arr_1 [i_0] [i_0]) ? 0 : 8))));
        arr_3 [i_0] [i_0] = var_9;
        var_11 = (-9223372036854775796 ? 1 : 0);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_12 = ((((max(2646, ((-1257805398 ? -7569 : 15435079055742778852))))) ? ((max((!2640), (arr_9 [11] [1])))) : var_3));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_13 = 39547;
                            var_14 = 1;
                            arr_16 [2] [i_2] [i_3] [i_4] [i_5] = 4512942927042734836;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [5] [i_6] = (((arr_12 [i_2] [i_3]) ? var_6 : -6779));
                            var_15 = ((~(var_5 || var_1)));
                        }
                    }
                }
            }
        }
        arr_21 [21] = (min(var_8, 59297));
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        var_16 = ((!((62896 != (arr_13 [i_7 + 3] [i_7 + 3] [i_7] [i_7 - 1])))));
        arr_25 [i_7] = (min((((((max(1, 6)))) / (arr_24 [i_7 + 2]))), -32763));
    }
    var_17 = min(15, 58);
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    arr_36 [i_9] = ((1 ? ((((min(var_9, (arr_19 [21] [i_8] [i_10])))) ? (max(11655215556728342587, var_8)) : (((var_1 ? -1257805382 : var_4))))) : 1));
                    var_18 = ((((((arr_29 [i_8 + 2] [i_8 + 1]) >> (var_3 + 1177032941)))) ? (((var_0 ? (arr_19 [6] [i_9] [i_9]) : (arr_19 [i_8] [9] [i_10])))) : 4512942927042734836));
                }
            }
        }
    }
    #pragma endscop
}
