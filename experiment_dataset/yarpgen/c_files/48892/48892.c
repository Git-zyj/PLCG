/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = var_2;
                    var_17 = (min(var_17, ((((min(2146959360, (arr_6 [i_2] [i_2 + 1] [i_2] [i_2]))) < (var_4 & var_13))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = var_3;
        var_19 = 1;
        arr_11 [i_3] [i_3] = (min((arr_6 [i_3] [i_3] [i_3] [6]), var_3));
    }
    var_20 = var_7;
    var_21 = (min(var_21, ((min((min(var_7, var_1)), ((((3458764513820540928 ? 0 : var_0)))))))));
    #pragma endscop
}
