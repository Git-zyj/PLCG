/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_12 = (arr_5 [i_0] [i_1] [i_1]);
                    arr_9 [i_0] [1] [i_2] = (((arr_8 [i_1]) ? var_5 : (arr_2 [i_0] [i_1])));
                    arr_10 [10] [i_1] [i_0] [i_0] = (((arr_0 [i_1]) ? (arr_8 [i_2]) : (arr_8 [i_1])));
                    arr_11 [i_2] = (((arr_6 [i_0] [i_1] [i_2]) ? (arr_6 [7] [i_1] [i_2]) : (arr_7 [i_0] [i_2])));
                }
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_13 = (arr_7 [i_1] [i_4]);
                            var_14 ^= (((min(var_1, (min(var_2, var_10)))) != (((var_4 ? ((-(arr_5 [i_0] [i_3] [i_4]))) : ((max((arr_15 [i_0] [i_0] [i_0] [i_1] [i_3] [i_4]), (arr_6 [i_0] [i_0] [i_3])))))))));
                        }
                    }
                }
                var_15 = var_10;
            }
        }
    }
    #pragma endscop
}
