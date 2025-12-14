/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = 11671243874578702543;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((-(((arr_1 [i_0]) ? (arr_4 [i_0]) : (arr_3 [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [1] [i_2] = 16;
                            var_16 &= 17559;
                            var_17 = (68 < 3096937853);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_18 = ((((min((arr_16 [i_4]), ((16811 ? (-32767 - 1) : var_5)))) + 2147483647)) << (((~var_5) - 9892)));
                var_19 = (max(var_19, ((((arr_2 [i_5]) - 3096937853)))));
                var_20 = 3096937858;
            }
        }
    }
    var_21 -= (((((var_12 ^ var_8) >> ((max(-32757, var_0))))) != var_12));
    #pragma endscop
}
