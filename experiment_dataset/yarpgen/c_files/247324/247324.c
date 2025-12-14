/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((((1773740660 ? 7 : 14334828707806745169))) ? 16247933257715664591 : ((max(var_2, 2775688842)))))) ? (min(((2110282921 ? (arr_0 [i_0]) : -107451979)), 4294967279)) : 2775688837));
        var_12 = (((((arr_1 [i_0]) ? -1 : var_0)) != (16247933257715664581 != 338809466)));
    }
    var_13 = ((var_6 ? (max((max(-5979, 18141929777084098148)), (((-6050579766562135429 ? var_4 : var_9))))) : var_8));
    #pragma endscop
}
