/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, (((+((1520889425 * (((arr_1 [18]) ? (arr_0 [14]) : 255)))))))));
        var_14 = (min((~127), ((-1 ? (max(36028797018963967, (arr_1 [i_0]))) : (((max(var_1, 4))))))));
    }
    var_15 = (max(((((min(var_4, var_3))) ? (((var_8 << (var_5 - 16518940876770884046)))) : ((1 ? var_5 : 1920)))), (min((~var_9), (min(3625242510, var_4))))));
    #pragma endscop
}
