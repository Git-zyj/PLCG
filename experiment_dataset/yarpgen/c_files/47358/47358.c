/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (247 % var_14);

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_17 = (arr_0 [i_1 - 1]);
            var_18 = ((arr_3 [i_0 - 1] [i_1 + 2]) < (arr_3 [i_0 - 1] [i_1 - 1]));
        }
        var_19 &= (max((arr_4 [i_0]), (((((var_14 ? (arr_1 [i_0] [i_0]) : 104))) ? var_15 : (((max(1, -115))))))));
    }
    var_20 += ((115 ? var_7 : var_2));
    var_21 = var_3;
    #pragma endscop
}
