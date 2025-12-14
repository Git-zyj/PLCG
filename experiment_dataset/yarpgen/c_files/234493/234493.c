/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_7 ? var_3 : var_11)) == ((6329896179647634513 ? var_10 : (-127 - 1))))) ? var_12 : var_2));
    var_15 = 18293796697759574479;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_0 [i_0]);
        arr_3 [i_0] = 19050;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 512;
        var_17 ^= 4090920163731319526;
        var_18 &= -1;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (min((((0 < (((0 - (arr_5 [i_2]))))))), 14955));
        arr_13 [i_2] |= 1177847353;
        var_19 = 80;
    }
    #pragma endscop
}
