/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_10 += ((min(var_5, (((arr_9 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2]) ? var_2 : var_6)))));
                            arr_11 [i_3] [i_1] [i_1] [i_1] [i_2] [i_3] = 7873406887633180786;
                            arr_12 [i_0] [i_3] [i_0] [i_0] [i_0] = (max(((61163 + (5234293219901455033 > 0))), (min(((~(arr_2 [i_0]))), ((min(var_3, var_5)))))));
                        }
                    }
                }
                var_11 -= var_7;
                arr_13 [i_0] &= (((((-2206450148324078541 != (!var_8)))) != (arr_3 [i_1])));
                arr_14 [i_0] [i_0] [i_0] = ((!((((min(118, -515425271)) & ((min(var_4, var_5))))))));
                var_12 = var_0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_4] [i_6] [i_4] [i_7] = min(var_2, (-174871544 - var_5));
                                arr_29 [i_4] [i_4] [i_5] [i_6] [i_7] [i_4] [i_8] &= (arr_6 [i_5] [i_8]);
                                var_13 += (5234293219901455033 + 174871555);
                            }
                        }
                    }
                }
                arr_30 [i_4] [i_4] [i_4] &= 9223372036854775796;
                var_14 ^= ((var_4 & (((max(-9223372036854775776, (arr_5 [i_4]))) - 7697720877200502378))));
                arr_31 [i_5] [i_4] [i_4] = (2206450148324078539 == 2147483647);
            }
        }
    }
    var_15 -= ((43 ? ((max((min(var_3, var_5)), (max(-43, var_3))))) : ((min((var_3 < 65535), 61163)))));
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                arr_38 [i_9] [i_9] [i_9] = ((((min(5234293219901455033, 17918069557436455716))) ? (min(2969699260493620517, 32765)) : -1969521577));
                var_16 &= var_8;
            }
        }
    }
    #pragma endscop
}
