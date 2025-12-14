/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((!18370189010563055787) ? ((var_2 ? -var_6 : var_3)) : (((((!var_9) <= 76555063146495829))))));
    var_13 = var_10;
    var_14 = (min((min((var_3 != var_4), (var_8 / var_7))), (((!(~65522))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [6] |= 51323;
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) + (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [1] = (((((var_4 ? var_9 : 31))) | 76555063146495829));
        arr_8 [i_1] = ((arr_5 [1]) >> (((arr_5 [i_1]) - 5192014878755347280)));
    }
    #pragma endscop
}
