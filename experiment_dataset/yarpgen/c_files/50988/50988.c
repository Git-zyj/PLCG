/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((-0 ^ (((~(arr_1 [i_0])))))) / ((((arr_1 [i_0 - 2]) | ((var_9 ? var_7 : var_0)))))));
        var_14 = (((arr_1 [i_0 - 2]) ^ ((-(0 != var_7)))));
        var_15 ^= ((~((var_6 ? var_6 : (min(18446744073709551615, var_9))))));
        var_16 &= (arr_1 [i_0 - 2]);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((((arr_4 [i_1 - 1]) << ((var_3 ? var_6 : (arr_0 [i_1]))))))));
        var_18 -= var_6;
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_19 += var_7;
        var_20 = (min(var_20, (arr_5 [i_2])));
        var_21 = (max(var_21, var_11));
        var_22 = ((arr_3 [i_2 - 4]) ? ((17 << (49401 - 49347))) : var_1);
        arr_8 [i_2] &= (arr_4 [i_2 + 1]);
    }
    var_23 = (max(var_23, ((((var_10 ^ ((var_0 ? var_1 : var_12)))) - ((max(((var_0 ? var_1 : -30390)), var_4)))))));
    var_24 = var_13;
    var_25 = var_3;
    #pragma endscop
}
