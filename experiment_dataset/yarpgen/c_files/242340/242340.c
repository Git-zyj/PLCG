/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (-32767 - 1);
                arr_6 [i_0] [i_1] &= min((-9223372036854775807 - 1), ((((9223372036854775807 ? 1 : var_3)))));
                var_15 = 8012792395994230757;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 += (var_3 ? 1 : (!1));
                                arr_14 [i_0] [i_3] [i_2] [i_3] = (min(1, 13613493462874994699));
                                arr_15 [1] [i_1] [i_3] [i_3] [i_3] [i_4] = ((((((8388607 ? var_12 : 0)))) ? (!-1) : (((!(!var_12))))));
                                var_17 = (min((!46452), 1));
                            }
                        }
                    }
                }
                var_18 = -93;
            }
        }
    }
    var_19 = 32767;
    var_20 = (!20545);
    #pragma endscop
}
