/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((1984 ? (((-1454346683 - var_5) ? (4146378808 & 240) : var_9)) : -11485)))));
    var_12 = var_6;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 = (min(var_13, var_8));
        var_14 = (arr_1 [i_0]);
        var_15 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 = (((((((((arr_3 [i_1]) ? (arr_2 [i_1]) : -7188175832261360953))) ? (arr_4 [i_1]) : var_4))) ? (arr_4 [i_1]) : ((25622 | (arr_3 [i_1])))));
        arr_5 [i_1] = 480;
        arr_6 [i_1] [i_1] = (arr_2 [i_1]);
        arr_7 [i_1] [i_1] = ((-112 ? 11485 : -604305193268399060));
    }
    #pragma endscop
}
