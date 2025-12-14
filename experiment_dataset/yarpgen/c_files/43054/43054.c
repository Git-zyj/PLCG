/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (119 / 133);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = 237;
        var_22 = (min(var_22, 253));
        arr_2 [i_0] = -134;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (min((((arr_3 [i_1] [i_1]) ? 66 : (arr_3 [i_1] [i_1]))), ((187 % (arr_3 [i_1] [i_1])))));
        var_23 = ((((!(96 * var_16))) ? ((((((205 ? var_6 : var_17))) && 144))) : var_8));
        var_24 = 223;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_10 [4] [i_2] = ((((-203 ? 55 : 223)) < (arr_8 [i_2])));
        arr_11 [i_2] = arr_6 [i_2];
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_25 = (min(((min(127, 178))), ((~(arr_8 [i_3])))));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_26 ^= (((176 / 53) + (arr_9 [i_3])));
            arr_16 [i_3] [i_4] [i_3] = ((-(min((!var_6), (var_8 % var_13)))));
            var_27 += 24;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_20 [i_3] [i_5] [i_5] = (((arr_13 [i_3] [i_3]) | (arr_13 [i_3] [8])));
            var_28 = ((-(arr_17 [i_3] [i_3])));
            var_29 = arr_18 [i_3] [12] [i_3];
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            arr_23 [i_6] = ((((var_17 * (arr_8 [i_3]))) + (~48)));

            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_30 = 167;
                            var_31 = arr_25 [i_3] [6] [i_7] [i_7];
                            arr_33 [7] [i_6] [i_7] [7] [i_9] = var_10;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_40 [i_3] [i_6] [i_7] [i_7] [8] [i_7] [i_11] = (((arr_12 [i_10 - 1]) ? var_16 : (arr_30 [i_7] [4] [i_7 - 1] [i_7])));
                            var_32 = (max(var_32, (((((var_4 <= (arr_38 [i_11] [i_6] [i_7 + 1] [i_10 + 1] [i_11]))) ? (var_8 / 65) : ((((arr_27 [i_3] [i_6] [i_7] [i_10 - 2]) == (arr_14 [i_3])))))))));
                        }
                    }
                }
                var_33 = (!var_8);
                var_34 = arr_37 [17] [i_3] [i_6] [i_6] [i_7 + 2];
            }
        }
        arr_41 [i_3] = ((((!(((var_5 ? 134 : (arr_21 [i_3])))))) && (((-((142 ? var_3 : 202)))))));
        var_35 = (!167);
    }
    var_36 = ((-((((228 ? 136 : var_14)) + (82 / 168)))));
    #pragma endscop
}
