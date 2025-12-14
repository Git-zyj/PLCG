/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_13;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_1;
                arr_6 [i_0] [i_1] = (arr_0 [i_0 - 1] [i_0]);

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_1] [i_2] &= var_11;
                    arr_10 [i_0 - 3] [i_0] [i_0] [i_0 - 3] = (63907 | 4611686018427387904);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2 - 2] [i_3] [i_0] = (((arr_12 [i_2] [i_2] [i_0] [i_2 + 2] [i_0]) >> (((max((arr_3 [i_1] [i_2] [i_3]), var_1)) - (arr_3 [i_1] [i_3] [i_4])))));
                                var_15 ^= (((4090614439 % 35) | var_7));
                                var_16 = var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_17 = (min((max((arr_15 [i_5 + 1] [i_2 + 1] [i_1] [i_1] [i_1]), -9)), 1));
                                var_18 = (arr_4 [i_0 - 2]);
                                var_19 = (max(var_19, ((max((min((970 * 0), var_12)), 32625)))));
                            }
                        }
                    }
                    arr_23 [i_0] [i_0] [i_0] [i_0] = var_12;
                }
                var_20 = (arr_8 [i_0] [i_0] [i_0 - 3]);
            }
        }
    }
    var_21 = (max(((max((min(1, var_4)), var_2))), ((var_6 - (0 / 13835058055282163711)))));
    var_22 = (max(var_22, ((min(((((max(4611686014132420608, -6))) ? 1 : ((max(102, 1))))), (((max(var_11, var_12)))))))));
    #pragma endscop
}
