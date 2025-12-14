/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_6);
    var_17 = (-(+-1099511627264));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [9] [i_3] [i_0] = ((!(var_12 / 178083499)));
                                var_18 = -79;
                                arr_13 [i_0] [9] [i_0 - 1] [i_0] [i_0] = var_15;
                            }
                        }
                    }
                }
                var_19 = (min(var_19, ((((!(((arr_8 [i_0] [i_0 + 1] [4] [i_1]) >= var_6))))))));
            }
        }
    }
    #pragma endscop
}
