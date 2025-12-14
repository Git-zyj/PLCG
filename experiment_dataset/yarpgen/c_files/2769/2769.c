/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (max(((var_0 ? var_10 : ((var_7 ? 1 : var_0)))), (((var_9 ? var_10 : var_8)))));
    var_13 = ((((var_10 || (var_7 && var_11))) ? (((((var_2 ? var_2 : 92))) / var_1)) : 92));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] = (((((max(var_8, (arr_0 [i_0]))))) ? (min((max((arr_1 [i_1]), (arr_0 [i_1]))), (arr_6 [10] [i_1] [10] [i_0]))) : -1255369054066658465));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_14 += (arr_8 [i_0] [i_0] [1] [i_0]);
                        var_15 = (arr_0 [18]);
                        var_16 |= (arr_4 [i_0] [i_1] [i_2]);
                        var_17 = (((arr_5 [i_3] [i_1] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : ((min((arr_5 [i_0] [i_0] [2]), (arr_5 [i_1] [i_2] [i_3]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_4] = ((arr_6 [i_0] [i_4] [8] [i_4]) ? var_5 : 2187455837005498163);
                        var_18 = -4917253427536709899;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_5] = ((~((64 ^ (arr_4 [i_5] [i_5] [i_5])))));
                            var_19 = (min(var_19, var_5));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_0] = (10498697672958281979 ? 2737714537106487603 : -1255369054066658465);
                            var_20 = (24 % var_9);
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_21 ^= ((var_2 ? (((arr_5 [i_0] [i_2] [5]) ? (arr_5 [i_2] [i_5] [i_8]) : (arr_5 [i_5] [15] [i_0]))) : ((var_5 << (((((arr_27 [i_0] [i_1] [i_0] [i_1]) + 711318183015136225)) - 10))))));
                            var_22 = (((min(0, -2747899932355090734))));
                            arr_29 [i_0] [i_1] [i_1] [i_1] [i_1] [i_8] = (arr_14 [i_0] [i_1] [i_2] [i_2] [11] [i_0]);
                            arr_30 [i_0] [i_1] [i_1] [i_1] [i_1] = (((~1255369054066658451) & ((((((var_2 ? -1709056121 : (arr_21 [i_0] [i_0] [i_0] [10] [i_0] [13] [18])))) ? (arr_14 [i_8] [11] [1] [i_2] [i_0] [i_0]) : (((1 == (arr_27 [i_0] [i_0] [i_5] [i_0])))))))));
                        }
                        var_23 ^= ((((((var_5 ? var_8 : 4294967295))) + (((arr_9 [17] [i_1] [17]) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_2] [16] [i_0]))))));
                    }
                }
            }
        }
    }
    var_24 = ((var_5 ? ((var_6 & (((43649 ? 1925032036080568174 : -637637894))))) : ((var_2 ^ (16259288236704053445 | var_5)))));
    var_25 = var_5;
    #pragma endscop
}
