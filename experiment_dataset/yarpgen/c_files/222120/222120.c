/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max((49793 ^ -18), var_3)), var_4));
    var_18 = ((((var_6 ? ((max(1, var_15))) : ((max(0, 15742)))))) ^ 1692408069);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = ((!((!(arr_5 [i_0] [i_0] [i_0])))));
                var_20 = (((((arr_1 [i_0]) ? (((75 + (arr_2 [i_0] [i_1])))) : -var_2)) + (((((max(var_15, 140737488355327))) ? ((max((arr_3 [i_0] [i_0]), 0))) : var_4)))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_2 - 3] [i_3] [3] [i_2 - 3] [i_0] = ((max((arr_6 [i_3] [i_4]), var_0)));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = ((15743 != ((((((65534 ? -1 : 15728))) || 15728)))));
                                arr_18 [i_1] [i_0] = ((((((arr_13 [i_2 - 3] [1] [i_2 - 3] [i_2 - 4] [i_2 - 4] [i_2] [i_2 - 4]) ^ var_1))) ? var_11 : 57344));
                            }
                            arr_19 [i_3] [i_0] [1] = (((((49793 ? 1 : (((var_10 < (arr_11 [7] [13] [i_2] [7]))))))) ? ((0 ? (arr_5 [i_0] [i_2] [i_3]) : ((4127757960367765268 << (((-28964 + 28997) - 32)))))) : ((((((arr_9 [i_0] [i_0] [1] [i_3]) ? (arr_14 [i_3] [i_2 + 4] [3] [i_1] [i_0] [i_0]) : (arr_5 [i_0] [i_2] [i_3]))) / var_16)))));
                            var_21 = (max(var_21, (((((((arr_9 [i_0] [i_1] [i_2] [i_0]) ? (arr_9 [i_0] [i_0] [i_2 + 4] [i_2 + 4]) : var_14))) && 65534)))));
                            var_22 = (arr_15 [i_0] [i_1] [i_2 - 3] [i_1]);
                        }
                    }
                }
                var_23 = (arr_3 [i_0] [i_0]);
                var_24 = ((+(((82 != ((((arr_3 [i_0] [i_0]) <= var_9))))))));
            }
        }
    }
    var_25 = ((!(((var_8 ? var_8 : ((-1 ? 1 : var_5)))))));
    #pragma endscop
}
