/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 32750;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((~(min(((max(27, -19990))), ((~(arr_1 [i_0])))))));
        var_11 = ((!((max(19979, (arr_1 [i_0]))))));
        var_12 = ((~(arr_0 [i_0] [6])));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_1 - 1] [i_0] = (((arr_3 [i_1 - 1]) ? (arr_3 [i_0]) : var_1));
            var_13 = ((89 ? (arr_0 [i_1] [11]) : var_9));
            var_14 = (max(var_14, (!3087944649169832918)));
            arr_8 [i_0] = var_5;
            arr_9 [i_0] [3] [i_1] = (arr_0 [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_15 = (min(var_15, (((~(var_0 | 122))))));
            var_16 = (min(var_16, (arr_12 [i_0] [i_0])));
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = ((~(~var_1)));
        var_17 = -122;
        var_18 |= var_1;
    }
    #pragma endscop
}
