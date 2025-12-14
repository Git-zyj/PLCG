/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (1 != 1);
    var_17 += (min((min(((var_15 ? var_10 : var_2)), ((max(65535, var_3))))), (!1)));
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((((((1 ? 1 : 37355))) ? (arr_2 [i_0 - 1] [i_0]) : ((var_2 ? (arr_1 [i_0 - 1] [i_0]) : var_13)))) / (max(((max((arr_0 [i_1]), 1))), (((arr_0 [i_0 - 1]) ? 0 : 0))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = (((((((min(1, var_6))) & ((min((arr_3 [i_0] [i_2]), 1)))))) ? (((!(1 == 1)))) : var_11));
                                var_20 = (((((min((arr_4 [i_2] [i_2] [i_0]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0]))) ? ((min(1, 4174))) : (((arr_7 [i_0] [i_2] [i_0] [i_4]) ? 1 : 31)))) / (((max(1, 1)) ? (1 ^ var_12) : 31107))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_21 -= (max((max(7, 1)), 1));
                            arr_17 [i_1] [i_1] [2] |= (max((arr_3 [1] [1]), ((((min(var_10, 1))) ? 1 : ((min(1, (arr_1 [i_0] [2]))))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((max(((min(var_13, var_8))), 36114))) ? var_5 : var_10));
    #pragma endscop
}
