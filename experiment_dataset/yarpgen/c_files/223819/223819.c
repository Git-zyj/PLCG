/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((((var_4 ? var_11 : 12652876814886309277)) * (((1 ? var_9 : 1))))));
    var_21 = (!var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 *= (((max((!var_13), (!13483157271707296988))) ? (max((13295912182270003795 | var_11), var_11)) : (((-3 / var_17) * var_15))));
                                var_23 = (((((65535 * (max(58720256, 49152))))) ? ((min(var_6, ((var_12 ? 32762 : var_7))))) : var_5));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_5] [i_2] [i_1] [i_5] [8] = 4;
                                var_24 ^= var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
