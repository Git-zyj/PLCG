/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = var_2;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 *= ((var_11 ? 1 : 73));
                                arr_12 [i_2] [i_1] [i_3] = 64;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_18 = 74;
                var_19 = (((((32 ? 181 : 0))) ? ((1 ? 64 : 64)) : 1));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_20 = -117;
                                arr_25 [i_9 + 1] [i_8] [i_8] [1] = ((1 ? ((var_6 ? var_13 : 18446744073709551589)) : 5916599585703663685));
                                var_21 = (((((73 ? 192 : 86))) ? var_7 : ((var_9 ? var_8 : -8088335824728929951))));
                                var_22 = ((1676436943 ? ((180 ? var_4 : var_3)) : 7458));
                                var_23 = (min(var_23, ((((((var_6 ? 1370844090 : var_5))) ? 1 : var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
