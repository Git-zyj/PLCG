/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 1));
    var_15 = (min(var_15, (~17746245882550185760)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = (arr_2 [i_1 - 1]);
                var_17 = ((~(min(((-1941081124 ? (arr_3 [7] [i_1] [i_1]) : 1941081131)), (arr_3 [i_0] [i_1] [i_1])))));
                var_18 = -35915;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [10] [10] [i_4] [i_3] = (1 ^ (arr_1 [i_0]));
                                arr_14 [i_0] [i_1] [i_2] = (~var_0);
                                var_19 ^= 111;
                                arr_15 [i_3 - 2] [i_4] = 2197359707;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_20 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                                var_21 = ((+(((arr_19 [i_0] [i_1] [i_1] [i_6]) ? (arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] [i_6]) : var_4))));
                            }
                        }
                    }
                    var_22 = ((var_1 ? var_0 : ((4294967294 ? 1 : var_12))));
                }
                arr_21 [i_0] [i_0] = 1897739757;
            }
        }
    }
    #pragma endscop
}
