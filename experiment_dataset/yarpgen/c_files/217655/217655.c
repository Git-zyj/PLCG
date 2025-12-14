/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~31);
    var_20 = (max(var_10, ((~(~var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 += ((656920446 ? (max((arr_5 [i_4 - 1]), (arr_5 [i_4 + 2]))) : (arr_13 [i_3] [0] [i_4 + 1] [i_4 - 1] [i_4] [i_4])));
                                arr_15 [i_2] [i_2] [i_2] [i_2] = ((var_10 ? 75 : (max(21451, (arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 1] [8] [i_4 + 2])))));
                                var_22 *= -90;
                            }
                        }
                    }
                    arr_16 [i_2] [i_0] [i_2] = ((+((var_16 ? ((83 ? (arr_7 [i_0] [i_0] [17]) : (arr_12 [12] [12] [i_1] [12] [i_1]))) : (arr_9 [i_2] [i_0] [i_0] [i_0])))));
                    arr_17 [i_2] [i_1] [i_2] [i_2] = (((-64 ? ((max(-40, (arr_2 [i_0])))) : ((max(1, -32))))));
                    arr_18 [i_1] [i_2] [i_1] = -38;
                    var_23 = ((-22546 > (max(-79, ((1 ? var_5 : 10719))))));
                }
            }
        }
    }
    var_24 = var_18;
    #pragma endscop
}
