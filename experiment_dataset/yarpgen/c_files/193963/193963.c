/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min(((~(~7980879030008522644))), ((max(var_8, ((3803012832 ? -37 : -30)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [5] [5] = ((65280 || (((-37 ? ((((arr_1 [i_0]) == 0))) : (37 ^ 32767))))));
        arr_4 [i_0] = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_12 = (max(var_12, 25));
        var_13 &= ((-(arr_5 [i_1])));
        arr_7 [i_1] = ((-44 ? 52 : var_6));
        var_14 = (max(var_14, (((((((arr_5 [i_1]) >> 35))) ? (((arr_5 [1]) ? 437725318499102610 : (arr_5 [i_1]))) : (arr_5 [i_1]))))));
        var_15 = ((((((arr_5 [i_1]) || (arr_6 [i_1])))) << (43 & -43)));
    }
    var_16 -= (var_6 & var_9);
    #pragma endscop
}
