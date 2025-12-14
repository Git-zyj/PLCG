/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 = (min(var_17, ((min((min((arr_0 [i_0 + 2]), ((2033953766183257222 ? (arr_1 [4] [1]) : 13356235246706522020)))), (((((((-1839285188 ? (arr_0 [i_0]) : (arr_0 [i_0]))) + 2147483647)) >> (((arr_1 [24] [24]) + 536459079))))))))));
        var_18 = (max(var_18, ((max((arr_0 [17]), (max(589012336, ((min(53252, var_0))))))))));
    }
    var_19 = (max(var_19, var_9));
    #pragma endscop
}
