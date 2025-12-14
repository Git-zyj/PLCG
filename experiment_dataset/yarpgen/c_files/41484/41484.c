/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 + (var_1 + 1)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = ((1 + (var_8 + var_4)));
        var_12 = (min(var_12, (((((1 ? (arr_0 [10] [i_0]) : ((max(25524, 37261))))) ^ (((!78) + (arr_2 [22]))))))));
    }
    var_13 = -65;
    #pragma endscop
}
