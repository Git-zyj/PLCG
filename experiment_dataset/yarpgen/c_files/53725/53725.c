/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 ^= (((max(var_15, var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 ^= ((14 ? (6265980684146285365 + 1) : (((((arr_3 [i_2] [i_2 - 1] [i_2 + 1]) >= var_6))))));
                                arr_12 [i_1] [i_2] [i_1] [i_4] = (max(((((((arr_0 [i_1] [i_0]) < var_19)) ? (~var_16) : (((((arr_6 [i_4]) < var_19))))))), ((((min(24705, var_8))) ? -9122336363386246771 : (max(-139104143443946790, 252))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = var_0;
                            }
                        }
                    }
                    var_22 = ((~(0 == 237)));
                }
            }
        }
    }
    var_23 = (!var_17);
    #pragma endscop
}
