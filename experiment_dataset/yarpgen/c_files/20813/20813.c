/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        var_19 *= (78 > 8638823979928855200);
                        var_20 = (min(var_20, 2558183568));
                        var_21 = (var_12 / 1736783727);
                    }
                    var_22 = (-1574427988587792995 / ((((arr_1 [i_0 + 1]) ? var_3 : 113))));
                }
            }
        }
    }
    var_23 = var_10;
    var_24 = ((var_16 - (var_5 & var_16)));
    var_25 = (max(var_13, var_17));
    #pragma endscop
}
