/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = var_4;
                    var_13 = ((((var_1 ? var_9 : ((((arr_5 [i_2] [i_0] [i_0] [i_0]) - var_8))))) - (arr_4 [i_0] [3] [i_0] [3])));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_14 = (min((((((8215 | (arr_5 [i_3] [i_0] [i_1] [i_0])))) * var_1)), (arr_10 [i_3 + 1] [i_2] [i_2] [i_2] [4] [i_0])));
                        var_15 *= ((!((min(91, var_5)))));
                    }
                }
            }
        }
    }
    var_16 = ((var_3 ? (((var_7 % (max(125, (-9223372036854775807 - 1)))))) : (min((!-125), var_9))));
    var_17 = (((((var_11 / (-9223372036854775807 - 1)))) != (((var_4 / 127) ? (min(125, var_9)) : 242))));
    var_18 = (min(var_18, var_10));
    #pragma endscop
}
