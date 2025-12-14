/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_1));
    var_17 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = ((-90 ? ((0 ? (arr_1 [i_0] [i_0 - 2]) : (arr_6 [i_0] [i_0] [i_0]))) : ((-807960746 ? ((var_10 ? -3 : 40)) : (arr_4 [i_0] [i_1] [i_2])))));
                    var_19 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
