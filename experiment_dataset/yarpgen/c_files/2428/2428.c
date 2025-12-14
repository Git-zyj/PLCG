/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((-var_7 | (var_3 - var_1))) > (max(67100672, -67100673)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 += max((((67100676 ? (5502918362378247372 < 6195834443473847679) : -67100672))), 67100664);
        var_15 *= (((max((~var_8), (!var_6))) << (var_10 + 4082402643398680919)));
        arr_4 [i_0] &= (min((((var_0 == 67100667) ? ((var_2 ? var_1 : var_5)) : (((36 ? var_4 : var_11))))), (((var_5 ? var_1 : var_8)))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = var_10;
        var_16 = (min(((((var_11 ? var_1 : var_6)) ^ 102)), (var_3 * -1)));
        var_17 = (!1515636817557935586);
        arr_9 [4] = var_10;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] [14] |= (max((((~var_8) ? 65529 : (var_1 < var_1))), ((var_5 ? var_6 : (var_4 && var_1)))));
        arr_14 [i_2] = (((((var_11 ? 1 : var_0)) | (var_11 & var_3))));
    }
    #pragma endscop
}
