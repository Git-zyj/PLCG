/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~var_6) ? ((min((max(67108863, 127)), ((max(var_4, var_15)))))) : (((~var_5) / (((var_6 ? var_9 : var_0))))));
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = ((var_8 && ((min((arr_2 [i_0] [i_0]), var_2)))));
        arr_3 [i_0] = ((~(((((max(var_9, var_8)) + 2147483647)) << (((var_5 & var_1) - 34))))));
        var_21 = (max(var_21, ((((((((var_11 ? var_5 : (arr_2 [i_0] [i_0])))) ? var_16 : ((var_12 ? var_10 : var_11)))) ^ var_4)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (max(((-(arr_4 [i_1]))), (0 == 0)));
        arr_6 [10] = ((-((~((max(var_11, (arr_4 [i_1]))))))));
    }
    #pragma endscop
}
