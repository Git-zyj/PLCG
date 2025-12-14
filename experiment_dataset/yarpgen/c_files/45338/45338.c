/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((min(var_3, 18446744073709551615))) ? var_3 : (var_2 + var_5))) + var_3));
    var_12 = 1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 ^= 64;
        var_14 = (((((arr_0 [i_0 + 1]) + 9223372036854775807)) << (((arr_0 [i_0 + 2]) + 7249166394535263453))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (arr_5 [i_1 + 2] [i_1 - 1])));
        arr_6 [i_1] = (((((arr_5 [i_1 + 2] [i_1]) > (arr_2 [i_1 + 1]))) ? ((max((arr_2 [i_1 - 1]), (((var_10 && (arr_0 [i_1 + 2]))))))) : (+-773038980)));
        arr_7 [i_1] = (arr_4 [i_1 - 1] [0]);
        arr_8 [i_1] [16] = ((((var_2 / (((arr_2 [i_1]) / var_6)))) << (((max((arr_4 [i_1 + 2] [i_1 + 2]), ((max((arr_1 [i_1]), 1))))) - 2874439039))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        var_16 *= (((arr_10 [i_2 - 1]) && (arr_9 [i_2])));
        var_17 = (((arr_9 [i_2]) << (((arr_9 [i_2 - 2]) - 3810832276))));
    }
    var_18 *= var_10;
    #pragma endscop
}
