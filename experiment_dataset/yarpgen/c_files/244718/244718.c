/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (((max(-var_4, var_5))) - (((var_9 + var_5) ? var_5 : (var_8 - var_2))));
    var_12 = ((-470590744 != ((-((var_0 ? var_9 : var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 ^= var_4;
                    var_14 = var_9;
                    var_15 = var_5;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_16 = var_2;
                        arr_11 [i_0] [i_2] [i_2] [i_3] = (8053841468587479267 && 23458);
                        var_17 = (max(var_17, (((((255 / (arr_1 [i_0]))) <= var_0)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
