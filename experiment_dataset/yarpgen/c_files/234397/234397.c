/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 ? var_11 : 255));
    var_15 = ((var_1 <= (((((min(var_2, var_3))) ? var_4 : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = ((((min((arr_0 [i_0]), ((max(var_3, 0)))))) ? 3281934842072677075 : 0));
                var_17 = (max(((((arr_1 [i_0] [i_0]) ? ((var_8 & (arr_3 [4] [i_0] [0]))) : 62914560))), (max((arr_2 [i_0] [i_1]), var_10))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_1] = var_8;
                    arr_7 [i_2] [14] [i_0] |= (arr_3 [i_0] [i_0 - 2] [8]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [8] [8] [i_2] [8] [i_2] = (arr_10 [3]);
                                arr_17 [i_1] [i_1 + 1] [11] [i_0] [i_0] = var_7;
                                arr_18 [i_4] [i_3] [i_2] [16] [i_0 + 1] = (min(((((min((arr_15 [i_0] [i_1] [i_1] [i_3] [i_4]), (arr_3 [i_0] [i_0] [i_0 - 1])))) ? 1 : 127)), ((min(var_10, 0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
