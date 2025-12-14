/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((((((-(arr_1 [i_0] [i_0])))) >= ((var_1 ? 22 : var_5)))))));
        var_15 = 1682;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 117440512;
        var_16 += (~-117440489);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_8 [i_2] [i_2] |= ((347072270088164158 ? 1546083074 : 21));
        arr_9 [i_2] [i_2] = ((((((var_11 >= ((329637470782074766 >> (((arr_6 [i_2] [i_2]) - 5315011144050954528)))))))) % (((((var_5 / (arr_7 [i_2] [i_2])))) ? 7887403373764276855 : (max(117440522, (arr_7 [i_2] [i_2])))))));
        var_17 *= 70368744177663;
    }
    var_18 = var_4;
    #pragma endscop
}
