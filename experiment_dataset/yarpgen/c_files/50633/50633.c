/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_5, var_9);
    var_13 = -1832258592;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = -1832258592;
                                var_15 = (min(21604, (arr_5 [i_0] [10] [10] [i_1 - 4])));
                                arr_13 [4] [i_0] [i_2] [i_0] [10] = ((!(~var_3)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_16 = (max(var_16, var_4));
                            var_17 ^= ((((min((~-1832258590), (!var_3)))) ? ((min((arr_1 [i_1 + 1]), (arr_12 [0])))) : (!29)));
                            var_18 |= -1832258590;

                            for (int i_7 = 2; i_7 < 13;i_7 += 1)
                            {
                                var_19 = (max(var_19, 52090));
                                var_20 = 38347;
                            }
                            arr_21 [i_6] [i_6] [i_0] [i_6] = 0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
