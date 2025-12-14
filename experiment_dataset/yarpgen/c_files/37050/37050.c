/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_9 ? ((var_10 ? var_16 : var_13)) : (~var_6)))) ? (((((var_11 ? var_11 : var_5))) ? ((var_2 ? var_1 : var_4)) : var_14)) : var_11));
    var_18 = ((var_2 ? -1 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (var_6 ^ var_9)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 *= (var_11 ? (var_10 & var_11) : (var_1 ^ var_12));
                            var_21 = (((((var_16 ? var_8 : var_11))) != ((var_1 ? var_8 : var_9))));
                        }
                    }
                }
                arr_10 [16] &= ((((var_5 ? var_9 : var_3)) * (var_7 != var_12)));
            }
        }
    }
    var_22 *= var_11;
    #pragma endscop
}
