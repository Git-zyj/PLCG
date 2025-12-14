/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_6;
                arr_6 [i_1] [i_0] = ((((((((arr_4 [i_0] [13] [7]) / (arr_3 [i_0] [i_0] [i_0])))) || var_1)) ? ((((var_16 && (arr_3 [i_0] [i_1] [i_1]))))) : (((((18 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))) * (min(10, (-127 - 1)))))));
                var_19 = var_13;
                var_20 = (min(1436559473, 680974504));
                arr_7 [i_0] [i_1] [i_1] = 1210583527;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_21 = ((((125829120 * (arr_3 [i_2] [i_3] [i_2]))) % ((var_9 - (arr_13 [i_2] [11] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_20 [i_4] [i_4] [i_4] = ((((~-39) & (max((arr_13 [i_2] [i_3] [i_2]), (arr_14 [i_6] [1] [i_4] [i_2]))))));
                                arr_21 [i_6] [i_6] [6] [i_4] [i_6] = var_2;
                                var_22 = (max(var_22, (4294967295 || 11236235090099022835)));
                                var_23 = (max(((((((arr_11 [10] [i_3]) ? 255 : -3917594037427153813))) ? (!var_12) : (((arr_11 [3] [i_6]) + var_1)))), (((3677309122 >= (arr_8 [i_4 + 4] [i_3 + 1]))))));
                            }
                        }
                    }
                    arr_22 [i_4] [1] = (arr_1 [i_2]);
                    arr_23 [i_2] [i_2] [i_4] = min(var_3, (18 != 3));
                    var_24 = (((((((((arr_8 [i_2] [i_2]) / (arr_2 [i_2] [i_4 + 3]))) != ((var_12 ? (arr_19 [i_2] [i_3] [i_3 + 1] [i_4 + 2]) : (arr_11 [i_2] [i_3]))))))) | (((((arr_14 [i_4] [i_3] [4] [i_2]) >= (arr_9 [i_2] [i_2]))) ? var_15 : ((((var_18 + 2147483647) << (((arr_4 [15] [i_3] [i_3 - 1]) + 1338517916)))))))));
                }
            }
        }
    }
    #pragma endscop
}
