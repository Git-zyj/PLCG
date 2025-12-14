/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 ^= var_0;
        var_12 = (min(var_12, ((((4814327271134842676 ? 0 : 14139434114076624854))))));
        var_13 = (max(251, (min((((var_6 / (arr_1 [i_0])))), ((var_6 ? (arr_1 [i_0]) : var_4))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] = ((((((1 ? var_2 : var_7))) ? 18446744073709551610 : 1)));

        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            var_14 = (((5110090691824233248 && 64016) ? 1 : (0 || 1148417904979476480)));
            var_15 &= 906195782;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = (max(var_16, (var_4 % var_5)));
            var_17 ^= ((-(arr_7 [i_1] [i_1] [i_1 + 1])));
            var_18 = (min(var_18, ((((max(-4294967295, 1066634182))) ? (min((arr_6 [i_1] [i_3]), ((var_4 ? 7253 : var_7)))) : ((((arr_5 [i_3] [i_1 - 2]) ? (arr_5 [i_3] [i_1 - 2]) : (arr_5 [i_1] [i_1 - 2]))))))));
        }
        var_19 = (max((((9256648959145600865 & var_0) % -4576941012035579812)), ((((arr_5 [i_1 + 3] [i_1]) < var_7)))));
    }
    var_20 = (((((((max(var_2, var_4)) < ((var_3 ? 9093851366172310000 : var_9)))))) & (max(4307309959632926776, 52254))));
    #pragma endscop
}
