/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (((1 <= 1129) ? (((!(arr_0 [1])))) : (arr_1 [i_0])));
        var_18 = (min(var_18, ((((arr_1 [i_0]) != (arr_0 [i_0]))))));
        var_19 = (arr_1 [i_0]);
        var_20 ^= ((1 ? var_1 : (arr_1 [i_0])));
        arr_2 [i_0] = ((53201 ? -16384 : 1));
    }

    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_21 += ((-((max((arr_5 [i_1 - 2]), (arr_5 [i_1]))))));
        var_22 = ((((((((arr_4 [i_1] [i_1]) ? (arr_5 [i_1]) : 1))) ? ((var_3 ? 32740 : (arr_3 [i_1]))) : 1)) & ((-(((-32762 + 2147483647) >> (arr_5 [21])))))));
        arr_6 [i_1] [i_1] = (max(((max(1, 12))), (arr_3 [i_1 + 1])));
        var_23 = (((!var_4) ? ((((arr_3 [i_1 - 2]) && var_3))) : ((((arr_3 [i_1 - 2]) && (arr_5 [i_1 - 1]))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_24 = -1;
        arr_9 [i_2] = ((((min((arr_7 [i_2]), (arr_7 [i_2])))) < (arr_7 [i_2])));
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_25 &= ((1 ? ((((max((arr_0 [i_3]), -3225174189823444053))) ? (36204 & 1) : var_15)) : (arr_3 [i_3 + 2])));
        var_26 = (max((arr_8 [i_3 + 2] [6]), var_2));
        var_27 = ((-var_12 ? var_2 : 6819169265694755686));
    }
    var_28 = (!-var_13);
    #pragma endscop
}
