/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(var_9, var_8))) ? (max(((224 ? 1 : 7715578048193125709)), var_2)) : (((~((max(var_1, 255))))))));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_11 += (arr_2 [i_0]);
        var_12 = (arr_1 [i_0]);
        var_13 ^= (9500 <= 65310);
        var_14 = var_6;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = ((((((arr_4 [i_1]) ? 0 : (arr_1 [i_1])))) - ((13626383947594793581 >> (213 - 199)))));
        arr_5 [i_1] [i_1] = (max(((var_5 / (var_0 & var_4))), var_0));
        arr_6 [10] [i_1] = (max((((((240 ? (arr_1 [i_1]) : var_0))) / (arr_2 [i_1]))), (max((arr_2 [i_1]), ((var_9 ? (arr_3 [i_1] [i_1]) : var_9))))));
        var_16 = var_8;
        var_17 = ((var_7 ? var_2 : ((-(arr_3 [i_1] [i_1])))));
    }
    #pragma endscop
}
