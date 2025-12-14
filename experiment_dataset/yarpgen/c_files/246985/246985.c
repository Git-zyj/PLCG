/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2661277390;
    var_15 = var_1;
    var_16 += var_10;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 += (arr_1 [12] [12]);
        var_18 += ((((max(((2661277386 ? 48 : (arr_0 [i_0]))), (((arr_1 [4] [i_0]) ? 1633689922 : (arr_0 [i_0])))))) ? ((1 ? (max(18146143266440266919, 311282413)) : (arr_1 [0] [i_0]))) : ((((37 >= ((48 ? 1 : 1633689905))))))));
    }
    #pragma endscop
}
