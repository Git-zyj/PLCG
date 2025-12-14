/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (max(var_18, var_10));
        arr_2 [i_0] [6] |= var_13;
    }
    var_19 = max(((max((min(4045105031, 4224349480)), var_4))), var_11);

    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = (max(var_4, var_3));
            arr_9 [i_1] [1] [15] = (min(var_0, (min(var_15, var_16))));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_20 |= (min(var_17, (max(var_7, (min(var_8, var_9))))));
            var_21 *= var_16;
        }
        var_22 ^= var_1;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_23 = var_4;
        var_24 |= var_12;
        arr_15 [i_4] [i_4] = (min((max(var_5, (min(var_12, var_8)))), var_10));
    }
    #pragma endscop
}
