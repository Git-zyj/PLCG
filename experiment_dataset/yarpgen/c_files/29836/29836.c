/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (min(var_18, var_3));
                var_19 ^= (arr_1 [i_0 + 1] [i_1]);
                arr_5 [i_0 + 1] [i_1 - 3] [i_1] = (((-2147483647 - 1) && (((arr_0 [i_0] [i_1]) > 2147483647))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1 - 2] [i_0] [i_3] [i_3 - 1] = (((((((var_0 >> (((arr_3 [i_0] [i_1]) - 93)))) >= ((min(var_12, var_10)))))) < ((max((arr_8 [i_3 + 2]), (arr_8 [i_3 + 2]))))));
                            arr_12 [2] = (arr_2 [i_1 - 1] [i_1 - 1]);
                            var_20 -= 1;
                            arr_13 [6] [6] [1] [3] [i_2] [i_2] = ((((max((arr_4 [i_1 + 1]), (((-2147483647 - 1) ? (arr_9 [i_0] [i_1 + 1] [i_0] [i_3]) : (-9223372036854775807 - 1)))))) ? (min(((-(arr_4 [i_3]))), (arr_0 [i_3] [10]))) : (-2147483647 - 1)));
                            arr_14 [i_0] [i_2] = ((!((min(144115188075855871, 18302628885633695745)))));
                        }
                    }
                }
                var_21 = (min(var_21, ((((max((arr_9 [15] [i_0] [15] [i_0 + 1]), var_2))) ? ((((~var_4) ? 169 : (((arr_9 [3] [i_0] [i_0] [i_0 + 1]) & var_4))))) : ((((((arr_0 [i_0 + 1] [i_0 + 1]) % (arr_0 [i_0 + 1] [i_0 + 1])))) ? ((var_9 ? (arr_4 [i_1]) : 202)) : (max(var_9, var_2))))))));
            }
        }
    }
    #pragma endscop
}
