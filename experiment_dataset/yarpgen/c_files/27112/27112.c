/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max((min((max(var_10, 4294967295)), ((max(var_0, var_5))))), ((((var_10 >> (var_13 - 50314))) & (var_1 + var_4)))));
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0 + 1] [i_1] [i_2] = (min(((min(1, -30709))), ((var_0 ? ((var_8 / (arr_2 [i_0] [i_1]))) : ((((arr_3 [i_0]) ? (arr_7 [i_2] [i_0 - 2] [i_0 - 2]) : 18093)))))));
                    var_16 = 225;
                    var_17 ^= -982099685;
                }
            }
        }
    }
    #pragma endscop
}
