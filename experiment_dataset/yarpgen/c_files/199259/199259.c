/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] &= (((arr_2 [i_0]) / (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_10 = (max(((min(var_4, (arr_1 [i_0])))), 1048575));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_11 [i_0] [i_1] [i_0] = (arr_2 [i_0]);
                var_11 = var_1;
                arr_12 [i_0] [i_1] [i_2] = arr_10 [i_1] [i_2];
            }
            var_12 = (min(var_12, (arr_9 [i_0] [i_0])));
        }
        arr_13 [i_0] [i_0] = var_7;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_16 [i_3] &= -5066647004391236578;
        arr_17 [i_3] [i_3] = var_0;
        var_13 = ((4257851316 ? 65535 : 2007615625));
        arr_18 [i_3] = ((var_0 ? (arr_0 [19] [i_3]) : (((((~(arr_10 [i_3] [i_3])))) ? (arr_9 [i_3] [i_3]) : (arr_6 [i_3] [i_3] [i_3])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_23 [13] [i_4] = 9223372036854775792;

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_14 = var_5;
            var_15 ^= (~40);
            arr_28 [i_4] [i_5] [i_4] = ((-(arr_22 [i_5])));
        }
        arr_29 [i_4] [i_4] = (!0);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_32 [i_6] = (((arr_31 [i_6]) ? (((arr_30 [13] [i_6]) ? (arr_31 [i_6]) : (arr_30 [i_6] [i_6]))) : (arr_30 [i_6] [i_6])));
        arr_33 [i_6] = (arr_31 [i_6]);
        var_16 = -7372877310628679235;
    }
    var_17 = ((!(((-var_8 ? ((7372877310628679235 >> (7372877310628679235 - 7372877310628679181))) : -7372877310628679235)))));
    var_18 = ((((((-7372877310628679238 ? 5414413349860448543 : var_7)) - var_9)) >> ((((var_2 ? (max(var_4, var_7)) : 9223372036854775807)) - 4104342563422380029))));
    #pragma endscop
}
