/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_1] [i_3] [i_3] [9] = ((9223372036854775807 + (-9223372036854775807 - 1)));
                        var_16 &= (((-9223372036854775807 - 1) ? -3404173212194369046 : -7193420245009552368));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_17 = (arr_13 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5]);
                                var_18 = (max(var_18, (((-((((arr_12 [1] [8] [6] [18] [1]) && (184 > var_8)))))))));
                                var_19 = ((9223372036854775807 & ((-(arr_3 [i_5] [i_1] [i_0])))));
                            }
                        }
                    }
                    var_20 = (max((((arr_2 [i_1 + 1]) & (arr_2 [i_1 + 1]))), (arr_2 [i_1 + 3])));
                }
                var_21 = (((arr_12 [i_1] [19] [1] [i_0] [i_1]) & ((((arr_5 [5] [13] [i_1]) > (1 && 1150229232))))));
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_22 = (((!4294967295) % 240));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((max(127, var_14))) ? (min(var_3, (arr_1 [i_1 + 2]))) : ((((arr_1 [i_1 + 2]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 2]))))));
                            arr_22 [1] [1] [i_6] [i_1] = (min((arr_7 [2] [1] [i_0] [i_0]), ((((arr_9 [i_0] [i_0] [i_1 + 2] [i_1 + 2] [9]) - (arr_10 [i_7] [5] [9] [i_7 - 3]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
