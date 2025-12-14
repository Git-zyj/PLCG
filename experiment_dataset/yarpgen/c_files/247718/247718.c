/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = ((var_17 <= (((-1640460220 ? 51319 : -4265)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 = (arr_2 [i_0 - 1]);
        var_22 *= ((((((arr_0 [i_0]) ? (((arr_2 [i_0]) ^ 14216)) : (var_5 && 45441)))) ? (((489198717376341772 - 2147483647) ? 14217 : ((((arr_2 [i_0 + 1]) <= (arr_2 [i_0])))))) : (arr_2 [i_0 + 1])));
        arr_3 [i_0] [i_0] = (((arr_2 [12]) ? ((((arr_2 [i_0 - 1]) && (((var_11 ? (arr_1 [i_0] [i_0 + 1]) : (arr_0 [i_0]))))))) : ((((((arr_1 [i_0] [16]) && (arr_1 [i_0 + 1] [i_0])))) << ((((arr_1 [9] [8]) == (arr_2 [i_0 - 1]))))))));
    }
    var_23 = var_4;
    #pragma endscop
}
