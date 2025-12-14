/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((var_14 ? var_1 : 1)) >= var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = 1;
                            var_20 = var_12;
                            var_21 = (min(var_21, 1));
                        }
                    }
                }
                var_22 ^= 255;
                arr_11 [i_0] [i_0] [i_0] = var_9;
            }
        }
    }
    var_23 += ((!((min(var_0, var_1)))));
    var_24 = (min((((1 & 1) ? ((var_4 ? 1 : var_17)) : ((var_3 ? var_7 : 24224)))), ((var_0 ? var_2 : var_9))));
    var_25 = (((((4294967295 ? ((41312 ? var_3 : var_2)) : (!1023)))) ? var_8 : ((var_16 ? 103 : ((1 ? var_13 : -1593186246796269064))))));
    #pragma endscop
}
