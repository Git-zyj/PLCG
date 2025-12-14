/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_16, (max((min(-2116664199883373811, 2116664199883373811)), (max(var_8, 2116664199883373812))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = (max(((((arr_1 [i_0]) & (arr_1 [i_0])))), ((-(max(49743, 4194303))))));
        var_19 = -5877194352783330447;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = var_3;
        var_20 = (min(var_20, (((min((arr_1 [12]), (arr_2 [2]))) >= var_13))));
        var_21 = (arr_4 [13] [i_1]);
    }
    #pragma endscop
}
