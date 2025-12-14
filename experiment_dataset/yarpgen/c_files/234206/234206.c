/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_3;
    var_11 = (((!16285774013351094549) << (max(var_0, ((var_3 ? var_1 : var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = ((max((~var_2), (arr_3 [i_0]))));
                    var_13 = (min((arr_6 [i_2 - 2] [i_2 + 2]), (arr_5 [i_0] [i_0])));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_11 [i_0] [i_1] [i_2] [1] [i_3] = (~var_7);
                            var_14 = ((min(((~(arr_1 [i_3]))), (16285774013351094560 & 7091273763300108064))));
                            arr_12 [i_4] [i_3] [i_2] = ((~(min(((var_1 ? (arr_5 [i_0] [i_1]) : (arr_5 [i_3] [i_0]))), var_1))));
                            var_15 = (min(var_15, ((((-var_0 && var_7) ? ((1 ? -349600520 : 4294967295)) : ((-(max(var_5, var_4)))))))));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_15 [i_5] [i_5] [i_0] |= ((-(arr_10 [i_0] [i_1] [i_2 + 2])));
                            var_16 = var_6;
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_17 = (~-10174);
                            arr_19 [i_0] [i_1] [i_6 + 2] [i_3] [i_6] = ((!(((69 ? 2160970060358457056 : 18296194993640847316)))));
                        }
                        arr_20 [i_0] [i_0] [i_3] [6] [i_0] = ((((((arr_7 [i_0] [i_3] [i_2] [i_3 + 3] [i_0] [i_2]) / (arr_14 [i_0] [i_3] [i_3])))) | var_3));
                    }
                    arr_21 [i_0] [9] [i_2] [i_2] = (max((arr_5 [i_2 - 2] [i_2 + 1]), (arr_5 [i_2 - 2] [i_2 - 1])));
                }
            }
        }
    }
    var_18 &= var_8;
    var_19 -= var_3;
    #pragma endscop
}
