/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] = ((!(((((max((arr_4 [i_0]), var_0))) ? (arr_5 [3] [i_1]) : (((arr_3 [i_1]) ? (arr_5 [i_1 + 1] [i_0 - 1]) : (arr_3 [i_0]))))))));
            arr_7 [i_0 - 1] [i_1 + 1] = (min((arr_3 [i_1 + 2]), -var_12));
        }
        var_18 = (arr_1 [i_0]);
    }
    var_19 = (!3129);
    var_20 ^= var_5;
    var_21 = (((~var_14) || ((min(var_17, 255)))));
    var_22 += var_12;
    #pragma endscop
}
