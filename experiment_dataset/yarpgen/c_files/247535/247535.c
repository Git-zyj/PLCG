/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min((arr_2 [i_1]), (arr_1 [i_0 + 4] [i_1 + 1])));
                var_10 = (max(((-(arr_1 [i_1] [i_0]))), (max(((1 ? 1 : 1)), (15335 >> 1)))));
                var_11 ^= (((((arr_2 [14]) - ((min((arr_3 [14] [i_1]), (arr_0 [i_0])))))) >= (arr_2 [0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 ^= var_1;
                            var_13 = (max(((min(var_5, (arr_3 [i_1] [i_1])))), (((arr_2 [i_1]) ? var_8 : (arr_2 [i_1])))));
                            var_14 = (max(((min((arr_5 [i_0 + 2] [i_1] [i_2] [i_1]), (arr_5 [i_1] [i_2] [i_0] [i_1])))), (arr_9 [i_3] [i_1] [i_2] [i_1] [i_0])));
                            arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = var_8;
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_15, ((max(var_4, var_3)))));
    #pragma endscop
}
