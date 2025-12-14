/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = ((~((max(var_3, 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_0] [22] [i_1] [i_0] = (((min(1, (arr_0 [i_0] [i_1])))));
                    arr_8 [i_1] [i_1] [i_1] [5] = (min(((min((arr_0 [i_1] [i_2]), (arr_0 [i_0] [i_0])))), (arr_4 [i_0] [i_1] [i_0])));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_15 = ((((((arr_2 [i_1] [i_1]) || (arr_2 [i_1] [i_1]))))) < ((((((var_0 >= (arr_0 [i_1] [i_0]))))) & (var_12 | -791523794))));
                    var_16 = ((((max(var_9, 54719))) / (arr_10 [i_0] [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_17 = 54719;
                                var_18 = (((((!(arr_9 [i_1] [i_1]))))) != (var_2 % var_8));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_19 = ((((((((var_12 / (arr_12 [i_1] [21] [21] [i_1] [i_6] [i_7])))) ? 54719 : (arr_15 [i_1])))) ? var_11 : ((((((arr_3 [i_0] [i_7]) || (arr_10 [i_6] [i_6] [i_6] [i_1])))) * ((((arr_12 [i_1] [i_1] [i_0] [i_6] [i_7] [i_6]) || 0)))))));
                                arr_22 [i_0] [i_0] [i_3] [i_6] [i_1] = (((((4540211 ? var_4 : (65535 & 0)))) ? ((~(max(var_9, (arr_13 [i_0] [i_0] [i_3] [i_6]))))) : (arr_9 [i_1] [i_6])));
                            }
                        }
                    }
                    var_20 = (min(var_20, (((((((2 ? 11761860730930542182 : 54719))) ? (((arr_11 [i_0] [i_1] [i_3] [i_3]) ? (arr_17 [i_0] [i_1] [i_1] [i_0]) : 1)) : (arr_2 [i_0] [i_3])))))));
                }
                arr_23 [i_1] [i_1] [i_1] = ((((var_1 | (arr_5 [i_0] [i_0] [i_0]))) + 4540219));
                arr_24 [i_0] [i_1] = (!((((!65511) ^ 54719))));
                var_21 = (max(var_21, (arr_18 [2] [i_0] [i_0] [i_1] [14])));
                var_22 -= (((((((arr_20 [i_1] [i_1] [i_1] [i_1]) / 35837)) * (arr_6 [6]))) * var_10));
            }
        }
    }
    var_23 = (var_10 >= var_8);
    #pragma endscop
}
