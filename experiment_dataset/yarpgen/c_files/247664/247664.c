/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = ((!(((((((arr_0 [6] [6]) || var_3))) << (((arr_1 [i_0] [i_0]) + 1788204377961911232)))))));
        var_13 += ((!(((var_0 ? ((var_7 + (arr_0 [i_0] [i_0]))) : ((~(arr_0 [19] [i_0]))))))));
        var_14 = (((((arr_0 [i_0] [i_0]) + 2147483647)) << ((((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = ((var_4 << (var_10 - 3910767102)));
        var_16 = ((arr_3 [i_1]) ? (arr_0 [i_1] [i_1]) : 1);

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_17 = 1293687812;
            arr_8 [i_1] [i_1] = (arr_3 [i_2]);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_12 [i_1] [i_1] = (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_3])));
            var_18 = (min(var_18, (!var_8)));
        }
        var_19 = ((var_8 || (arr_2 [i_1])));
        var_20 = (min(var_20, (arr_10 [i_1])));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_21 = (~32767);
        var_22 = (min(var_22, ((-(arr_14 [i_4])))));
    }
    var_23 = ((!(((((24 << (var_1 - 7813)))) || 520192))));
    var_24 = (max((((!255) ? 1 : var_5)), var_3));
    var_25 = ((max(var_7, var_8)));
    var_26 = 255;
    #pragma endscop
}
