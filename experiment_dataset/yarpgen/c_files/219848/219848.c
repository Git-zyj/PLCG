/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 + ((((var_6 == var_2) && 3432554319511811473)))));
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min(((2147483647 ? (((((arr_0 [i_0]) < (arr_1 [i_0]))))) : 0)), var_10));
        var_13 = (max((arr_1 [i_0]), (arr_1 [i_0])));
        var_14 = ((((var_5 | (arr_1 [i_0])))) ? -var_7 : ((min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_15 |= (max(((var_9 * (arr_0 [0]))), (arr_0 [8])));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        arr_5 [15] = ((((min(((var_3 ? (arr_3 [i_1]) : (arr_4 [i_1]))), (arr_4 [i_1 + 1])))) ? var_2 : var_1));
        var_16 -= ((min((max(var_8, var_5)), 7)));
        arr_6 [11] = ((-((+(max((arr_4 [i_1]), 5883486275034060489))))));
    }
    var_17 = var_9;
    #pragma endscop
}
