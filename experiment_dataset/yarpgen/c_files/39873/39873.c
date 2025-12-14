/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] |= var_7;
        arr_5 [i_0] [i_0] = (((!1) ? var_3 : var_7));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((((min((max((arr_2 [i_1]), (arr_1 [i_1] [i_1]))), 100))) ? var_4 : ((((max(var_7, (arr_0 [i_1])))) ? 6676 : var_10))));
        var_14 = (arr_6 [i_1] [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_15 ^= ((-1839780251124166791 ? 2147483647 : 712878170));
            var_16 = ((var_5 ? (arr_12 [i_2] [i_2]) : (var_0 / 83)));
        }
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_17 = (min(((max((min((arr_0 [i_3]), 24)), var_8))), 9223372036854775807));
        var_18 = ((((((arr_14 [i_3]) ? (arr_14 [i_3]) : (arr_14 [i_3])))) ? ((max(var_5, var_5))) : ((var_10 * (arr_14 [i_3])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_18 [i_4] = 3245555535;

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_21 [i_5] [i_5] = (arr_19 [i_5] [i_5] [i_5]);
            arr_22 [i_4] [i_5] [i_5] = var_3;
        }
        var_19 = ((((283311663825662363 ? var_4 : 3650789836)) == var_11));
        arr_23 [i_4] = -var_11;
        arr_24 [i_4] = var_4;
    }
    #pragma endscop
}
