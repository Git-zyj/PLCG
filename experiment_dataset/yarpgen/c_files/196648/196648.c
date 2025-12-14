/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196648
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
                var_19 = ((((((5680843024220844792 < -21973) ? (arr_1 [i_1] [i_0]) : 1))) ? (((arr_0 [i_1]) ? ((((var_6 == (arr_1 [1] [i_1]))))) : 4650174101541701083)) : (((((arr_3 [i_0] [i_1] [1]) == (arr_0 [i_1])))))));
                arr_5 [i_0] = (max((255 != 50), (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 = (arr_0 [i_0]);
                            var_21 = (min(var_21, var_1));
                            var_22 += (max(var_8, (arr_3 [i_2] [i_0] [i_0])));
                        }
                    }
                }
                var_23 = (((arr_4 [i_0] [7] [i_0]) ? ((var_3 ? ((12765901049488706832 ? 0 : -9918)) : var_3)) : (((65535 ? 16382 : 26399)))));
            }
        }
    }
    var_24 = (~-26383);
    var_25 *= var_18;
    #pragma endscop
}
