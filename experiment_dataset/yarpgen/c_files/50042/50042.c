/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((-(((((-7017 ? var_5 : var_4)) <= (((max(var_6, -7023))))))))))));
                                var_14 = ((+(min((var_0 <= 11459), (var_2 & 79)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_15 = (max(var_15, -var_8));
                                arr_22 [i_0] [i_0] [i_5] [11] [i_5] = (min((min((arr_21 [i_7 + 2]), var_6)), var_3));
                                var_16 = (~-1185404281166704377);
                                arr_23 [i_7] = (var_3 != 16383);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = -113;
    #pragma endscop
}
