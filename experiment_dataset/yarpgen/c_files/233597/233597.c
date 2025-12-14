/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_9;
    var_15 = ((var_8 == ((4884074826768333546 * ((var_9 ? var_12 : 555701066591950109))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 |= (min(2147483647, -var_8));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_17 = (((((((var_4 + (arr_0 [i_0] [i_0]))) + ((max(31, var_8)))))) ? var_0 : ((((!((max(var_10, (arr_2 [i_0]))))))))));
        var_18 = (max(var_18, (((var_1 ? (var_9 & -20551) : (arr_0 [i_0] [i_0]))))));
    }
    #pragma endscop
}
