/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = ((((max(1, 8128841167864486872))) ? (((max(-1559760604, -1559760604)))) : 1));
                var_12 = 1559760603;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((max((arr_12 [i_5 + 1] [i_5 + 3] [i_5] [i_5 - 2]), (((arr_15 [i_6] [i_6] [i_6] [i_5 + 1]) >= (arr_15 [i_6] [i_6] [1] [i_5 - 1]))))))));
                                var_14 = (min((max((max((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_10 [i_4 + 1] [i_4 + 1]))), -var_6)), (arr_16 [i_2] [i_3] [i_2] [i_5] [i_6] [i_6])));
                                var_15 = (min(((1559760604 >> ((((-1559760594 ? 18368063127492076951 : 3760416353)) - 18368063127492076921)))), ((var_2 + (1 ^ var_4)))));
                            }
                        }
                    }
                }
                var_16 = ((~(!181)));
                var_17 = ((!((min((arr_4 [i_2]), (arr_4 [i_2]))))));
            }
        }
    }
    #pragma endscop
}
