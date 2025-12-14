/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 240;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_0] [i_0] = (max((min((((var_8 ? 34177 : (arr_1 [i_1])))), var_3)), ((min((arr_3 [i_0] [i_0] [i_0]), ((var_4 / (arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = 4;
                                arr_12 [i_0] [i_1] [11] [i_3] [11] = (i_0 % 2 == 0) ? ((((((arr_5 [4] [i_1 + 1] [i_0]) ? 189 : var_6)) >> (((max((var_3 < 2147483647), var_9)) - 1986752837))))) : ((((((((arr_5 [4] [i_1 + 1] [i_0]) ? 189 : var_6)) + 2147483647)) >> (((max((var_3 < 2147483647), var_9)) - 1986752837)))));
                                arr_13 [i_0] = ((((max(200, -117)))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [3] = 31359;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = (max((~116), (min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (((arr_7 [i_0] [i_1]) ? var_8 : var_7))))));
                                var_18 = ((((((((arr_16 [i_0 + 1] [2] [i_2] [i_0] [i_2]) ? 65526 : -24756)) == (var_2 || var_12)))) == (0 * -107)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((max((max(var_13, var_10)), (max(var_0, var_4)))))) | (max(((var_4 ? 9205333864092866649 : 3)), (117 / -1902971033220389503)))));
    #pragma endscop
}
