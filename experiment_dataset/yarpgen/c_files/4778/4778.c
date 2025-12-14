/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = ((var_17 ^ ((min(var_13, var_14)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = (arr_2 [i_0] [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_22 = (((arr_6 [i_0] [i_0] [i_2] [1]) < (arr_5 [i_1])));
                var_23 -= var_1;
                var_24 *= (240 == -240);
                var_25 = var_6;
            }
            var_26 = (((arr_6 [i_1] [i_1] [i_1] [i_0]) * (arr_5 [i_0])));
        }
        var_27 = var_13;
    }
    #pragma endscop
}
