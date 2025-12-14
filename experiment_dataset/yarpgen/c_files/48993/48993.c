/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_12 > (max(3, 806904645)))))));
    var_15 |= var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (min(var_16, ((var_4 ? (arr_1 [i_0]) : ((((arr_1 [i_0]) < (arr_1 [i_0]))))))));
        var_17 = (max(var_17, ((((arr_0 [i_0] [i_0]) ? var_2 : (arr_0 [7] [7]))))));
        var_18 *= ((806904652 & (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 += arr_3 [i_1];
        var_20 -= (min(806904629, 830495313));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_7 [i_1] = ((((var_7 || (arr_4 [i_1])))) / (min((arr_4 [i_2]), (arr_4 [i_1]))));
            var_21 -= 1968097240;

            /* vectorizable */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_22 = (~-9);
                var_23 = (arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2]);
            }
            arr_10 [i_2] [i_1] [i_1] = (((var_0 ? -18446744073709551614 : var_5)));
        }
        var_24 = (min(var_24, -806904672));
    }
    var_25 -= (((((var_9 ? (var_11 != var_7) : (min(-806904637, var_5))))) && var_12));
    #pragma endscop
}
