/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        var_21 = (min(var_21, ((((((min(0, 65535)) != ((14165 << (var_8 - 47992))))))))));
        var_22 = (((((var_15 * var_11) ? ((54 ? 224 : var_10)) : (arr_1 [i_0 + 3]))) + (((((arr_1 [i_0]) / var_0)) / ((var_9 - (arr_0 [i_0])))))));
    }
    var_23 = (min(var_23, (((var_8 << (((var_18 > ((767 ? 34735 : var_3))))))))));
    var_24 = 0;
    #pragma endscop
}
