/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max(((var_12 * (((arr_0 [i_0]) / 32760)))), ((max(4349, 26116)))));
        arr_2 [i_0] [i_0] = (min(((min(-4910, var_4))), ((13782 ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_17 ^= var_6;
        arr_3 [i_0] = (((max(((min(var_2, (arr_0 [i_0])))), ((-21515 ? (arr_1 [i_0]) : var_13)))) > (((((min(26750, (arr_0 [i_0])))) < var_11)))));
    }
    #pragma endscop
}
