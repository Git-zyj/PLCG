/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_15 = (((!-19) ? 18 : (arr_6 [i_0] [i_0] [i_0] [1])));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_16 = 18;
                            arr_13 [13] [i_0] [i_2] [i_0] [i_0] = (var_4 ? ((~((18 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : var_11)))) : (((((var_3 ? 2977404715064582998 : (arr_6 [i_0] [i_4] [1] [0])))) ? (~10694) : 11610)));
                            var_17 = (((((+(min((arr_12 [1] [0] [i_2] [i_2 - 1]), (arr_9 [i_3])))))) ? (arr_5 [i_2] [i_2 - 2] [i_0] [i_2 - 4]) : ((max(65535, (!var_7))))));
                            arr_14 [i_0] = ((-(min(((3919842447 ? 16533862485664197345 : -12)), ((min(60453, (arr_7 [i_0] [i_0] [i_0] [i_3]))))))));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_18 = ((!((((!var_11) ? ((max(var_4, 2372602864))) : ((193 ? (arr_5 [i_0] [i_1] [i_0] [i_0]) : 16533862485664197345)))))));
                            arr_17 [i_0] [i_0] [13] [i_3] [13] = ((var_0 ? (min((arr_11 [i_5] [i_2] [i_0] [i_5] [i_2] [9] [i_0]), (((arr_16 [i_3] [i_2] [i_2 - 1] [i_0]) << var_1)))) : (((!((min(var_8, (arr_3 [i_0])))))))));
                            arr_18 [i_0] [i_0] [3] [i_0] = var_1;
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_21 [i_0] [3] [15] [i_3] [i_6] = 9;
                            arr_22 [i_0] [15] [i_6] [10] [i_6] = 4;
                        }
                        var_19 = (~1922364438);
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_20 = (max(var_20, (((min((arr_15 [i_8 + 1] [i_8 - 2] [i_8 - 2] [1] [i_8 - 2]), (((arr_25 [i_7] [i_7]) ? 11457880394873774268 : -28))))))));
                            var_21 = (arr_20 [i_8 - 2] [i_0] [i_2 + 1] [i_0] [i_0]);
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_3 [i_0])));
                            arr_29 [i_0] [i_2] [i_0] [i_8] = ((!((!((min(-22220, (arr_1 [i_8]))))))));
                        }
                        var_22 = var_14;
                        arr_30 [i_0] = -18;
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_9] [i_1] |= ((~(((((~(arr_0 [i_2])))) ? ((var_3 << (arr_19 [i_0]))) : var_12))));
                        var_23 -= ((var_6 ? ((49 ? -32 : 5)) : var_13));
                        var_24 = (max(var_24, (((((((!1922364439) < (min(1922364440, var_6))))) == (((((-1546516302 ? (arr_7 [i_0] [1] [i_9] [i_0]) : var_2))) ? 1023 : var_5)))))));
                    }
                    var_25 -= var_9;
                }
            }
        }
    }
    var_26 = ((var_10 ? (((!(((var_8 ? var_10 : 204)))))) : (var_14 && var_2)));
    #pragma endscop
}
