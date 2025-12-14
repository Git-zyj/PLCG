/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_2] = (((120 ^ 5491) ? (arr_3 [i_0]) : ((var_12 | ((((arr_2 [i_1] [i_1]) ? -121 : var_10)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (((arr_7 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4 + 2]) - (arr_7 [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 - 2] [i_4 - 2] [i_4 - 1])));
                                var_21 = (((((arr_5 [i_4 + 2]) ? var_18 : (arr_5 [i_4 + 2]))) - (arr_5 [i_4 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 -= (var_1 | (((((var_9 ? var_18 : var_9))) ? -28670244 : ((var_0 ? var_15 : var_2)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_23 = (max(var_23, (((((var_13 ? var_2 : (arr_20 [i_5]))) ^ (max(((-119 ? 10908 : (arr_14 [i_5]))), var_4)))))));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_24 = var_2;
                                var_25 = ((0 ? ((~((-41 ? 1048512 : 2122977651)))) : ((((max(var_10, (arr_14 [i_6])))) ? (arr_17 [i_7 + 1]) : (arr_22 [i_7 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
