/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 34359737344;
    var_14 = ((!(var_1 / var_11)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 -= 1;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_2] [0] [0] = ((((((-(arr_9 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_4 - 3]))))) ? var_8 : (((max((arr_3 [i_0]), (arr_3 [i_1])))))));
                                arr_12 [i_2] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = (((min((arr_3 [i_2 + 1]), (((arr_1 [i_2]) / var_1)))) + (arr_9 [i_0] [i_1] [i_1] [8] [i_2] [i_3] [i_1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_16 *= ((((!((max(var_3, var_5))))) && ((min(((min(0, 3))), -8428757432355797471)))));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [6] = (((var_8 * (arr_15 [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] [i_2]))));
                            }
                        }
                    }
                    var_17 = min(((((arr_14 [i_2 + 1] [i_2] [i_2] [6]) < (arr_14 [i_2 + 2] [i_1] [i_2] [i_2 - 3])))), (((arr_14 [i_2 + 2] [i_0] [i_2] [i_2]) % (arr_14 [i_2 - 2] [i_1] [i_2] [10]))));
                }
            }
        }
    }
    var_18 = (max((((!2) ? ((min(1, var_9))) : (max(var_2, var_10)))), var_9));
    var_19 = ((((~(var_2 / 5793022707868155243))) >= var_6));
    #pragma endscop
}
