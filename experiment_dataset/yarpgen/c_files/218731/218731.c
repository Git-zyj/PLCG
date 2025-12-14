/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_16 *= (~var_9);
                var_17 *= ((~(((var_6 <= (arr_5 [i_0 - 1] [1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((~((var_8 ? (arr_4 [12] [i_1 + 1] [i_1 - 1]) : (arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])))))));
                            var_19 = var_5;
                        }
                    }
                }
                var_20 += ((((496518160 ? (arr_9 [0]) : 135)) & var_4));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_21 *= (arr_3 [i_4] [i_1] [14]);
                            var_22 = (max(var_22, ((max((((arr_0 [i_0 - 2]) % (arr_0 [i_0 - 2]))), var_9)))));
                        }
                    }
                }
            }
        }
    }
    var_23 ^= ((((max(((var_11 ? var_12 : var_11)), (((var_9 ? var_9 : var_10)))))) ? (~var_6) : var_10));
    var_24 = (min(var_24, (~var_12)));
    #pragma endscop
}
