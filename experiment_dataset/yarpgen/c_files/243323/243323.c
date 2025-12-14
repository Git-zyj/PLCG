/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((var_2 == var_0), (var_9 >> var_8)))) ? ((~(~var_2))) : (((((var_3 ? var_9 : var_5)) != ((max(var_0, 0))))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 -= ((var_9 % ((max((max((arr_1 [1] [1]), (arr_1 [i_0 - 1] [i_0 - 1]))), 1)))));
        var_13 ^= var_3;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (-var_8 | 1);
        var_15 = ((-((max(var_10, (arr_4 [i_1]))))));
        var_16 = (((((~(var_6 >> var_3)))) ? ((var_8 ? (arr_1 [i_1] [i_1]) : ((max(var_0, (arr_3 [i_1])))))) : (((min(var_7, 1)) ? var_6 : (((arr_3 [i_1]) ? (arr_4 [i_1]) : (arr_2 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_17 = (max(var_17, ((min((min(1, -var_0)), ((min(var_4, (((arr_7 [i_2] [i_2 + 1]) < var_6))))))))));
        arr_8 [1] = ((((min(var_3, (arr_7 [i_2] [i_2]))) ? (arr_7 [i_2 + 1] [i_2]) : 0)) >= (((arr_5 [i_2] [i_2]) ? var_4 : ((max(1, var_8))))));
    }
    #pragma endscop
}
