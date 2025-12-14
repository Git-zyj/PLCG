/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_0 [i_0]) >= ((min((arr_1 [i_0] [i_0]), -26861))))) ? 5 : 26860));
        arr_4 [i_0] [i_0] = (((((((26840 ? (arr_0 [i_0]) : (arr_2 [i_0]))) <= (~-26844)))) & ((13 ? ((-(arr_1 [i_0] [i_0]))) : (1 > 26860)))));
        arr_5 [i_0] = ((((max(26837, ((min(5, (arr_0 [i_0]))))))) ? ((~(-5 == 26426))) : (((((min((arr_2 [i_0]), (arr_0 [5])))) > (arr_1 [i_0] [i_0]))))));
        var_11 = (min((((min((arr_2 [i_0]), -6102002894171002563)) / ((((arr_0 [i_0]) ? (arr_0 [i_0]) : 27))))), ((((((arr_2 [i_0]) != (arr_1 [i_0] [i_0]))) && (arr_2 [0]))))));
    }
    var_12 = (min((max(var_1, 0)), 6));
    var_13 ^= ((((((!(-598755087 / var_9))))) / (((var_3 & var_9) ^ 1025327241))));
    #pragma endscop
}
