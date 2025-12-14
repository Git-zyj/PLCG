/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((max(var_5, 0))) ? var_9 : (((max(var_4, var_7)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_13 ^= ((65535 >= (-2147483647 - 1)));
        var_14 = 2147483637;
        var_15 = (min(var_15, (((32767 ? (arr_3 [i_0] [i_0]) : var_2)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_16 = arr_0 [i_1];
        arr_7 [i_1] [i_1] &= (((-32767 - 1) ^ (((-2147483647 - 1) % (max(-2147483641, 129))))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (arr_9 [i_2 + 2] [i_2])));
        var_18 *= (max((arr_10 [i_2]), ((~((((arr_8 [i_2]) && var_7)))))));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_19 = var_0;
        arr_16 [9] &= ((120 == (min(((((arr_9 [i_3] [i_3]) >= (arr_10 [i_3 - 2])))), (-1 - 136)))));
    }
    #pragma endscop
}
