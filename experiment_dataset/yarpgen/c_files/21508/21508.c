/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 -= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = -218;
        var_18 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 += (((arr_2 [i_0]) ? 0 : (var_5 + -478)));
            var_20 *= (arr_0 [i_0] [i_1]);

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_21 = (min(var_21, var_2));
                var_22 = (arr_1 [i_1]);
            }
            var_23 = arr_6 [i_1] [i_0];
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_24 = (arr_8 [12]);
            var_25 = (!244);
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_26 = (min(var_26, ((min(((((max((-32767 - 1), (arr_12 [i_4] [i_4])))) ? ((min(247, var_3))) : ((~(arr_11 [i_4]))))), var_12)))));
        arr_13 [8] = ((+((max((arr_11 [i_4]), (arr_3 [i_4] [i_4]))))));
    }
    #pragma endscop
}
