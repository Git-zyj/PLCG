/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 *= (max((~var_10), 192));
                            arr_11 [i_0] [i_0] = (min((min(0, (max((arr_6 [i_0] [i_1] [i_2]), var_16)))), -var_2));
                            var_21 *= ((max((arr_7 [i_3] [i_1] [i_3]), -var_1)));
                        }
                    }
                }
                var_22 = ((max(46057, 162)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_23 = (min(var_23, (((((max(((-(arr_17 [i_0] [i_1] [i_1] [i_5]))), -4))) ? ((~((var_4 ? var_9 : var_5)))) : (((var_4 ? (arr_12 [i_0]) : var_4))))))));
                            var_24 += 0;
                            var_25 = (min(var_25, var_3));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_26 = var_16;
                                arr_25 [i_8] [i_7] [i_0] [i_0] [i_1] [i_0] = (arr_15 [i_0] [i_7] [i_0] [i_0]);
                            }
                        }
                    }
                }
                arr_26 [i_0] [i_1] = 32767;
            }
        }
    }
    var_27 -= var_5;
    #pragma endscop
}
