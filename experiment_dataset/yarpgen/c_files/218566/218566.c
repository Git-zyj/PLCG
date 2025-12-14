/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [9] [2] [i_0 - 1] = ((!((max(173, 81)))));
                var_15 = (((max(-1181185974, 8)) == var_0));
                arr_7 [i_1] = 1929208687;
                var_16 -= ((min((((10 >> (52 - 33)))), ((var_8 ? (arr_5 [1] [i_1] [1]) : 1615740857)))));
            }
        }
    }
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, ((max(var_1, ((24671 * (arr_15 [i_4] [1] [2]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_4] [6] [10] [i_6] = max((min((max(-33554432, 1)), (arr_19 [i_6] [i_6] [i_5] [i_4] [i_3] [i_2] [i_2]))), (((!(arr_13 [i_2] [i_4])))));
                                arr_23 [i_2] [i_3] [14] [11] [i_4] = (max(((-(arr_14 [i_2] [i_4] [4]))), (arr_14 [i_2] [i_4] [i_6])));
                                var_19 = (0 & 24672);
                                var_20 = 1181185991;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
