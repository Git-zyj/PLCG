/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = arr_0 [1] [i_1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((arr_9 [i_0] [i_1] [i_1] [10]) | (arr_1 [i_0]))))));
                            var_21 = (max(var_21, (((-0 + (var_17 * var_0))))));
                            var_22 += (min((((13635995643190445538 % 255) ? var_14 : (arr_9 [i_3] [i_2] [i_1 - 2] [21]))), ((((max((arr_4 [i_0] [i_2] [i_0]), (arr_7 [i_0]))) >> (((((arr_11 [i_2]) % var_17)) - 4120172858)))))));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_23 = ((+(max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
                        var_24 = var_6;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_25 ^= (((((arr_14 [i_0] [i_1]) - (30 < 245))) - var_0));
                                var_26 *= ((max(((((arr_17 [i_7] [i_4 + 4]) < 1))), (max(48437, 47)))));
                            }
                        }
                    }
                    var_27 = (max(var_27, (arr_9 [i_0] [i_1] [i_4] [2])));
                }
            }
        }
    }
    var_28 += ((32768 / (((((max(-19648, 18)))) | var_15))));
    #pragma endscop
}
