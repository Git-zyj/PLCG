/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((var_3 || (((var_7 ? 1288516175 : var_3)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((var_3 < (arr_0 [i_0]))))) % (min(var_1, var_9))))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : 1288516175)) : (max(3006451135, 1))));
        var_11 &= ((((((((1 ? 4018241410 : (arr_0 [i_0])))) ? var_3 : (var_4 >> 1)))) / (max(1, (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))))));
    }
    var_12 = -1;
    #pragma endscop
}
