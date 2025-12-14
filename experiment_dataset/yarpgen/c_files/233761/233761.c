/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((min(var_4, (max(57763, 57744)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [6] = ((!((min((!2963), (min(38240, 65535)))))));
        arr_5 [i_0] = (min(var_2, -0));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1] [6] = var_3;
        arr_10 [i_1] = 45;
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_13 = (max(((min((max(-34, var_11)), 32))), (min(-6607246362792713039, -885650242))));
        var_14 = (max(var_14, ((max(11990, (min(8192, -26)))))));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_15 = -57744;
            var_16 = 3;
            arr_15 [i_3] [i_2] [i_2 + 1] = 3975;
            var_17 = (max(31, var_8));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_18 = (min(var_18, 5563));
            arr_19 [i_2] [18] [i_4] = var_0;
        }
    }
    var_19 ^= var_9;
    #pragma endscop
}
