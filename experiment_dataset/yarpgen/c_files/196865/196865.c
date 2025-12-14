/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max((((var_5 << (var_13 + 41)))), (max(var_0, var_4)))) < var_3));
    var_21 *= (((((max(var_14, 65535)))) << (var_4 && 16833531654142781849)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 ^= (arr_6 [i_0]);
                    arr_9 [i_1] = ((((((arr_6 [i_0 + 1]) ? var_12 : -6881066258208068462))) ? ((((arr_6 [i_0]) % (arr_6 [1])))) : (arr_6 [i_0])));
                    var_23 *= var_15;

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_24 = (min(var_24, var_14));
                        var_25 = (arr_12 [3] [i_1] [15]);
                        var_26 = ((((arr_2 [i_1]) | ((((arr_1 [i_1]) == 137))))));
                        arr_13 [i_1] = (arr_8 [i_0] [i_2] [i_3]);
                    }
                    arr_14 [i_1] [i_1] [i_2] = (((-var_0 < (arr_7 [7] [7] [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
