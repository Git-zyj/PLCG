/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((((0 ? (arr_1 [i_0]) : (min(var_12, var_13))))) ? (((var_5 && var_8) ? 281470681743360 : (((1 ? var_9 : var_12))))) : (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] = (((((arr_10 [0] [i_1] [i_2] [i_3]) - (arr_6 [i_1 + 2] [i_2 + 1] [i_3 - 2]))) + var_11));
                        var_16 += ((((var_14 ? 1073741824 : var_5))) ? (185776659 != 0) : (((min(var_9, 0)) ? var_11 : (((arr_3 [i_0] [i_1]) ? var_9 : (arr_10 [i_0] [i_1 + 2] [5] [i_3]))))));
                        var_17 = (1312987578 / (((var_1 ? 1 : (min(1, var_2))))));
                        var_18 *= var_5;
                    }
                }
            }
        }
    }
    var_19 = -1;
    var_20 ^= var_0;
    #pragma endscop
}
