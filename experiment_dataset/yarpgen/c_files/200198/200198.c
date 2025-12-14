/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((((min((((arr_0 [i_0]) ^ -703078923)), (!12288)))) ? 1 : (max(703078923, (~127)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = ((((((~var_9) / (((min(-4, var_2))))))) ? ((((arr_0 [i_0 + 1]) || var_1))) : ((min((arr_10 [i_0] [i_0 + 1] [i_2] [i_2] [i_2 + 2]), var_6)))));
                                var_15 = (max(var_15, ((max(((min((-125 && var_0), (arr_11 [i_4] [1] [i_0])))), (min(-703078933, ((min(65161, var_7))))))))));
                                var_16 = (max(var_16, (((((min((arr_3 [i_1] [i_1]), 29327))) ? ((110 ? 703078935 : 11085106026104298715)) : (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                var_17 = var_12;
                                var_18 = ((var_6 ? (min(((~(arr_4 [i_0] [i_0]))), (max(23530, -1)))) : ((min(4463, (arr_11 [i_0 + 1] [i_2] [8]))))));
                            }
                        }
                    }
                }
                var_19 *= ((((((arr_8 [i_0 - 2] [i_1] [i_1] [i_1] [i_1]) ? var_6 : (arr_8 [i_1] [i_1] [i_0] [2] [5])))) ? (arr_8 [i_0 - 2] [2] [i_0] [i_0] [i_1]) : (((arr_8 [i_0] [i_0] [i_1] [i_1] [6]) ? var_12 : (arr_8 [i_1] [i_0] [i_0] [i_0 - 2] [i_0])))));
                arr_12 [i_1] [i_1] [i_0 + 1] = ((((!(arr_2 [i_0] [i_1])))) * (min((arr_1 [i_0 - 1] [i_0 - 1]), -1)));
                var_20 = (max(25, (((39 / 65526) ? 1 : var_2))));
            }
        }
    }
    var_21 = (max((min(var_4, ((25 ? var_10 : 315487930)))), var_8));
    #pragma endscop
}
