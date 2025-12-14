/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((-1 ? 82 : 6))), (((!(9793833403062530041 + -1))))));
    var_21 = (!8652910670647021587);
    var_22 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_23 = ((((((var_2 < var_8) ^ (((arr_2 [i_0] [i_0] [i_1]) / 1))))) ? (min(0, (10358756278766081226 || 143))) : ((21421 ^ (arr_4 [15] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [11] [11] [7] [i_1] [i_1] [i_1] [i_1] = ((((min(828581804, (((var_1 == (arr_6 [i_0] [2] [i_2] [2]))))))) ? (((min((828581804 <= -96), 1)))) : 8652910670647021575));
                                var_24 ^= (min((((!(576460752303423472 | 9793833403062530041)))), (min((255 == var_16), 8652910670647021573))));
                                var_25 = (max(var_25, ((((arr_2 [18] [i_1] [i_0]) ? (((-9223372036854775784 ? var_4 : -39))) : (((var_14 | (((((arr_8 [14] [i_0]) + 2147483647)) << 0))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
