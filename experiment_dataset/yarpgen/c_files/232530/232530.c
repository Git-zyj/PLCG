/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = (((((!((min(var_12, (arr_8 [i_0] [i_1] [i_2 - 1]))))))) << ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 3]))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 &= ((!(0 >= 7400755949024859311)));
                        var_14 = (max(var_14, (~1)));
                        var_15 = var_2;
                        arr_13 [i_0] [i_2] [i_2] [i_0] [i_0] = 6748670718220867654;
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        var_16 = (((arr_8 [i_0] [i_2 + 2] [i_4 - 2]) ? (arr_14 [i_0] [i_0] [i_2 + 1] [i_2] [i_0] [i_4]) : ((43423 - (arr_8 [i_0] [i_0] [i_2])))));
                        var_17 ^= ((((((!(arr_8 [6] [i_1] [i_4]))))) & (arr_7 [i_0 + 3] [1] [i_2 + 3] [i_4])));
                        arr_18 [i_0] [i_0] [i_0] = (((arr_9 [i_0] [i_0 - 1]) % (arr_9 [i_0] [i_0 + 1])));
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_18 = (max((((0 << (1187908775801136549 - 1187908775801136524)))), ((max(31, (arr_2 [i_1]))))));
                        arr_21 [i_0] = ((((min(var_4, (((1 ? 1 : -24)))))) ? 0 : (max(4294967295, 43412))));
                    }
                    arr_22 [i_0] = 1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                var_19 *= (min(236, var_0));
                var_20 |= ((var_7 >> ((((var_4 ? var_1 : 0)) - 2306697542))));
            }
        }
    }
    #pragma endscop
}
