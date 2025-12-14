/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((((((var_1 == 2097088) ? (~var_6) : (var_7 || var_7)))) ? (((var_8 / (var_16 - var_6)))) : ((2097082 - (-5624262107759267216 || var_5)))));
    var_18 = (max(var_18, var_14));
    var_19 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] [i_0] = ((-var_14 - ((-(max(-2097079, 2097055))))));
                                arr_16 [2] [2] [2] [2] [2] [2] = (((!6286316108836305600) ? 0 : ((~(arr_7 [i_4 + 3] [i_4] [i_4 + 3])))));
                            }
                        }
                    }
                }
                arr_17 [i_1] = max(var_6, -var_5);
            }
        }
    }
    #pragma endscop
}
