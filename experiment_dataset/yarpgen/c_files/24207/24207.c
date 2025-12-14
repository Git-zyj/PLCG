/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= -var_8;
    var_12 -= ((-((5569757487290316097 ? 140 : 5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((min(12876986586419235519, 1))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_7, var_4));
                                var_15 = (((-(-32767 - 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_20 [i_5] = (min(((-(min(var_5, (arr_17 [i_5] [i_6]))))), (((((((-2147483647 - 1) ? var_4 : (arr_13 [i_5])))) ? (var_0 | var_8) : (5569757487290316097 != var_8))))));
                var_16 &= ((~(arr_18 [i_5 - 1] [i_5 + 1])));
            }
        }
    }
    #pragma endscop
}
