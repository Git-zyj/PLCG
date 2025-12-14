/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min(var_12, (max(var_4, 0)))), (max(18014398509481980, (max(-18014398509481981, 61451))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = ((((max((arr_10 [3] [3] [i_2] [1] [15]), (arr_0 [i_4])))) && ((!(((arr_4 [i_2]) || (arr_6 [i_1 - 2] [i_1 - 2] [3] [i_4])))))));
                                var_15 = (((arr_10 [i_0] [i_1 - 1] [i_2] [i_3 - 3] [i_4]) + (max(((~(arr_10 [i_0] [13] [i_2] [i_2] [i_4 + 2]))), (arr_4 [i_0])))));
                                var_16 += (arr_10 [i_0] [i_1 - 1] [i_2] [10] [i_4]);
                                var_17 = (((min((((arr_3 [i_1] [i_3 - 3]) - 18014398509481958)), (min(-18014398509481993, -18014398509481993)))) > 1));
                            }
                        }
                    }
                    var_18 = 16357720568714734905;
                    var_19 = (((((((arr_4 [i_1]) < (arr_3 [i_0] [i_0]))))) == (((((18014398509481993 ? (arr_4 [i_1]) : -6123029425176399339))) ? (((~(arr_3 [0] [i_2])))) : (0 - -6123029425176399338)))));
                }
            }
        }
    }
    #pragma endscop
}
