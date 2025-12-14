/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(((((arr_0 [13]) == ((var_11 ? (arr_0 [i_0]) : (arr_0 [11])))))), ((7140904437409574563 ? (arr_1 [i_0]) : 1084992913))));
        var_16 = (((arr_0 [i_0]) && (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((65531 || 0) ? (arr_5 [i_1 + 2]) : (((arr_5 [i_1]) | var_5))));
        var_17 = (~65532);
        arr_8 [i_1] [i_1] = 1850472400;
        arr_9 [i_1] [i_1] = (65519 | 0);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_18 = (((arr_11 [i_2 + 1] [i_2]) ^ 65517));
        var_19 = ((var_12 ? (((65501 >> (7936 - 7905)))) : (((arr_6 [i_2 + 2]) ^ 65519))));
    }
    var_20 = (!var_13);
    var_21 = ((3209974383 != ((((var_10 + 2147483647) << (var_12 - 143))))));
    #pragma endscop
}
