/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (arr_2 [i_1] [i_1 + 1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 += 65535;
                                var_17 = min((arr_2 [i_1 - 1] [0]), (min(235, (arr_6 [i_1] [i_1] [i_1]))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_18 = (min(((min(13723, -1766015817))), (arr_18 [17] [17] [i_5] [i_5] [i_6 - 1])));
                            var_19 = 104;
                            var_20 = (arr_6 [i_1] [5] [i_5]);
                            var_21 = 255;
                        }
                    }
                }
            }
        }
    }
    var_22 = var_14;
    #pragma endscop
}
