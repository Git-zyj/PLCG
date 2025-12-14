/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (((-32767 - 1) != (~-125)));
                arr_8 [i_0] [i_0] = (arr_5 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                arr_15 [i_2] = (max(((((arr_13 [i_3]) >= (arr_13 [i_2])))), (max((arr_13 [i_2]), (arr_13 [i_3])))));
                var_15 ^= arr_12 [i_2];
                var_16 = (max(var_16, 12276744389055534710));
                arr_16 [i_3] [i_2] [i_2] = var_5;
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_23 [i_4 - 4] [i_4 - 4] = (arr_19 [i_5] [i_4] [i_3] [6]);
                            var_17 = (arr_21 [i_4 + 1]);
                            arr_24 [7] [i_4] [i_3] [i_2] = (max(((((min((arr_13 [i_3]), var_0))) ? 1 : (arr_21 [i_5]))), 32766));
                            arr_25 [i_5] [i_4] = var_7;
                            arr_26 [6] [1] [9] [i_2] = (min((arr_11 [i_3]), (min((arr_18 [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 1]), (arr_9 [i_3])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
