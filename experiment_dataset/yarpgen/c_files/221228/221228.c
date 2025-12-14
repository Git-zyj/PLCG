/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 ^ (((((var_10 ? var_4 : var_4)) <= (var_10 & var_5))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (((-var_5 != var_1) ? var_4 : ((((var_8 & var_0) * (arr_0 [i_0]))))));
        var_15 = (arr_3 [i_0] [i_0]);
        var_16 = (((((~(arr_3 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((-2147483647 - 1) | -1138616361170092692))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = ((((((arr_7 [i_2] [i_1] [i_0]) ? var_3 : var_3))) ? var_9 : (((var_4 + 9223372036854775807) >> (((((arr_8 [i_2] [i_2]) ? var_2 : var_7)) - 248242797))))));
                    var_18 = (((((var_9 ? var_8 : (arr_6 [i_0] [i_1] [i_2])))) ? (arr_9 [i_0]) : ((((((var_4 ? var_7 : var_8))) ? var_11 : (((arr_1 [i_0] [i_1]) & var_3)))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_19 = (arr_4 [i_3] [i_4]);
            arr_15 [9] [i_3] [i_4] = var_9;
            var_20 = ((((((var_4 / (arr_13 [i_3] [i_3] [i_4]))) <= (((var_2 ? var_1 : (arr_9 [i_3])))))) ? ((((~var_5) == (arr_5 [i_3] [21] [i_3])))) : (((arr_11 [i_3] [12]) ? var_6 : var_5))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_21 ^= (((((arr_17 [i_5] [i_3]) & (arr_17 [i_3] [i_3]))) & ((((!(~var_8)))))));
            var_22 = ((-(((((22 ? var_5 : var_1))) ? ((var_1 ? var_4 : (arr_5 [i_3] [i_3] [i_3]))) : var_9))));
            var_23 ^= var_8;
            var_24 = (((arr_13 [i_3] [i_5] [i_3]) ? var_10 : (((min(var_0, (arr_5 [i_3] [i_5] [i_5])))))));
        }
        var_25 = ((((((var_8 + var_10) ? (var_2 & var_11) : ((12 ? 31 : 276854760))))) ? ((var_10 & (0 * 1081102761))) : var_5));
        var_26 = (min(var_26, (((!(arr_1 [i_3] [i_3]))))));

        /* vectorizable */
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            var_27 -= (((var_9 <= var_4) >= (var_12 & var_1)));
            var_28 = var_5;
            var_29 = ((((var_2 & (arr_8 [i_6] [i_6]))) * (var_7 >= var_0)));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_24 [i_7] [i_7] = (~(((((var_9 ? (arr_1 [i_3] [i_3]) : var_8))) ? var_7 : -var_6)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_29 [i_3] [i_7] [i_8] [i_9] = var_4;
                        var_30 = var_5;
                        var_31 |= (((-2147483647 - 1) / (((63 >> var_1) ? 127 : 0))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
