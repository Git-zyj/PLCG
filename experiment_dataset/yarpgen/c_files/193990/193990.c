/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((!((max((arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] [i_2]), -1268873706))))))));
                                var_12 &= (min(53888, -1268873706));
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_3] [i_4] [i_2] = 1332937639;
                            }
                        }
                    }
                }
                var_13 += var_0;
            }
        }
    }
    var_14 = ((-((1268873705 ? -13417 : 1560))));
    var_15 = ((((var_6 ? ((var_5 ? var_7 : 893915215)) : 303675819)) & -2147483642));
    #pragma endscop
}
