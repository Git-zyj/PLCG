/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] = (min((max((arr_3 [i_0]), var_13)), ((var_14 ? (arr_0 [i_0]) : 1))));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_18 = (arr_6 [i_0] [i_1] [i_1]);
            var_19 = ((31570 ^ ((max((max((arr_1 [i_1] [i_0]), 180)), 180)))));
            var_20 = 134;
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        arr_12 [i_2] = var_1;
        var_21 = 121;
    }
    var_22 = (((max(((max(133, 75))), var_4)) >= 180));
    #pragma endscop
}
