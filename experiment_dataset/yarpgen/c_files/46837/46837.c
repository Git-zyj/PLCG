/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [7] = (((((-21787 ? var_4 : (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? var_14 : 8053063680)) : var_9));
        arr_3 [i_0] = 28612;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 = var_0;
        arr_6 [i_1] = (max((11 - 65521), (((arr_4 [i_1]) ? var_6 : 1572864))));
        arr_7 [i_1] [6] = ((var_5 % (((((var_8 >> (((arr_4 [i_1]) + 31929)))) >= 7)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (arr_8 [4] [i_2]);
        arr_12 [i_2] &= ((-370151624 ? (arr_9 [i_2]) : 8053063690));
        arr_13 [i_2] [i_2] = (((arr_4 [i_2]) & 18446744065656487939));
    }
    var_19 = ((4294967286 ? ((((18446744065656487950 + var_15) ? var_7 : ((max(25, var_7)))))) : (max((max(12100141767755992325, var_17)), (var_12 > 18235945752014842969)))));
    #pragma endscop
}
