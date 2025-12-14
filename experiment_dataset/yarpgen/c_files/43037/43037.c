/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_5;
    var_11 = (max(1504203702, 7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_9 [i_2] [i_2] [i_2] [i_2] = ((((max(8315088164342114760, 32756))) ? ((((max(-26402, var_3))) ? var_0 : (((arr_4 [i_0]) << (18774 - 18759))))) : (((((3 ? 1042348422 : -9))) ? var_7 : var_1))));
                        arr_10 [i_0] [10] [i_0] [i_0] [i_0] [10] = 10435;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_1 + 2] [7] [i_1 + 2] = (arr_0 [i_1]);
                            arr_15 [i_0] = (((arr_5 [i_3 - 1] [i_1 - 2] [i_2] [i_2]) & (arr_5 [i_3 + 1] [i_1 + 2] [i_2] [i_3])));
                            arr_16 [i_4] [15] [i_2] [i_0] [i_0] &= (((-10426 - 29085) ? (arr_0 [3]) : (((arr_4 [i_4]) ? 1092743085 : var_4))));
                        }
                        var_12 -= 10455;

                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_13 ^= (arr_4 [i_1]);
                            arr_19 [i_0] [i_2] [i_0] [i_0] = (((max(-10445, 8050))) ^ (((((!(arr_7 [i_0] [i_1 - 2] [i_2] [i_3] [i_5])))) >> ((((32765 ? 10448 : 1)) - 10422)))));
                            arr_20 [i_5] [i_3] [i_2] [i_1] [i_0] = ((-(arr_12 [i_3 - 1])));
                        }
                    }
                    arr_21 [i_0] [i_0] [i_0] [i_0] = (max((arr_0 [i_2]), ((2061022856 ? (arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 2] [2]) : -10422))));
                    var_14 ^= -10432;
                }
            }
        }
    }
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_34 [i_8] = var_5;
                                var_16 = (min(var_16, (arr_11 [i_6] [i_6] [1] [i_6] [1])));
                                var_17 = (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            }
                        }
                    }
                    arr_35 [i_8] = (((arr_27 [i_6] [i_7] [i_6]) ? (((arr_17 [i_6] [i_7] [i_7] [i_8] [i_8] [1]) ? var_3 : (((var_0 + 2147483647) >> (2061022858 - 2061022854))))) : ((1 ? 2061022852 : 116))));
                    arr_36 [2] [9] [i_8] [i_8] = (min(((-(arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))), (max((max((arr_32 [i_6] [i_6] [i_7] [i_7] [1] [i_8] [i_8]), -10466)), ((max(var_4, -10437)))))));
                    arr_37 [i_8] = ((-(((arr_29 [i_6] [i_6] [i_8]) ? (arr_1 [i_6]) : ((max(126, 28)))))));
                }
            }
        }
    }
    #pragma endscop
}
