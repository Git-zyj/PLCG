/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_10 <= var_5);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((var_0 == var_4) != var_2));
        var_20 = (((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : 19117)) : (arr_0 [i_0])));
        var_21 = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_22 = (var_12 | 19088);
                    arr_11 [i_1] [i_1] [i_1] [i_3] = ((((0 && (arr_3 [i_3] [i_2]))) && (arr_0 [i_2])));
                    arr_12 [i_1] [i_2] [i_1] = ((~(arr_10 [i_1])));
                    var_23 *= (((arr_8 [i_2]) < (arr_8 [i_2])));
                }
            }
        }

        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            var_24 = (((arr_14 [i_4 - 3]) ? (arr_14 [i_4 - 3]) : 25754));
            var_25 = ((arr_3 [i_4 - 2] [i_4]) + (arr_3 [i_4 - 2] [i_4 - 1]));
            arr_17 [i_4] [i_1] [i_1] = ((arr_7 [i_4] [i_4 + 1]) ? (arr_15 [i_4] [i_4 - 1] [i_4 + 2]) : -6754310000458514092);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_26 = (max(var_26, (((((arr_24 [i_5]) != (arr_23 [i_1] [i_1] [i_1] [i_1] [9] [7])))))));
                            var_27 *= (((4294967295 ? var_6 : var_9)));
                            var_28 *= 4470972390482269276;
                        }
                    }
                }
            }

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_29 = (((arr_5 [i_5]) <= (arr_5 [i_1])));
                var_30 = (((arr_22 [i_9] [i_5] [i_1]) ? (arr_22 [i_5] [i_5] [5]) : (arr_22 [i_1] [i_1] [i_1])));
            }
        }
        var_31 = (arr_27 [i_1] [i_1]);
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_32 = (((((4294967284 > 7914524880866245261) > 7324420452352837037)) ? ((((404180320 ? 66536230 : 188197625)) % (arr_10 [i_10]))) : ((((arr_3 [i_10] [2]) ? (arr_23 [i_10] [i_10] [i_10] [i_10] [6] [i_10]) : (arr_15 [i_10] [i_10] [9]))))));
        var_33 = (!var_14);
    }
    #pragma endscop
}
