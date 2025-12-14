/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_7));
    var_11 = ((var_9 ^ ((var_2 ? (var_5 ^ var_9) : (var_7 | var_7)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((+((((min((arr_1 [i_0] [9]), (arr_0 [i_0] [i_0]))) == (max(987021596, (arr_1 [i_0] [i_0]))))))));
        var_12 = (min(var_12, (((!(((var_0 < -2206001001449423538) || (arr_1 [i_0] [i_0]))))))));
        var_13 = ((var_9 ? (((!((((arr_1 [1] [i_0]) ? 8982357000092387813 : 6600820905051546994)))))) : ((((((arr_1 [i_0] [i_0]) ? 2147483640 : (arr_0 [i_0] [2])))) ? (arr_0 [i_0] [i_0]) : ((((arr_0 [i_0] [i_0]) >= 1)))))));
    }
    #pragma endscop
}
