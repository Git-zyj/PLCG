/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = 17424;
        var_17 = (min(var_17, 241));
    }

    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = ((var_15 ? (((((arr_3 [i_1]) ? 17736431173019971883 : 255)) % var_12)) : (((((max(-125, (arr_2 [1] [i_1])))) << (710312900689579739 - 710312900689579721))))));
        arr_4 [i_1] [i_1] = (max((min(((var_7 + (arr_3 [1]))), (((7 ? (arr_3 [1]) : 3570))))), (arr_2 [i_1 + 4] [i_1])));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((((((3005682948528650519 ? (arr_2 [i_2] [i_2]) : var_9)) / var_11)) + (!-782172763)));
        var_19 = var_7;
        arr_8 [3] = ((((((((61966 + (arr_2 [9] [9])))) & ((4294967277 ^ (arr_2 [1] [1])))))) == (min(((max(2432743392, var_13))), ((8505479928929151197 | (arr_2 [i_2] [i_2])))))));
        var_20 = (max((!var_11), (min(var_13, (arr_3 [i_2 + 4])))));
    }
    #pragma endscop
}
