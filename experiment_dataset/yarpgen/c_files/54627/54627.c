/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? var_6 : (((15691503757630486933 / 10530) * var_8))));
    var_13 = ((((var_5 ? (var_11 * var_7) : ((var_11 ? var_2 : var_1))))) ? (((19 ? var_1 : var_8))) : var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 *= (!170952616);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((((min((((-9223372036854775807 - 1) ? 2683646174 : 53)), (arr_4 [1] [i_4 + 1] [1])))) ? ((249623275087235178 ? -14 : 18197120798622316438)) : -118)))));
                                var_16 -= (arr_8 [i_1] [11] [i_1] [i_1]);
                                var_17 = (max(var_17, ((((var_0 < (arr_1 [i_2 + 3])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
