/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(var_15, ((var_2 ? ((max(var_6, var_10))) : (var_11 / var_2))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = max((max((((arr_0 [i_0]) ? -32742 : var_9)), 32742)), (min((((arr_2 [i_0] [i_0]) / -32759)), ((-(arr_2 [i_0] [i_0]))))));
        var_19 = ((((max((((arr_2 [i_0 - 2] [i_0]) % var_1)), (arr_0 [i_0 - 2])))) && ((min(((((arr_0 [i_0]) && 2465442642))), (arr_1 [i_0 - 2] [i_0 - 1]))))));
    }
    var_20 = (-((var_0 % ((var_4 ? var_7 : 8160)))));
    #pragma endscop
}
