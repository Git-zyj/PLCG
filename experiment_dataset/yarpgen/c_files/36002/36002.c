/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= 58;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 *= var_4;
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = -120;
                            arr_12 [10] [10] [10] [10] [i_0] = var_11;
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] = (120 / 32767);
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((-((var_9 ? 1206054719222503642 : ((1 ? var_8 : 120))))));
                        }
                    }
                }
                arr_15 [i_0] = 1;
                arr_16 [i_1] |= ((var_13 ? (((((var_0 ? 4095 : -120))) ? ((max(var_1, 144))) : 120)) : 120));
                arr_17 [i_0] [i_0] [i_0] = -1349365434;
            }
        }
    }
    var_19 = (((529946619 ? -120 : var_4)) - ((max(var_8, (var_4 + var_10)))));
    var_20 = (max(var_20, (((1564599448 ? -109 : 9150)))));
    var_21 = max((min(((max(113, -120))), (max(4294967295, -113)))), (((!(((-17336 ? var_3 : var_1)))))));
    #pragma endscop
}
