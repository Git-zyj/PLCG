/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_13 = (max(var_13, ((((arr_1 [i_0] [i_0 + 1]) ? (((!(var_6 > 7701)))) : (((var_11 && (arr_2 [i_0] [i_0 - 1])))))))));
        var_14 = (min(var_14, ((min((((arr_2 [i_0 + 2] [i_0 + 3]) ? (arr_2 [i_0 + 2] [i_0 - 2]) : (arr_2 [i_0 - 2] [i_0 + 2]))), ((~(arr_2 [i_0 - 2] [i_0 + 2]))))))));
    }
    var_15 = (max((var_4 >> var_12), 4865026240044595722));
    #pragma endscop
}
