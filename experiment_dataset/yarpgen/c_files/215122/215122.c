/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [7] [0] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] = ((((1661328641 ? -var_2 : var_5)) >= (((-var_8 ? 51 : ((var_5 ? var_10 : var_6)))))));
                            var_11 = (((arr_12 [i_3 + 2] [i_3 + 2] [i_2 - 1] [i_2 + 1]) ? (((arr_9 [i_3 - 1] [i_3 + 1] [i_2 + 1] [i_2 + 2]) ? (arr_12 [i_3 + 2] [i_3 + 1] [i_2 + 1] [i_2 + 1]) : (arr_12 [i_3 - 1] [i_3 + 2] [i_2 + 1] [i_2 + 1]))) : ((((!(arr_9 [i_3 + 1] [i_3 + 1] [i_2 + 2] [i_2 + 2])))))));
                            var_12 = ((-9223372036854775793 ? 7172796204769760480 : 22737));
                            arr_15 [i_3] [i_1] [i_1] [i_1] = ((((((arr_5 [i_2 + 1]) ? (arr_5 [i_2 + 2]) : var_2))) ? ((var_1 << (((max((arr_12 [i_0] [i_1] [i_2] [i_3]), (arr_3 [i_0] [i_0]))) - 18446744073709551558)))) : ((-(var_2 && var_5)))));
                            var_13 = (max(var_13, (((var_6 ? (max(36028797018962944, var_8)) : (((-(arr_2 [i_2 + 1] [i_2 - 1])))))))));
                        }
                    }
                }
            }
        }
    }
    var_14 &= ((2146658304 ? 18446744073709551615 : 4294967278));
    #pragma endscop
}
