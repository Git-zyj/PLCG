/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((min(var_11, ((var_10 ? var_4 : var_10)))) == ((((var_1 && var_2) != var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 += (max((((((((arr_3 [i_1]) < var_6))) != (!var_10)))), (min(var_9, var_6))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_15 = ((!(arr_2 [i_0] [i_0])));
                        arr_11 [i_0] [i_1] [i_1] = ((var_1 ? (arr_10 [i_1 + 1] [i_1 + 1] [i_0] [2] [15] [i_2]) : var_4));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_16 = ((53230 | (~12306)));
                        arr_15 [i_0] [i_1] [11] [i_4] = ((((var_8 ? (arr_10 [i_0] [18] [i_1] [12] [18] [i_4]) : (arr_13 [1] [i_2] [1] [i_2] [i_2] [i_2]))) * ((-(arr_3 [0])))));
                    }

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        var_17 = (min(var_17, var_1));
                        var_18 = (max(var_18, var_8));
                        arr_20 [i_2] [i_1] [i_1] [i_1] [i_2] [i_2] = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_21 [i_1] [i_1] [i_1] [i_1] = var_2;
                    }
                }
                var_19 &= ((((+(((arr_8 [i_0] [i_0] [i_1]) ? var_2 : var_3)))) < ((var_5 ? ((-(arr_8 [10] [i_0] [10]))) : var_12))));
                var_20 += ((-(min(((var_9 ? var_3 : (arr_12 [i_0] [i_1] [i_0] [i_0]))), var_5))));
            }
        }
    }
    var_21 = (((min(-var_12, (var_8 / var_8))) | (((var_4 * var_6) >> ((((min(13660, -1))) - 13656))))));
    #pragma endscop
}
