/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = ((0 ? 3370 : 4294967288));
                arr_6 [i_0] [i_1] [i_0] = (((min((arr_3 [i_0]), (arr_4 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2 + 1] [i_2] [i_3] = max(((max((((arr_7 [i_0] [i_0] [11] [12]) ? (arr_0 [i_3]) : (arr_1 [i_1]))), var_6))), (((!787479857) ? (arr_11 [i_0] [i_2 + 2] [i_2 - 1] [i_1] [i_2 - 1] [i_2 + 2]) : (((var_8 ? 37017 : var_0))))));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_21 = (min(var_21, (((-((-787479855 ? (min(var_3, 787479868)) : (arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]))))))));
                                var_22 = (min(3370, (((((var_17 >> (787479857 - 787479846))) != (arr_7 [i_4] [i_3] [i_2] [i_0]))))));
                            }
                            for (int i_5 = 1; i_5 < 24;i_5 += 1)
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0] [i_0] = (((!var_11) ? ((-(arr_16 [7] [i_1] [i_1] [i_1] [i_1]))) : ((max(974574875, (4294967288 && -974574875))))));
                                var_23 = (((((3370 ? (arr_4 [i_2 + 2]) : (arr_4 [i_2 + 1])))) ? 3370 : ((((((arr_0 [i_0]) - 96))) ? -974574875 : (var_14 <= 3370)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 |= var_19;
    var_25 = ((~((((max(974574875, 109912554))) ? 1599706263 : 1))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 12;i_7 += 1)
        {
            {
                arr_24 [i_7] [i_7 - 1] = (((min((arr_9 [i_6] [i_6] [i_7 - 3] [8]), (arr_9 [i_6] [i_7 - 4] [i_7] [i_6]))) ? (((~((~(arr_16 [4] [4] [i_7] [i_7 - 3] [i_7 - 3])))))) : ((~(((arr_1 [i_6]) ? (arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7 - 4] [i_6]) : var_10))))));
                arr_25 [i_7] = (((((((var_5 <= var_7) && (arr_22 [i_6] [i_7 + 2] [i_7 + 1]))))) / 1377897003));
                arr_26 [i_7] [i_7] [i_7] = (~3709542320);
            }
        }
    }
    #pragma endscop
}
