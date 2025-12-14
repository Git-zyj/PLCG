/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_4;
    var_14 = (min(var_14, var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, (((~(((!(((5554661590572677819 ? (arr_1 [i_0]) : (arr_0 [i_0]))))))))))));
        arr_4 [8] &= ((((((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_2 [0])))) && (arr_2 [4])));
        var_16 &= (!var_9);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_17 &= 482792418;
        arr_7 [i_1] [i_1 + 1] &= -0;
    }
    #pragma endscop
}
