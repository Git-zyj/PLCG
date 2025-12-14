/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((-9223372036854775807 - 1) ? -12086 : 122);
    var_15 -= var_2;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] &= ((((~(arr_1 [i_0 - 1]))) | var_10));
        arr_3 [i_0] = ((+(max((arr_1 [i_0 + 1]), (arr_0 [i_0 - 1])))));
        arr_4 [i_0] = (max((arr_0 [i_0]), (min((arr_0 [i_0 + 1]), ((((arr_1 [i_0]) ? 3262726040 : 32767)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [6] [4] [i_1] [i_1] = (var_0 * ((((!((max(var_7, var_6))))))));
                                var_16 = (((((min(((max(var_9, var_3))), (arr_12 [i_1] [i_2]))))) <= var_5));
                            }
                        }
                    }
                }
                var_17 *= ((!((max(var_5, (arr_13 [7] [i_2] [i_1] [i_1]))))));
                arr_20 [11] = ((~((var_11 - (arr_16 [i_2] [6] [i_1] [1] [i_1] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
