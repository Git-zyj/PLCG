/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_14 = (min(((var_2 ? (-2147483647 - 1) : (arr_1 [i_2 + 1]))), ((max(var_4, var_8)))));
                        var_15 = (((-26122 && 26122) ? 26143 : 134682006));
                        var_16 *= ((((((var_13 ? var_7 : (arr_2 [i_0]))) % (arr_3 [12] [i_1] [i_1]))) + (var_6 / -140)));

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            var_17 = ((((((((arr_1 [i_0]) >> (((arr_9 [i_0] [i_0] [i_0] [i_0] [14]) - 15272059177423178717)))) >> (((arr_11 [5] [i_4 + 1] [i_2] [i_3] [i_3 + 1]) - 3471663500986591424))))) ? ((((min(127, 126))) ? (arr_6 [i_0] [i_0] [i_0]) : ((var_9 ? (arr_4 [i_0] [i_0] [2]) : (arr_1 [i_2 - 4]))))) : (44 | -409760943)));
                            var_18 = ((var_2 ? (arr_9 [i_0] [3] [i_0] [i_0] [17]) : (((-(var_11 * var_13))))));
                        }
                        var_19 = (max((max((((144 ? -29201 : (arr_8 [i_0] [i_1] [i_2 - 3] [i_2 - 3])))), (arr_3 [i_0] [10] [i_0]))), (((92 ? -55 : 115)))));
                    }
                    var_20 = ((((((max((-127 - 1), var_1))) | (-2147483647 - 1)))) ? (-20951 == 36) : var_1);
                    arr_14 [i_0] [i_0] [i_0] [7] = (((!var_8) ? (((!(arr_4 [i_2 - 3] [0] [i_0])))) : ((~(arr_4 [i_0] [i_0] [i_2 - 2])))));
                    var_21 = ((((((arr_10 [i_0] [i_1] [i_2] [i_1] [i_2 - 4]) ? (arr_10 [i_2] [i_1] [i_2] [i_0] [i_2 - 4]) : var_2))) ? var_5 : (((~(arr_10 [i_1] [i_1] [i_2] [14] [i_2 + 2]))))));
                }
            }
        }
    }
    var_22 = var_12;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    var_23 = ((var_13 || ((((arr_9 [i_5] [i_6 + 2] [i_7 - 1] [i_7 - 2] [i_7 + 2]) ? (~var_10) : (arr_1 [18]))))));
                    var_24 = (arr_1 [i_5]);
                    arr_24 [13] [i_6] [13] [i_7] = (((((arr_18 [13] [i_6]) ^ var_11))) ? (((~var_7) - var_7)) : 140506967);
                    var_25 = ((-(max((arr_0 [i_7 + 1] [i_6 + 1]), (arr_8 [i_7] [i_6 - 2] [i_7 - 2] [i_6])))));
                }
            }
        }
    }
    var_26 = (var_10 ? (((13 ? var_5 : 220))) : 923677267877181148);
    var_27 = var_12;
    #pragma endscop
}
