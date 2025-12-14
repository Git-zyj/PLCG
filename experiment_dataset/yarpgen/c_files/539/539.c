/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = ((41746 ? (((((((arr_14 [i_0]) - 187))) && var_10))) : (198 <= -156)));
                                var_18 = (min(var_18, (((+((0 ? 0 : ((min((-32767 - 1), var_12))))))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_19 = (((!var_7) <= (min(62363, 27823))));
                    arr_18 [i_0] = (((min(((((arr_12 [i_0] [12] [i_1] [i_0] [i_0]) && 3359958761))), 71)) * (max(-var_9, var_0))));
                }
                arr_19 [i_0] [3] [i_1] = (((arr_13 [2] [2] [i_0] [4] [i_1]) && 7806721740550520690));
            }
        }
    }
    var_20 = var_1;
    var_21 &= (max((((((max(934061088005105956, 41))) ? 221 : var_0))), (28336 * var_3)));
    #pragma endscop
}
