/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (arr_0 [i_1 - 2]);
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((((4030309715 & var_13) > var_3)));
                }
            }
        }
    }
    var_19 = ((((max((min(-121, 1047552)), (max(var_14, 4095))))) | -var_1));
    var_20 = (max(var_20, ((min((((var_17 > ((63380 ? 0 : var_14))))), ((var_13 ? (min(-543575903779520413, -109)) : (((var_15 >> (var_16 - 68)))))))))));
    #pragma endscop
}
