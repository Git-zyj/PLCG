/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((((((min(3989835380, var_14))) ? var_9 : ((((-2147483647 - 1) <= 3989835385)))))), var_7);
    var_17 = 16320;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = 1289860206;
                var_19 = (-(arr_0 [i_0]));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_20 = (min(var_20, (arr_1 [i_2])));
                    arr_10 [i_1] [i_1 - 2] [i_1] = (((!var_1) ? -var_9 : ((((!(arr_3 [0])))))));
                    var_21 = (1289860213 > var_14);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_1] [i_4] [i_4] [i_4] = (arr_11 [i_0] [i_2] [i_3 - 1] [i_4]);
                                var_22 = (max(var_22, var_10));
                                var_23 = (((arr_11 [i_3 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1]) && var_15));
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] = ((((7 * (arr_2 [i_0]))) + var_4));
                                var_24 = (max(var_24, (((((-(arr_1 [i_0]))) > ((var_3 ? (arr_4 [i_0]) : -31140)))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_25 &= (min((((arr_17 [i_1 - 3]) ? var_6 : (arr_12 [4] [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 1]))), (((arr_8 [i_5] [10] [2] [i_0]) + ((max(var_6, (arr_12 [12] [12] [12] [12] [12]))))))));
                    var_26 = (min(var_26, (((-1289860207 ? 3989835365 : 38)))));
                    arr_20 [i_0] [i_1] [i_0] [i_0] = ((arr_1 [i_1 - 3]) != (arr_8 [i_0] [i_0] [i_0] [i_0]));
                    var_27 = (((((var_5 << (262016 - 262016)))) ? (arr_6 [i_1]) : (min(var_7, 305131915))));
                }
                arr_21 [i_1] = (((((!var_4) >= (min(var_13, -37))))) > 16308);
                arr_22 [i_1] [9] [i_1] = (-1289860227 / 16320);
            }
        }
    }
    #pragma endscop
}
