/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [14] = min(var_11, (((~var_14) ? (~-42) : (max(195219755, -63)))));
                var_15 = ((~(((var_11 || (var_9 >= -66))))));
                arr_5 [i_0] [i_0] [i_0] = (min(-6772453573785409345, -1));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [4] [i_0] = 91;
                                arr_16 [i_2] = ((((!(!-96)))));
                                arr_17 [i_0] [i_0] [15] = var_9;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_16 |= ((-(((!178697641) ? (!var_0) : (!1)))));
                            var_17 &= var_13;
                            var_18 = (max(var_18, (((!((max(((var_13 ? var_8 : var_4)), (max(2275689736, var_4))))))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = 1;
    var_20 = (((-((var_6 ? 195219745 : var_4)))));
    #pragma endscop
}
