/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (arr_0 [i_1 - 4]);
                    arr_6 [i_0] [i_1] [i_1 - 1] [i_0] = (arr_0 [i_0]);
                    var_16 *= var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (max((((var_6 <= (arr_13 [1] [i_0] [1] [i_0 - 1] [i_0 - 1])))), (max(var_11, ((min((arr_2 [i_0] [0] [i_0]), var_13)))))));
                                arr_15 [i_0] [i_1 - 1] [12] [i_2] = arr_11 [i_0] [i_0] [7] [i_0] [i_0];
                                var_17 = (max(var_6, (arr_1 [i_0])));
                            }
                        }
                    }
                    arr_16 [i_0] = (max(151, -9223372036854775783));
                }
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
