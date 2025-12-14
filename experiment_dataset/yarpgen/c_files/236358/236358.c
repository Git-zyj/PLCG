/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_18 ^= min(-3865584299327277806, (((arr_5 [i_0] [i_1] [16] [i_3]) ? var_6 : (arr_5 [i_0] [i_1 - 3] [i_2] [i_0 - 1]))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_19 = ((((var_11 - (arr_7 [14] [i_1] [i_1])))));
                            var_20 = (max(var_20, (max(var_3, (((var_5 == (var_13 - 1))))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_21 = (max(var_21, (((!(~7492977909899212095))))));
                            var_22 *= ((-((7492977909899212095 >> (-3865584299327277809 + 3865584299327277829)))));
                            var_23 = (-((((arr_1 [i_0 + 1] [i_0]) - 1))));
                        }
                    }
                    var_24 = (min(var_24, (arr_0 [i_1 + 3] [13])));
                }
            }
        }
    }
    #pragma endscop
}
