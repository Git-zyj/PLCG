/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_12 [i_4] [i_3] [i_3] [i_1] [i_0] = ((1 ? -32767 : 0));
                            var_13 = var_8;
                            var_14 = var_3;
                        }
                    }
                }
            }
            arr_13 [i_0] = (var_5 ? ((var_3 ? var_12 : var_11)) : (((var_12 ? var_8 : var_9))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_5] [i_0] [i_6] [i_6] = ((~(var_4 >> var_9)));
                            var_15 = var_4;
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_16 = (max(var_16, ((max(0, (var_3 * var_7))))));
            var_17 = (1 ? 1 : (max(20, 11)));
        }
        arr_25 [i_0] = var_4;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_18 = (max(var_18, (((1 ? (16301 / 50062) : var_9)))));
                        arr_36 [i_0] [i_9] [i_10] [i_11] [i_0] [i_9] = (min(var_6, 2803597130377988307));
                        var_19 *= ((((max(var_8, (~4098717888)))) ? (((((var_8 ? var_10 : var_5))) ? var_0 : var_9)) : var_6));
                    }
                }
            }
        }
    }
    var_20 |= ((((((((var_10 ? var_5 : var_12))) ? var_1 : (((3996642873 ? var_4 : var_0)))))) ? (((((var_1 ? var_2 : var_8))) ? 0 : ((var_6 ? var_10 : var_7)))) : 8));
    #pragma endscop
}
