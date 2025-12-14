/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_6 << 0) >> ((((-(25 << 22))) + 104857649))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_13 -= ((((((236 ? 63 : (arr_0 [i_0 + 1])))) || (((arr_1 [6]) >= 63)))));
        arr_2 [i_0] = (-9223372036854775807 - 1);
        var_14 -= (((((max(194, (arr_0 [i_0 - 1]))))) + ((0 ? 1 : -9223372036854775794))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_7 [i_0] [9] [i_0] [i_0] = 152;
                    var_15 = (max(var_15, var_2));
                    arr_8 [i_0 - 1] [i_0] [i_0] [i_0] = ((((((min(0, 18446744073709551615))) ? ((var_10 ? (arr_3 [i_0] [i_0] [8]) : var_11)) : 0)) / -18446744073709551615));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
    {
        var_16 = ((((arr_10 [i_3]) ? var_10 : 826637870)));
        arr_13 [i_3 + 1] = var_10;
        arr_14 [i_3] [4] = 17;
        var_17 = (max(var_17, 59));
        var_18 -= var_0;
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_19 = (min(var_19, var_1));
        arr_17 [i_4] [i_4] = (((((((min((arr_15 [i_4]), (arr_15 [i_4])))) ? (arr_6 [2] [i_4 - 1] [i_4] [i_4 - 1]) : (~246)))) ? (((((248 ? (arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]) : 0)) == (var_4 >= var_0)))) : (arr_10 [0])));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_24 [i_5] [i_5] [i_5] [i_4 + 1] = 18446744073709551615;
                        arr_25 [i_6] = ((((7 ? 18446744073709551611 : 253)) == (arr_6 [i_6] [1] [i_5] [i_6])));
                    }
                }
            }
        }
    }
    var_20 -= var_7;
    #pragma endscop
}
