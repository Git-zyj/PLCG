/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 30404;
    var_21 = var_11;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (((-1 + ((min(var_5, (arr_0 [i_0])))))));
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((((((((!(arr_0 [i_0])))) << (((max(var_16, (arr_0 [i_0]))) - 46690))))) ? (arr_1 [i_0]) : (max(18014398509481968, 35664))))) : (((((((((!(arr_0 [i_0])))) << (((((max(var_16, (arr_0 [i_0]))) - 46690)) + 11356))))) ? (arr_1 [i_0]) : (max(18014398509481968, 35664)))));
    }
    #pragma endscop
}
