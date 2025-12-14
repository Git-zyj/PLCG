/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_12 *= ((-(arr_8 [i_3])));
                            var_13 = (max((arr_0 [i_3]), (min((arr_0 [i_2]), (arr_2 [i_0] [i_1])))));
                        }
                    }
                }
                var_14 -= ((((((((arr_1 [i_1]) ? var_1 : -481796850))) ? ((-(arr_7 [i_1] [i_1] [0] [i_0]))) : (((arr_7 [i_1] [i_1] [10] [i_0]) / var_10)))) / 153));
            }
        }
    }
    var_15 ^= ((153 ? var_5 : 103));
    var_16 = 0;
    #pragma endscop
}
