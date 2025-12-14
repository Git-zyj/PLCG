/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((((arr_3 [11] [i_0 - 1]) << (((arr_0 [i_0] [i_0]) - 88)))) >= (!var_5))) ? ((((((var_14 ? 22 : var_5))) && (arr_0 [i_0 + 3] [i_0])))) : ((((max(var_0, (arr_4 [17] [17] [i_0]))) >= ((min((arr_4 [i_0] [i_1] [11]), 129))))))));
                var_15 *= (((arr_0 [i_0 + 2] [i_0 + 2]) ? (((arr_4 [i_0 - 1] [i_0 + 2] [i_0 + 2]) ? (arr_4 [i_0 + 2] [i_0] [i_0 + 1]) : (arr_0 [i_0 - 1] [i_0 - 1]))) : (((((arr_0 [i_0 - 1] [i_0 - 1]) && (arr_0 [i_0 - 1] [1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_16 = (min(var_16, var_3));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_3] [17] [i_2] [i_2] [i_2] = (((var_4 ? var_14 : (arr_12 [i_3] [i_3] [i_4 + 2] [i_5]))));
                            var_17 ^= var_6;
                            arr_16 [i_3] = (var_3 / 144115188075855856);
                        }
                    }
                }
                var_18 = (arr_8 [i_3] [i_2]);
            }
        }
    }
    #pragma endscop
}
