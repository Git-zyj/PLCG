/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = (((arr_8 [i_0 - 1] [i_3]) || ((max((arr_8 [i_1] [i_3]), (arr_8 [i_0 - 1] [i_4]))))));
                                arr_12 [i_2] [i_1] [i_2] = 77;
                                var_12 = (min(var_12, (((((((arr_1 [i_4]) != (arr_1 [i_1]))))) ^ ((((((!(arr_2 [i_0] [i_0] [i_3]))))) & (arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1])))))));
                            }
                        }
                    }
                }
                var_13 += (((((arr_10 [11] [i_1] [i_1]) + (((arr_0 [i_1]) ? (arr_10 [i_0] [4] [i_0 - 1]) : (arr_0 [i_0]))))) % ((((((((arr_8 [i_0 - 1] [i_1]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_1] [i_1])))) != (((arr_5 [12]) + (arr_1 [i_0])))))))));
                arr_13 [i_0] = (min((((arr_4 [i_0 - 1] [i_1] [i_0]) >> (((arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_1]) - 5367813575288113879)))), (arr_4 [i_0 - 1] [12] [13])));
            }
        }
    }
    var_14 = ((((var_7 != (min(var_1, var_0)))) || var_0));
    #pragma endscop
}
