/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((-(~var_11))), -var_3));
    var_17 = (max(var_17, ((max((min(((-8 ? 7 : 13288)), 13)), (-123 * var_11))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (min(var_18, ((min(((max(1, -1))), ((var_4 / (arr_2 [i_0] [i_0]))))))));
        var_19 = (min(22, ((-var_1 | ((147 ? var_7 : var_0))))));
        arr_4 [i_0] [i_0] = (arr_3 [i_0]);
    }
    #pragma endscop
}
