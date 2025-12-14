/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_11 = ((32767 ? (((((max(8612, -12847))) >= (((arr_1 [i_0]) ? 12847 : (arr_1 [i_0])))))) : (((min(31686, var_4))))));
        arr_3 [i_0] = arr_2 [i_0];
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_12 = ((-9358 ? (arr_6 [i_1] [i_1]) : (((arr_7 [9] [i_1]) ? (arr_7 [i_1] [i_1]) : var_2))));
        arr_8 [i_1] = var_5;
        arr_9 [10] [i_1] = arr_2 [20];
        var_13 = var_7;
    }
    var_14 = ((~((var_4 ? var_4 : var_6))));
    #pragma endscop
}
