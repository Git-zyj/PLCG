/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_3;
    var_20 = (-11 > 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = 63;
                var_22 = (arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2]);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((1 << (-1776842936 - 2518124355))))));
                                var_24 = var_9;
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_4] [i_4] |= (min((min(((min(1, (arr_11 [i_0] [i_1] [i_0] [i_0])))), -8129534633555565275)), ((((65535 ? 0 : 28594)) - (arr_7 [i_4] [i_3 - 1] [i_1 + 1] [i_1])))));
                            }
                        }
                    }
                }
                var_25 = (((((1 ^ (arr_4 [i_1 + 2] [i_1 + 2])))) ? (((arr_4 [i_1 + 4] [i_1 + 4]) - 31)) : ((1 ? (arr_4 [i_1 - 1] [i_1 + 2]) : (arr_4 [i_1 + 1] [i_1 + 2])))));
            }
        }
    }
    #pragma endscop
}
