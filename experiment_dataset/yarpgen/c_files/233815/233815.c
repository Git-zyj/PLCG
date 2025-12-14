/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= 118;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_2] [1] [i_0] = (arr_2 [3]);
                            arr_10 [i_0] [i_2] [i_2] = (((((-(arr_6 [i_1] [i_1] [i_3 + 1])))) ? ((-((var_6 ? 109 : 127)))) : ((var_3 * (arr_0 [i_3] [i_3 + 1])))));
                            var_12 = ((!((((((-123 + (arr_5 [i_2] [i_2] [i_2] [i_3 - 1])))) ? ((137438953471 ? (arr_6 [i_0] [i_2] [i_3]) : 2983405933249510033)) : 7862350024105660562)))));
                        }
                    }
                }
                var_13 = (min((arr_5 [i_1] [20] [i_1] [20]), (!2983405933249510031)));
                arr_11 [i_0] [i_1] = var_3;

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_14 -= (max(((-118 && (arr_5 [i_0] [i_1] [i_4 - 1] [i_0]))), ((18446744073709551615 >= (arr_0 [i_0] [i_0])))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_15 &= var_8;
                        var_16 = 118;
                        var_17 = (min(var_17, ((max(((((arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]) >= (2983405933249510033 <= var_3)))), (~7736444521380437392))))));
                    }
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_19 [i_0] = (((!((((arr_14 [i_0] [i_1] [i_6]) ? (arr_4 [i_0] [i_0] [i_1] [i_0]) : (arr_4 [i_0] [12] [i_6] [i_0])))))));
                    var_18 = (min(var_18, (((9 ? (((arr_17 [i_0]) ? (arr_17 [i_0]) : -2330794011194860528)) : var_0)))));
                }
                var_19 = (1 <= 244);
            }
        }
    }
    var_20 = (((((var_3 ? 1 : (-2 && 19641)))) ? (var_9 || -6281634786696856896) : (min((1 * 1), var_9))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            {
                var_21 = (min(var_21, (arr_6 [i_7] [i_8 - 1] [i_8])));
                var_22 = (arr_8 [i_8 + 2] [i_8 + 2]);
                var_23 = (max(23977, ((85 ? var_7 : (arr_13 [i_7] [i_7] [i_7] [i_7])))));
            }
        }
    }
    #pragma endscop
}
