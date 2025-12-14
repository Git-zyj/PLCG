/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 ? var_2 : (25 <= var_6)));
    var_18 = min(((var_10 + (0 != var_7))), (var_15 && var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_6;
        var_20 = ((((((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : var_6))) != ((6397975057738106576 ? (-27 != 160) : (max(16121691667401600528, 16121691667401600520))))));
    }
    #pragma endscop
}
