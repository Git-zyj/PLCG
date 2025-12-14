/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-115 == (236 % 106)))) <= (var_3 % 70)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (((((arr_11 [5] [i_3] [i_2] [18] [i_0]) + 2147483647)) >> ((((1 ? (max(-1207691061, -4768235246110078690)) : 20)) + 1207691082))));
                                var_16 = (max((max((arr_1 [i_3] [i_0]), ((1 ? -27 : 1711471480)))), (((var_13 >= (((arr_2 [i_0]) / (arr_10 [i_0] [i_1] [i_2] [i_3]))))))));
                                var_17 -= ((!(arr_7 [i_4])));
                            }
                        }
                    }
                }
                var_18 = (max((((max(0, 0)))), ((-var_9 ? 9223372036854775807 : -2774625494287003389))));
            }
        }
    }
    var_19 = ((var_0 ? (((127 >> (88292022 - 88292020)))) : ((~(max(var_6, var_11))))));
    #pragma endscop
}
