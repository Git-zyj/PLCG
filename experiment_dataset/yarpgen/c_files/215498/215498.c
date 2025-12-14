/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((var_8 || var_6) << (25981 - 25961))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [3] = (((var_6 && var_6) || (var_12 && var_0)));
                    var_16 = (min(var_16, (((max(var_9, 1944155098))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [0] [i_3] = ((((((((1023754190 >> (var_3 - 14153103903377981160)))) < var_2))) | (171 / var_14)));
                                var_17 = ((((var_7 >> (var_9 - 63294))) * (((!(var_7 % var_5))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
