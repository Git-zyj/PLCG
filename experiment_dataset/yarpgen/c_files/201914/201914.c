/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((((~(arr_4 [i_0]))) > (arr_1 [i_0] [i_1]))));
                var_16 |= (min(((var_11 ? (arr_5 [i_0] [i_1]) : 2985727597)), ((((((var_8 ? 5822 : (arr_5 [i_0] [i_0])))) ? ((2985727584 ? (arr_0 [i_1]) : (arr_3 [i_0]))) : var_12)))));
                arr_6 [i_0] [i_1] [i_0] = var_9;

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_17 = (((((arr_1 [1] [i_1]) && 1957343601)) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_1] [i_1]))) : var_0));
                    var_18 *= ((((~(((arr_0 [i_0]) & 0))))) ? (max((((arr_8 [i_0]) ? 1309239699 : (arr_2 [i_0]))), (arr_5 [i_0] [1]))) : ((~(~1309239687))));
                    arr_9 [i_2] = (!((((arr_1 [19] [i_2 - 1]) ? 1 : (arr_1 [i_2] [i_2 - 2])))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_19 = 35;
                                arr_18 [9] [i_5] [i_5] [i_4] [i_5] [i_4] = (((2985727584 ? 434362997 : (arr_8 [i_4]))));
                            }
                        }
                    }
                    arr_19 [i_0] [15] [i_3] = 20595;
                    var_20 ^= 86;
                }
                arr_20 [20] = var_12;
            }
        }
    }
    var_21 = 4294967280;
    var_22 = ((((!(var_7 && var_10))) ? var_7 : var_1));
    var_23 *= var_6;
    #pragma endscop
}
