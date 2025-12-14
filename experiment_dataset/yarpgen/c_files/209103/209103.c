/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_15 [i_1] [i_3] [i_4] |= 2121187866599929568;
                                arr_16 [i_0] [2] [i_0] [i_2] [i_0] = ((7 ? 86 : -62032682));
                                var_13 = -8124380188512021677;
                                arr_17 [i_4] [8] [i_3] [i_3] [i_3] [i_1] [12] &= var_10;
                            }
                            for (int i_5 = 2; i_5 < 18;i_5 += 1)
                            {
                                var_14 &= (min(-8124380188512021695, 3640202313102768022));
                                var_15 = (min(var_15, ((((62 <= ((-8124380188512021677 ? 74 : 1)))) ? ((~(min(755165733828914273, 13590)))) : (((min(-119, 1559263220790579130))))))));
                                arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] = (min(var_8, ((min(1725519522, (102 > 15242209164944911254))))));
                            }
                            arr_21 [i_0] [i_2] [i_0] [i_0] = ((((var_5 || (!223))) ? (~var_4) : ((((var_2 ? -13587 : 21494))))));
                        }
                    }
                }
                var_16 = ((~(99 != 54)));
                var_17 &= var_8;
                arr_22 [i_1] [i_1] [i_0] = var_2;
            }
        }
    }
    var_18 = (max(var_18, (~70)));
    var_19 = (min(var_11, var_9));
    #pragma endscop
}
