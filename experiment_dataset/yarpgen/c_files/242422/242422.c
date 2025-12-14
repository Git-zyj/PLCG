/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = (arr_7 [i_0]);
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] = (arr_11 [i_0] [i_1] [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = (arr_7 [i_4]);
                            }
                        }
                    }
                    var_14 = ((arr_3 [i_1] [i_0] [i_1]) * (arr_9 [i_2] [i_0]));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                var_15 = 5658;
                var_16 ^= ((~(1 & 9223372036854775807)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_17 = var_6;
                    var_18 = 2147483647;
                    var_19 = var_0;
                    var_20 = (((!9223372036854775807) + ((((var_2 ? var_2 : var_5))))));
                    arr_26 [i_8] [i_8] [5] [i_8] = (max(((4294967295 ? var_5 : ((((!(arr_20 [i_7] [i_7]))))))), var_2));
                }
            }
        }
    }
    #pragma endscop
}
