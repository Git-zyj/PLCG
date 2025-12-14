/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(34902897112121344, var_5))) ? 4107099110422904340 : (((((max(var_6, 8388544))) ? var_4 : ((var_6 ? var_2 : 3711891477)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 ^= -4;
                    var_13 = (~-2136102473);
                    var_14 = (max(var_14, 4107099110422904340));
                }
            }
        }
    }
    var_15 -= ((var_7 ? (((var_2 == ((var_2 ? var_4 : 1))))) : ((((!1471591651) && -var_8)))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_16 = var_9;
                        var_17 = (arr_17 [i_3 - 1]);
                        var_18 = (max(var_18, (arr_8 [14] [i_3])));
                        arr_21 [i_3] [i_3] [i_5] [i_6] [i_4] = (((arr_17 [i_3 - 1]) ? (arr_17 [i_3 - 1]) : (arr_17 [i_3 - 1])));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_19 = var_4;
                        var_20 ^= -113;
                    }
                    var_21 *= (max((((((min(-32494, -2023143292))) && 54))), (arr_16 [i_3 - 1] [i_3 - 1] [i_5])));
                }
            }
        }
    }
    #pragma endscop
}
