/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_19 -= var_9;
                        var_20 = ((var_5 & ((((arr_5 [i_1] [i_1]) || var_2)))));
                    }
                    var_21 -= (((((((min(23, 59)))) <= (arr_0 [i_1]))) ? var_13 : (((var_4 < var_2) ? ((var_16 - (arr_1 [19] [i_1]))) : ((((arr_2 [i_0 - 1]) ? var_18 : -4085582181277920960)))))));
                }
            }
        }
    }
    var_22 *= (((23 || 55850) || var_7));
    #pragma endscop
}
