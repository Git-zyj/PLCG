/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_3 - 1] [0] [0] [i_1] [i_1] = 1;
                            arr_10 [1] [i_1] [i_2] [i_1] [i_0] = -2585237740016624513;
                            arr_11 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] = -99;
                        }
                    }
                }
                var_14 = (max(var_14, var_13));
                var_15 = ((-3429447122823542103 ? -92 : 1));
                var_16 = (arr_2 [i_0]);
                var_17 = (min(var_17, ((-((8680692578795641166 ? var_10 : (var_4 / 45869621331980883)))))));
            }
        }
    }
    var_18 = (var_11 ^ var_9);
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_19 = -var_11;
                    arr_23 [i_5] = var_1;
                }
            }
        }
    }
    var_20 += ((((-var_1 ? 2032668191201344709 : var_3)) & ((-((var_10 ? var_2 : var_10))))));
    var_21 ^= var_2;
    #pragma endscop
}
