/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_10, 127));
    var_15 ^= (var_11 ? (((((4095 ? (-127 - 1) : var_10))) ? 1707349302961477100 : (min(16739394770748074516, var_13)))) : ((max(var_8, var_6))));
    var_16 = var_9;
    var_17 |= (((max(((var_5 ? 1 : var_3)), var_5)) - var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((-2146474386 ? 1707349302961477099 : -571870513));
                var_19 = ((((min(22350, 1))) ? ((((arr_5 [i_1] [6]) > (arr_5 [i_0] [i_1])))) : (!var_10)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_20 = ((65 || ((min((min(-1, 225)), ((max(4294967295, 60))))))));
                                var_21 = (min(var_21, (((((arr_12 [i_3 + 2] [i_4 + 1] [i_1] [i_3] [i_2 + 1]) ? var_10 : (arr_12 [i_3 - 3] [i_4 - 1] [i_3 - 3] [i_3] [i_2 + 2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
