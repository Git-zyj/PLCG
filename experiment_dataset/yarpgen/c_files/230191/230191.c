/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 &= 1;
                    var_17 = (arr_1 [1]);
                    arr_8 [i_0] [i_1] [i_2] = (+((-((var_14 ? (arr_6 [i_0] [6]) : 1737031159000144575)))));
                }
            }
        }
    }
    var_18 = -118;
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_4] = ((((((arr_10 [i_4] [i_3 - 3]) ? (((((arr_11 [i_3] [i_4]) || var_11)))) : (max(1737031159000144586, -16))))) ? (((arr_9 [i_3] [i_4]) ? (min(var_7, (arr_12 [i_4]))) : var_3)) : 1));
                arr_15 [14] [i_3] [i_4] = (max(-12114, (((-2559672129670262484 + 9223372036854775807) << 0))));
                arr_16 [i_3] = ((-(arr_11 [i_3] [i_3 - 2])));
            }
        }
    }
    var_19 *= (max(var_6, (((max(9127, -54))))));
    #pragma endscop
}
