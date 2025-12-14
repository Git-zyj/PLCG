/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max((~-65), 3717556106));
                var_15 = (((arr_0 [i_0]) & ((max((((!(arr_1 [i_0] [i_0])))), var_12)))));
                var_16 = (min(var_16, ((min(38, (max(var_8, (((0 ? 1 : var_9))))))))));
                var_17 = (min((arr_3 [i_0] [i_1] [i_0]), (((-55 / 91965336) ^ (arr_1 [i_1] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_18 = max((~63), var_7);
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_19 += max((max((max(-1, 27240)), 1)), (((!(arr_4 [i_2] [i_3])))));
                                var_20 ^= (((((max(-24, (arr_14 [i_5] [4] [i_6 - 1] [0] [i_6] [i_6]))))) / (max((arr_14 [i_3] [5] [i_6 + 1] [i_6] [i_6] [i_6]), (arr_12 [i_6] [i_6] [i_6 + 1] [i_6] [i_6] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
