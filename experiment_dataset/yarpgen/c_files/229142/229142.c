/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((!((((var_6 & 65517) ? ((max(6, var_8))) : (var_4 & 16337))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (((((((((arr_7 [i_0] [i_0] [i_0] [i_4]) ? 32767 : (arr_8 [i_0])))) - 2404984839189515361))) ? (((arr_8 [i_1]) ? (((arr_4 [i_4]) ? 4294967295 : 10)) : (arr_7 [i_0] [i_0] [i_2] [i_3]))) : ((((-2147483647 - 1) | (arr_5 [i_4] [i_2]))))));
                                var_14 = -28378;
                            }
                        }
                    }
                    var_15 &= ((~(arr_12 [i_0] [i_0] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    var_16 = (((((~(~0)))) ? (var_4 < var_2) : var_10));
    #pragma endscop
}
