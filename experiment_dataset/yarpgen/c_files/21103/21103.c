/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (min(var_2, (((var_1 - var_19) ? 3 : 26))))));
    var_21 = var_14;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [0] [i_0 + 2] |= 4294967257;
        var_22 *= (-((((1244951943 ? 38 : 0)) ^ (arr_0 [i_0 + 2] [i_0 + 2]))));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((min(var_13, (arr_0 [i_1 - 4] [i_1 - 4])))) ? var_1 : 1221430868));
        arr_7 [i_1] [i_1] = arr_4 [i_1];
        arr_8 [i_1] [i_1] = (arr_5 [i_1]);
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3 + 1] [i_2] = (((max(38, (!var_5)))) ? (((arr_11 [i_3 + 1] [i_2 + 1]) - (arr_0 [i_3 - 1] [i_2 + 3]))) : (min((((arr_13 [i_4] [i_2] [i_2 + 2]) ? 1038830336 : 3924196635)), (((arr_14 [i_2] [i_3 - 1] [i_3 - 1] [8]) ? var_0 : (arr_0 [i_2] [i_2]))))));
                    arr_18 [i_2] [i_2] [i_4] = arr_15 [i_2] [i_3 + 1];
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((~(max((arr_14 [2] [10] [i_6 - 1] [2]), (arr_14 [16] [i_6] [i_6 - 2] [16])))))));
                                arr_25 [i_2] [11] [8] [4] [4] [i_2] = ((1244951934 & 24) ? (((arr_20 [i_2] [i_6 + 1] [i_6 - 1] [i_2]) ? (arr_20 [i_2] [i_3 - 1] [7] [i_6]) : (arr_20 [i_2] [4] [i_4] [i_2]))) : (arr_20 [i_2] [7] [i_4] [i_4]));
                            }
                        }
                    }
                    var_24 *= min(((+((67108863 ? (arr_12 [i_3]) : (arr_9 [6] [6]))))), (((!4294967295) ? (arr_21 [i_2 + 1] [i_2 + 2] [i_2 + 2] [6]) : (var_3 >> 29))));
                    arr_26 [i_2] = 358082049;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        var_25 -= min(var_3, var_6);
                        var_26 = (max(var_26, ((((max((arr_21 [13] [13] [i_8 + 1] [i_9]), (max(0, (arr_30 [13] [i_8 - 1])))))) ? (((((370770655 ? 4294967286 : (arr_14 [i_9] [i_8] [i_7 + 1] [i_9])))) ? 3531685935 : (max((arr_16 [i_2] [i_7 - 1] [i_2] [i_9]), (arr_9 [i_9] [10]))))) : (min(2529129613, 4294967295))))));
                    }
                }
            }
        }
        arr_34 [i_2] = 298307905;
    }
    #pragma endscop
}
