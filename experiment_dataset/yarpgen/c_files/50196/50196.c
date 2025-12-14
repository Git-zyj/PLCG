/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = var_8;
        var_13 = (min(var_13, (((((~(max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))))) ^ ((((((-1950360064 ? -1950360065 : (arr_1 [i_0] [i_0])))) ? (~1950360064) : ((var_1 ^ (-127 - 1)))))))))));
        arr_2 [i_0] [i_0] = 5673710900549171395;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((arr_1 [i_1 + 1] [i_1 + 1]) ? (max((arr_4 [i_1]), (arr_5 [i_1 + 1]))) : (arr_0 [i_1]));
        var_14 &= (min(((((((arr_4 [i_1]) ? var_3 : 18446744073709551606))) ? ((var_4 ? 8260528179889505569 : (arr_4 [i_1]))) : var_10)), (((((37 ^ (arr_0 [i_1])))) ? 113 : ((36 ? (arr_3 [i_1] [i_1]) : var_11))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_15 = (arr_9 [i_2 + 1]);
        arr_10 [i_2] = (!15490);
        var_16 = var_2;
        arr_11 [i_2 - 1] = ((var_4 / (((arr_9 [i_2 - 1]) / var_5))));
        var_17 = (arr_9 [i_2 - 1]);
    }
    var_18 |= var_1;
    var_19 = 2623143578;
    var_20 = var_5;
    #pragma endscop
}
