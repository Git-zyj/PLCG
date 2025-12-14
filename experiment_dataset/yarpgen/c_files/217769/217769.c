/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!((min((!var_9), var_9))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) ? (arr_1 [1]) : var_6));
        var_14 = ((~((~((max((arr_1 [i_0]), var_5)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 += 3729344219857457234;
                    var_16 += var_0;
                    var_17 = (var_11 <= var_11);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_18 = arr_6 [i_3] [6] [9] [i_3];
        arr_10 [1] [11] = var_2;
    }
    #pragma endscop
}
