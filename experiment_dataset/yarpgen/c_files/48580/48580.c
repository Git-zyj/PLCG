/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min((-742953361855319336 / -62), (arr_2 [2])));
                var_13 = (min(((((var_0 * var_8) ? ((min((arr_3 [i_1]), -76))) : (arr_5 [i_1 - 1] [i_0 + 1])))), ((3238636327 ? -62 : 1056330969))));
                var_14 = (arr_4 [i_1] [i_1] [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_15 = (((arr_7 [i_1 - 3] [i_1 + 1] [i_0 - 1] [i_0 - 1]) | (arr_7 [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_0 + 1])));
                    var_16 = (((((~37266) + 2147483647)) >> (((~-42) - 31))));
                    var_17 = 9223372036854775800;
                }
            }
        }
    }
    var_18 = var_10;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_19 = (((((1056330969 ? 3238636327 : 17205988536741648332))) ? ((var_0 ? (arr_4 [i_4] [6] [i_3]) : var_0)) : 1056330968));
            arr_14 [5] [i_4] [i_4] = 1056330951;
        }
        arr_15 [1] [i_3] = (((arr_11 [i_3]) ? ((236357115 ? 62 : 3238636328)) : 187));
        var_20 = (((arr_10 [i_3] [i_3]) ? 7231647953125837182 : (arr_10 [i_3] [i_3])));
    }
    #pragma endscop
}
