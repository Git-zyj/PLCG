/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_0;
    var_18 &= ((1 ? var_12 : -1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = ((((min((arr_3 [i_0] [i_2]), ((min((arr_1 [i_1]), -1032916220)))))) ? (arr_5 [i_0] [16] [i_2]) : (((((1 ? 1 : 60271))) ? 1 : (8 % 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = ((((max((min(1, (arr_0 [i_0]))), (arr_7 [i_1] [i_1])))) ? (min((arr_12 [i_1] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3] [i_4]), 3933184128)) : (((min(10, (max(1, (arr_4 [i_2])))))))));
                                arr_13 [i_0] [i_3] [i_2] [i_2] [i_2] [i_3] [5] = ((1 ? 252 : 552290840754623697));
                                var_20 = 3411940310911814622;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_9 >> (((!var_7) ? (239 | 3943785565) : (((1 ? 1 : 23920)))))));
    #pragma endscop
}
