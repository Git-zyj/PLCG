/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 += (min((min(0, (arr_4 [i_0 + 1] [i_3 - 1] [i_3 - 2]))), (arr_7 [i_1] [i_1] [i_3])));
                            arr_11 [i_0] [i_1] [i_0] [i_1] = (((arr_2 [i_3 - 3] [i_0 - 2]) != (((((arr_2 [i_0] [12]) && 0)) ? (30466 > 18446744073709551615) : (min(268362366, 0))))));
                            arr_12 [i_0] = var_15;
                            var_18 = (max(var_18, var_1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_19 [1] [i_0] = ((((((((arr_4 [12] [i_1] [12]) ? (arr_16 [3] [i_1] [i_4] [3]) : (arr_16 [i_5] [i_4] [i_1] [i_0 - 2])))) ? ((-12 ? (arr_3 [0] [0]) : var_5)) : ((min((arr_1 [i_0]), (arr_18 [i_0] [i_1] [1] [i_5] [i_0]))))))) ? (((max((155 && 4026604929), (((arr_17 [i_0] [i_0] [10] [i_5]) || (arr_8 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2] [i_0]))))))) : (!var_9));
                            arr_20 [i_0] [i_0] [8] [i_0] [i_5] = (((min((((70368744046592 || (arr_3 [i_4] [i_0])))), 153))) ? ((((((var_10 || (arr_18 [i_0] [i_0] [i_1] [9] [i_0]))))) & (max(2, -125)))) : ((((var_7 <= (arr_7 [i_4] [i_1] [i_0 + 1]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_19 = (((((arr_27 [i_6] [i_8 + 1] [i_0 - 1]) + (((var_1 ? (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_21 [14])))))) >= ((((!(~41)))))));
                                arr_29 [i_0] [i_7] = min((~4026604914), (max((20 || 8883), ((17591112302592 & (arr_24 [i_6] [i_6] [i_6] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 |= -1;
    #pragma endscop
}
