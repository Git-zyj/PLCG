/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_13 = min(33554431, (arr_1 [i_0] [i_0]));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_14 *= (max(((((((1 ? -1617470363 : var_1))) == (arr_4 [8] [1] [8])))), (((arr_4 [i_0 + 1] [i_0 + 1] [4]) ? -846883965 : 1838218421))));
            var_15 = (min(var_15, var_6));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0 + 2] [i_0] = (max((arr_0 [i_0]), var_11));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_16 = (min((((((arr_5 [i_0]) & 53549)))), (arr_6 [i_0] [i_0] [i_0 + 1])));
                arr_14 [1] [i_0] [i_3] [i_2] = (((((((((arr_13 [i_0 + 1] [i_0] [i_3]) ? 65532 : -1617470363))) ? (!3772843465879358585) : ((min(1, 1)))))) ? 47858 : (~1)));
                var_17 = (arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1]);
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_18 = (min(var_18, ((((4095 ? -5656 : var_6))))));
                var_19 = (arr_15 [i_0 - 1] [i_0] [i_0] [i_0 + 2]);
            }
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                arr_21 [i_2] [i_2] [i_2] [i_0] = ((max((arr_7 [i_5 - 2] [i_5 - 2] [i_5]), (arr_7 [i_5] [i_5 - 1] [i_0]))));
                var_20 = (max((((((1 ? 1 : 47858))) ? (arr_18 [i_0] [i_5 - 2] [i_0]) : 1)), 1));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_21 = ((0 ? var_7 : ((min((-1762131817 != 1), ((1 ? 239 : 5)))))));
                var_22 = var_1;
                arr_24 [i_0] [i_0] = ((((!(arr_1 [i_0] [i_0 + 1]))) ? (228 | var_9) : (((arr_12 [i_0] [i_0 - 1] [i_0 + 1]) ? (arr_1 [i_0] [i_0 - 1]) : (arr_12 [i_0] [i_0 + 2] [i_0 - 1])))));
            }
            arr_25 [i_0] = (((125 && 6641) ? ((((arr_1 [i_0] [i_0 + 2]) > 1))) : ((((((arr_20 [i_0] [i_0] [i_2]) ? var_9 : var_11))) ? ((((arr_13 [i_0 + 2] [i_0] [i_0 + 2]) && (arr_5 [i_0])))) : var_1))));
            var_23 = var_0;
        }
        var_24 = 157;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_25 = (((arr_13 [i_7 - 1] [i_7] [14]) ? (arr_13 [i_7 + 1] [i_7] [i_7 + 2]) : 1));
        arr_28 [i_7] [i_7] = ((~(arr_27 [i_7 + 2])));
    }
    var_26 = (max(var_26, var_3));
    var_27 = ((var_12 ? (((1 ^ 1) ? 7165233695897360050 : ((var_6 ? var_10 : var_6)))) : var_3));
    #pragma endscop
}
