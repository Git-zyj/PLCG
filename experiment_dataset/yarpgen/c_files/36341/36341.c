/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 252;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (min(var_17, ((((arr_2 [i_0]) >> ((((~(((((arr_0 [2]) + 2147483647)) >> (var_15 - 3884585919))))) + 1073736418)))))));
        var_18 = ((((var_8 + ((576460752303423487 ? -30225 : 10)))) * (((!(1 - 4294967295))))));
        var_19 |= (!2299128084);
        var_20 = ((((24 << (!var_5)))) / (max(197, 24)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_21 += ((((~(arr_3 [i_1] [i_1]))) < (43 | 17)));
        var_22 = ((var_1 + (arr_3 [i_1 + 1] [i_1])));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (((~(arr_3 [i_2 + 1] [i_2 - 1]))))));
        var_24 = (arr_4 [i_2]);
        var_25 = (min(var_25, 197));
        var_26 -= var_4;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_27 = (max(var_27, ((((((arr_9 [8] [i_3]) < (arr_7 [i_3] [i_3]))) ? ((((arr_7 [i_3] [i_3]) ? (arr_9 [i_3] [11]) : (arr_9 [i_3] [i_3])))) : var_5)))));
        var_28 = max((min((arr_8 [i_3]), (arr_9 [i_3] [i_3]))), (arr_7 [i_3] [i_3]));
    }
    #pragma endscop
}
