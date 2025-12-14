/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = arr_2 [i_0 + 1] [i_1] [i_2 - 1];
                    var_18 = ((((((arr_6 [i_2 - 1] [i_1] [i_0 - 2]) ? (arr_6 [i_2 - 1] [i_0] [i_0 - 2]) : (arr_6 [i_2 - 1] [15] [i_0 - 2])))) ? (((arr_5 [i_2 - 1] [i_0 + 3] [i_2]) | (arr_6 [i_2 - 1] [i_0 + 3] [i_0 + 2]))) : (1762672599 | -1762672596)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 += max((arr_8 [i_0]), 184);
                                arr_11 [i_2] = (max(var_1, (arr_1 [i_0 - 1])));
                                arr_12 [6] [i_1] [i_2 - 1] [i_2 - 1] [i_2] = 18655;
                            }
                        }
                    }
                    arr_13 [i_2] = ((1762672599 ? (min((0 <= -1762672599), (((arr_5 [i_0 - 2] [i_1] [i_2]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_0 [i_2]))))) : var_1));

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_20 -= min((arr_6 [i_1] [i_2 - 1] [i_6]), ((((min(1762672599, var_3)) | ((((arr_6 [i_2] [1] [i_0]) ? var_9 : var_9)))))));
                            arr_19 [2] [i_0] [12] [i_2] [i_5] [12] [i_6] = (min((((var_12 ? (arr_9 [0] [i_1] [i_1] [i_5 + 2] [i_6] [i_1] [i_6]) : 3886779042))), ((((arr_14 [i_2] [i_1] [i_2] [i_5] [i_1]) ? var_7 : ((var_6 ? (arr_3 [i_1]) : (arr_3 [i_6]))))))));
                            var_21 *= 0;
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_22 [i_2] [i_2] = ((((((arr_9 [i_0] [i_1] [i_2 + 2] [i_1] [i_7 + 1] [i_2 + 1] [i_7 + 1]) ? (arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_2 - 1] [i_7 + 1] [i_2 + 1] [i_7 - 1]) : (arr_9 [i_0] [7] [i_2 + 1] [i_5 + 2] [i_7 - 1] [i_2 + 2] [i_7 + 1])))) ? (((-(arr_18 [i_7] [i_5] [i_5] [i_5] [i_2 + 2] [i_1] [i_0])))) : ((min(var_6, (arr_10 [i_7] [i_5] [1] [i_1]))))));
                            var_22 = (arr_5 [i_0 + 1] [i_1] [i_2]);
                            var_23 = (((!(!var_15))));
                        }
                        arr_23 [i_0 + 1] [i_0 + 1] [i_2] [i_5 - 2] = var_7;
                    }
                }
            }
        }
    }
    var_24 = (min(var_2, (-9223372036854775807 >= var_2)));
    var_25 = (((var_16 + 2147483647) >> (((min((max(590164460, var_2)), var_2)) - 174))));
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {
                arr_31 [i_9] = ((((((var_16 * (arr_17 [i_8] [i_8] [0] [i_8 - 1] [i_9] [i_9]))))) ? ((var_12 * (arr_7 [i_8 + 1] [i_9] [i_9] [i_8] [i_8 + 1]))) : (((((max(var_4, 0)) <= ((min(var_1, 0)))))))));
                var_26 *= ((-6753621960722052072 | ((((arr_2 [i_8 + 1] [i_8 - 1] [i_8 + 1]) ? (arr_2 [i_8] [i_8 - 1] [i_8 + 1]) : (arr_2 [i_8] [i_8 - 1] [i_8 + 1]))))));
                /* LoopNest 3 */
                for (int i_10 = 4; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_39 [i_9] [i_9] [i_9] [i_11] [i_12] = (arr_21 [i_9] [i_11 - 1] [i_11 + 1] [i_9] [17] [17] [i_9]);
                                var_27 = (((((-(arr_35 [i_12] [i_11 + 1] [i_9])))) * ((~(max(721143312, var_11))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
