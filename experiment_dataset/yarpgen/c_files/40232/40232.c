/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = ((arr_7 [i_2] [i_2]) > ((~((var_9 ? var_5 : 1279783751)))));
                    arr_8 [i_0] [i_2] = (arr_0 [15]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_2] [i_2 - 3] [i_2] [i_0] = ((var_9 <= ((619564811 ? 255 : (arr_11 [1] [i_3 - 2] [i_4] [i_4] [i_4] [i_4] [i_4])))));
                                var_22 = (arr_4 [i_2]);
                            }
                        }
                    }
                    var_23 = ((((var_17 < ((3015183530 ? 3015183513 : 3384626144)))) ? (max((arr_7 [i_2] [i_1]), (((var_16 ? 1 : var_9))))) : ((var_17 ? var_17 : 4294967295))));
                }
            }
        }
    }
    #pragma endscop
}
