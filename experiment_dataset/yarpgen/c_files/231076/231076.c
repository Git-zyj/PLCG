/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 *= 31805;
                var_19 = ((-(var_14 && -28018)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3 - 1] [i_2] [i_1] [i_0] = var_3;
                                var_20 = (min(var_20, ((((+-9) ^ (220 - 28))))));
                                var_21 = ((var_11 ? (((max(31, var_14)))) : var_12));
                                var_22 = (max(-var_3, -16689));
                                var_23 *= ((var_10 || ((max((var_11 >> 28), 141863388262170624)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = 36;
    var_25 = (((max(-1, ((min(var_4, 1059577605))))) & var_2));
    var_26 = (max(var_3, var_9));
    #pragma endscop
}
