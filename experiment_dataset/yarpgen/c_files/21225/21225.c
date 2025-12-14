/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 268435455;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((((4026531824 ? var_5 : (min(3035201955, var_4))))) ? (var_1 / -80) : ((3035201955 ? (arr_4 [i_1 + 2] [i_1 - 1]) : (arr_3 [i_1 - 1] [i_1 + 3] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, var_9));
                                var_18 = ((((!var_9) ? (max((-9223372036854775807 - 1), 747227451)) : (((var_5 ? var_10 : -96))))) != (((30 ? (arr_4 [i_1 - 3] [i_1]) : 124))));
                            }
                        }
                    }
                }
                var_19 -= 3249942501277179635;
                var_20 *= var_7;
            }
        }
    }
    var_21 = var_8;
    var_22 = ((var_1 ? (((((max(var_1, -2))) || ((max(var_5, 14837668276214760276)))))) : var_3));
    var_23 = var_10;
    #pragma endscop
}
