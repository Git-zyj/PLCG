/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] &= (min((arr_0 [i_0]), (((max(140737488355326, var_11)) / (max(1, (arr_1 [i_0])))))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (min((min(-24, (arr_4 [i_1]))), (((!1) % 1))));
            arr_6 [i_0] = (((((min((((18446603336221196269 && (arr_0 [3])))), (arr_0 [i_1]))))) % (min((arr_4 [i_0]), (min(var_2, (arr_0 [i_0])))))));
            var_14 = (max(var_14, ((min((((arr_3 [i_0] [i_1 - 1]) ? 1 : 140737488355326)), var_6)))));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_15 = (max(var_15, (((var_13 ? (arr_4 [i_2 - 1]) : var_13)))));
            var_16 = (arr_3 [i_0] [i_0]);
        }
    }
    var_17 &= var_7;
    var_18 = ((((min((!43944), ((123 ? var_9 : 140737488355324))))) ? var_2 : var_0));
    #pragma endscop
}
