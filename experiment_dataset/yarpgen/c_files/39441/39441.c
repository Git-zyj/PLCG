/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_17 = 358310696;
        var_18 = var_3;
        var_19 = max(var_7, (max(104549748, 170593142)));
        var_20 &= var_4;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = (max(var_15, var_3));
        arr_4 [i_1] = (min(var_13, var_2));
        arr_5 [i_1] = -2073332982;

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_22 &= min(16777215, 988659799);
            var_23 = var_6;

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_24 = var_13;
                var_25 = (min(var_25, -590548754));
            }
        }
        var_26 = var_11;
    }
    var_27 -= var_2;
    #pragma endscop
}
