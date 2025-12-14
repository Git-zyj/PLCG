/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_18 += 1;
        var_19 -= (78 != (((!var_9) ? (((((arr_0 [i_0 + 2]) || 178)))) : 78)));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_4 [1] &= 89;
        var_20 ^= ((~(arr_3 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_21 ^= (~var_13);
        var_22 = ((~(var_1 | 78)));
    }
    var_23 = (min(var_23, ((min((((!(!var_17)))), var_10)))));
    var_24 ^= var_5;
    var_25 ^= (((((-var_10 * (!var_15)))) || ((min((var_12 < 78), -var_0)))));
    #pragma endscop
}
