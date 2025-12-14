/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [6] [1] [i_0] = (((-9223372036854775807 - 1) <= (((min((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                    var_13 = (min(var_13, (((1 ? 1 : -1)))));
                    arr_12 [i_0] [14] = (-9223372036854775807 - 1);
                    var_14 *= var_6;
                }
            }
        }
    }
    var_15 = ((min(-1, (min(var_7, var_3)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_21 [i_3] [i_5] [i_3] = (~-1);
                    arr_22 [i_5] [i_5] [i_5] = (~1);
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_27 [i_3] [i_4] [i_6] [i_7] &= (arr_8 [i_7] [i_6] [i_4] [i_3]);
                            var_16 ^= var_4;
                            arr_28 [i_3] [i_6] [i_4] [i_7] = min(-502931135474856987, 7078008268853374849);
                        }
                    }
                }
                var_17 = -var_3;
                var_18 = var_12;
            }
        }
    }
    #pragma endscop
}
