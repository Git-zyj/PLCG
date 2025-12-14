/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [2] [i_0] = ((0 >= (arr_0 [i_0] [i_0])));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_11 = 10;
            var_12 = ((!(arr_6 [i_0] [i_0] [i_0])));
            var_13 = ((!(arr_5 [i_0 - 2] [i_0])));
        }
        arr_7 [14] &= (((arr_6 [i_0 + 1] [i_0 - 2] [i_0 + 1]) ? (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 1]) : 4294967286));
    }
    var_14 = ((var_2 ? (((49453 || (-1574637917 & var_7)))) : (((((0 ? var_1 : var_8))) ? var_4 : ((var_10 ? var_1 : var_8))))));
    #pragma endscop
}
