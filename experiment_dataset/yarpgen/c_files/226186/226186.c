/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 36433;
    var_12 = ((!((var_7 || (!var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [18] [i_3] [i_4] = ((((min((min(var_2, var_9)), ((29113 ? 2843379432 : var_6))))) ? (arr_6 [i_0] [i_1] [i_0]) : ((((arr_9 [i_0] [i_1] [i_2] [i_4]) ? (var_8 <= var_7) : ((var_2 ? 50438 : var_0)))))));
                                var_13 = ((!(((10138424012961655798 ? (arr_6 [i_3] [i_3] [i_3]) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                            }
                        }
                    }
                    var_14 = var_5;
                }
            }
        }
    }
    var_15 = (min(var_5, -17007));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_18 [i_5] [i_5] [i_5 + 1] = (!3187627779338022905);
                var_16 = ((((((-127 - 1) + 170))) ? 0 : -16980));
                var_17 = ((~var_10) - ((((((arr_4 [i_6]) ? var_1 : (arr_17 [i_6]))) >= ((max(var_4, var_1)))))));
            }
        }
    }
    #pragma endscop
}
