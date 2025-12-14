/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_9, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [1] [i_2] [i_2] [i_2] [6] |= 6622417763099517109;
                            var_18 = (-((min(32, (((!(arr_7 [i_0] [i_2] [i_0] [i_0]))))))));
                            var_19 *= ((!((max(5, 3056238456)))));
                        }
                    }
                }
                var_20 = (max(1600234426, 10979069197789912072));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_16 [i_5] [i_4 + 4] [i_5] = 51;

                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 22;i_6 += 1)
                            {
                                var_21 = (~1);
                                arr_20 [i_0] [i_1] [i_4] [i_5] [i_6] = -67;
                            }
                            arr_21 [i_0] [i_1] [i_5] [i_5] = (max((max(var_5, var_14)), ((min(-51, 3)))));
                            arr_22 [i_0] [i_5] = ((!(~var_9)));
                        }
                    }
                }
            }
        }
    }
    var_22 *= ((max(-65534, var_0)));
    #pragma endscop
}
