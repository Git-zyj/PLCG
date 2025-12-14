/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_16 = (arr_2 [i_0 + 3] [i_0 + 3]);

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_3] = 411099951;
                        var_17 = 21;
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_18 = (arr_13 [i_0] [i_0 + 3] [i_3] [i_0 + 1] [i_0 + 3] [19] [5]);
                        arr_18 [i_0] [i_3] [i_0] [i_0 + 1] = ((arr_5 [i_0 + 2] [i_5 - 1]) ? (arr_11 [i_0 - 1] [i_5 - 1] [i_2] [i_3] [i_5] [i_3]) : -6429);
                        arr_19 [20] [20] [20] [i_3] [i_3] [i_3] = (((arr_12 [i_0] [i_5 + 1] [i_5 + 1] [i_3] [i_5 + 1] [i_1 - 1]) ? (arr_3 [i_0 - 1] [i_0 + 3]) : var_4));
                        var_19 = (((arr_8 [i_3] [i_0 + 2] [i_0 + 2] [i_3]) ? (arr_8 [i_3] [i_0 + 2] [i_0] [i_3]) : (arr_8 [i_3] [i_0 + 2] [i_0] [i_3])));
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_20 = ((-597607541 ? ((56817 ? (arr_11 [20] [i_1 + 3] [i_2] [i_3] [i_6] [i_1 + 3]) : (arr_4 [9] [i_1]))) : ((411099951 ? (arr_9 [i_6] [i_6] [i_2] [i_3] [i_3]) : var_6))));
                        arr_22 [i_0] [9] [i_3] [i_0] [i_2] = (arr_3 [i_0 + 3] [i_3]);
                        arr_23 [i_1] [i_3] = var_2;
                    }
                    var_21 = (max(var_21, 597607555));
                    var_22 = ((arr_17 [i_3] [i_0 + 1]) * (arr_17 [i_3] [i_0 + 3]));
                }
                arr_24 [i_0 - 1] [i_0] [i_0 + 2] [14] = (((arr_1 [i_0] [i_1]) ? (arr_2 [i_0 + 3] [1]) : (arr_10 [i_2] [i_1] [i_0 - 1] [i_1 + 3])));
                var_23 = ((-(arr_1 [3] [i_0 + 2])));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_24 ^= 4294967295;
                arr_28 [i_0 - 1] [i_1] [i_1] &= -762020822;
            }
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                arr_31 [i_0 + 2] [i_1 + 1] [i_8 + 1] = 171787723;
                var_25 = (((arr_4 [i_1 + 4] [i_8 + 2]) ? 32767 : var_14));
            }
            var_26 = ((var_2 << (var_11 - 2976190513)));
        }
        var_27 = (arr_11 [10] [8] [i_0] [18] [i_0] [i_0]);
    }
    var_28 = 15;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            {
                arr_36 [i_9] [i_9] = (((((((var_9 / (arr_26 [i_9])))) * (arr_34 [i_10] [i_9]))) * ((((arr_25 [i_9] [i_9] [i_9] [i_10]) ? 198 : 14644)))));
                arr_37 [i_9] [i_9] [i_10] = (max((min((arr_6 [i_9] [i_9] [i_9] [i_9]), (~10))), ((((-2147483647 - 1) ? 945914588 : 228939933)))));
                var_29 = (max(var_29, (((3892 >> (((~228939933) - 4066027333)))))));
                arr_38 [i_9] [i_9] [i_9] = ((((max(var_12, var_0))) ? ((min((max(171787732, var_8)), var_6))) : ((1 ? (((17 ? -597607541 : var_3))) : (-1159024872 / 4747328286465863505)))));
                arr_39 [9] [i_10] [i_9] = (max(0, 171787706));
            }
        }
    }
    #pragma endscop
}
