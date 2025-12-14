/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_13));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((((!(arr_1 [i_0] [i_0]))) ? var_7 : 108))) ? (176 + 6266736466447258805) : ((((!-1219056998) ^ (!0)))))))));
        var_17 -= ((var_6 ? (((176 >> (((arr_1 [3] [i_0]) - 8754764959566560714))))) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_18 -= 65535;

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_6 [i_1] [i_1] [20] &= ((1 ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 + 2])));
            var_19 ^= var_10;
            var_20 *= (((arr_5 [i_1 - 3]) ? var_3 : (arr_5 [i_1 + 1])));
        }
        var_21 *= -11966;
        var_22 ^= (((arr_4 [i_1 - 4] [i_1 - 1]) ? var_7 : (arr_3 [i_1])));
    }
    for (int i_3 = 4; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_23 ^= min((((max(-1728992419, 19884)) ^ ((min((arr_8 [i_3] [i_3]), -91))))), ((var_12 ? var_10 : var_7)));
        var_24 *= ((((((((arr_4 [i_3 + 2] [i_3]) + 2147483647)) >> (253 - 241)))) ? (((max(var_8, (arr_5 [i_3 - 4]))))) : (min((arr_5 [i_3 + 1]), var_13))));
        var_25 = (arr_2 [i_3] [i_3]);
        var_26 |= 11030;
        var_27 += (-(max((~5448846658794974669), (arr_7 [7] [i_3]))));
    }
    #pragma endscop
}
