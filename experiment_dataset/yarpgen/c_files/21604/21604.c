/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (min((!1), var_9));
        arr_4 [i_0] = (((arr_2 [i_0]) ? ((min(((var_1 ? (arr_2 [i_0]) : (arr_1 [i_0]))), ((min((arr_2 [i_0]), (arr_2 [i_0]))))))) : (min(((var_5 ? 3416051625 : var_1)), (((~(arr_0 [i_0]))))))));
    }
    var_10 = (var_7 || var_5);
    var_11 = (var_7 ? ((min((max(var_6, var_7)), (((2092656125 << (36208 - 36208))))))) : var_9);
    #pragma endscop
}
