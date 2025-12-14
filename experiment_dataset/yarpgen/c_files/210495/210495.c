/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [5] [i_1] = 21;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 *= ((((-((var_5 ? (arr_5 [3]) : 31)))) >> (((((max(31, 2143289344)) + 225)) - 2143289546))));
                                arr_17 [i_1] = ((((((arr_6 [i_2 - 2]) / (arr_6 [i_2 - 3])))) ? (((arr_6 [i_2 + 1]) ? 128 : 2305843009213693952)) : (arr_6 [i_2 - 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (((31 & var_13) % var_11));
    #pragma endscop
}
