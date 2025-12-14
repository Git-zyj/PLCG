/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 32;
        var_11 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = ((~((var_2 ? (~var_3) : ((27504 ? (arr_0 [i_1]) : var_1))))));
        arr_6 [i_1] [i_1] = (((min(((((arr_1 [i_1] [i_1]) == (arr_4 [1])))), -1))) ? ((((arr_3 [i_1] [i_1]) || (arr_3 [i_1] [i_1])))) : var_4);
        var_12 = (((arr_3 [i_1] [i_1]) ? 3318590602093805537 : ((((((~(arr_3 [i_1] [i_1])))) ? ((0 ? 236411410 : -1)) : 1181891191)))));
        var_13 = var_7;
    }

    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        var_14 = (max(var_14, 228));
        var_15 = (min(var_15, ((min((min(((min(28, -118))), (arr_8 [i_2 - 2] [i_2 - 3]))), ((~(((-18405 + 2147483647) >> (-1 + 18))))))))));
    }
    var_16 = 3318590602093805537;

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_17 = (((min(664411329, (arr_1 [i_3] [i_3]))) >= (arr_1 [i_3] [i_3])));
        var_18 = (max((((11 ? 1 : 376963497))), (((arr_10 [i_3] [i_3]) ? (~var_8) : (((var_6 >> (arr_0 [1]))))))));
        var_19 = (((min(var_6, (arr_10 [i_3] [i_3]))) < ((~((min(var_9, (arr_0 [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 = (((arr_13 [i_4]) * (arr_1 [i_4] [i_4])));
        var_21 = (max(var_10, (((var_0 ? 1846568087 : 664411329)))));
        var_22 = -664411329;
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_23 = ((((((arr_1 [i_5] [i_5 - 1]) ? 1 : 1))) ? ((((min(0, 4294967284))))) : (((((var_6 ? (arr_16 [i_5]) : var_10))) ? (max(674063670, var_1)) : (var_4 - var_4)))));
        var_24 = (var_9 ? ((((~var_7) * ((max(var_0, (arr_1 [i_5] [i_5]))))))) : ((((min(6682, 3858932972))) ? (min((arr_16 [i_5]), -664411330)) : ((max(var_1, (arr_11 [i_5])))))));
        arr_17 [i_5] = (arr_16 [9]);
        arr_18 [i_5] = max(((577654399 ? -32756 : 0)), (((arr_9 [i_5]) * (arr_15 [i_5 - 1]))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_25 = (min(var_25, (arr_19 [8])));
        var_26 = (arr_8 [i_6] [i_6 - 1]);
        arr_21 [i_6] = (arr_4 [i_6 + 1]);
    }
    #pragma endscop
}
