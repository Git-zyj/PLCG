/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = min(87, (arr_10 [i_0] [i_1] [9] [i_0] [i_4] [i_0]));
                                arr_13 [i_0] [9] [i_2] [i_2] [i_2] = (((~(arr_12 [i_0 + 3] [i_3 + 1]))));
                                var_20 = var_15;
                                arr_14 [i_0] [4] [i_0] [8] [4] = ((-((min(32761, -9565)))));
                                arr_15 [i_0 + 3] [i_1] [i_1] [i_3] [i_1] = (arr_0 [i_0 - 2] [i_4]);
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] |= ((-6 || -1689933174) ? (((!(arr_5 [i_0 + 3])))) : (arr_5 [i_0 + 2]));
                    arr_17 [i_0] [i_0] [i_0] = ((((min((arr_10 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3]), (arr_2 [i_0] [i_0])))) ? (arr_3 [i_1]) : 9565));
                }
            }
        }
    }
    var_21 = ((-(min((~var_7), (var_2 - var_16)))));
    var_22 = (min(9564, (9564 | -19982)));
    #pragma endscop
}
