/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_13));
    var_15 = (max(var_15, (((var_0 != (-var_0 % var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((min((127 <= 1044480), ((max(96, (arr_6 [i_0] [14])))))))));
                var_17 = -2067351194;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_18 *= (arr_4 [i_0]);
                    arr_9 [i_0] = (!1);
                    var_19 = (max(var_19, (((((min(((4177920 ? (arr_4 [i_1]) : var_0)), ((((arr_5 [6] [6]) ? 65385 : (-127 - 1))))))) ? ((((arr_8 [10] [i_2]) ? (-9223372036854775784 + 157) : 145))) : ((((((arr_7 [1] [i_1] [13]) ? var_10 : 133))) ? -3722867487631229228 : (min(var_6, var_10)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_1] [i_0] = 65409;
                                arr_16 [i_0] [i_3] [i_2] [i_1] [i_0] = -25;
                                arr_17 [0] [i_1] [i_1] [i_3] [i_1] [i_1] |= var_6;
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [6] = (~145);
                }
            }
        }
    }
    #pragma endscop
}
