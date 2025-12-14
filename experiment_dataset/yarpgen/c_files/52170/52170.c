/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = 41;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 = ((0 ? ((238 ? 213 : -123)) : (-123 && 34)));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_17 = (max(var_17, 20720));
                                arr_14 [i_3] [9] [i_1] [i_0] = 44;
                                var_18 = (min(var_18, 46442));
                                arr_15 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] [0] = (15 >= 28);
                                arr_16 [1] [1] [i_2] [i_3] [i_3] [i_4] [i_4] = 1;
                            }
                            arr_17 [i_0] [i_0] [1] [i_0] = 59794;
                            var_19 = 238;
                        }
                    }
                }
                arr_18 [i_0] [i_1] = (((1 || 1) ? 1 : 1));
            }
        }
    }
    var_20 = (max(var_20, -4137));
    #pragma endscop
}
