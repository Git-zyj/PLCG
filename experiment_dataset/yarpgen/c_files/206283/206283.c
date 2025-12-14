/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = (arr_15 [i_0] [i_0] [i_1] [i_1 - 1] [i_3 - 1]);
                                arr_18 [i_0] [1] [i_0] [i_3] [8] [i_3] [i_0] = 1317230678;
                                arr_19 [i_2] [i_0] [i_2 + 1] [i_0] = (((((9696 ? (arr_12 [i_0]) : (arr_0 [i_1 - 1])))) ? ((((((arr_13 [i_1] [i_0] [i_2] [i_4] [i_2] [11]) ? (arr_8 [i_0] [1] [1] [i_3]) : (arr_2 [8])))) ? ((var_9 ? (arr_12 [i_0]) : var_2)) : ((var_11 ? 22702 : (arr_2 [i_0]))))) : (arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_0])));
                            }
                        }
                    }
                    arr_20 [i_2] [i_0] [i_0] [1] = (arr_14 [i_0] [i_1] [i_2 + 1] [i_2 - 1] [i_0] [i_2 + 1] [i_2]);
                    arr_21 [i_2] [0] [0] [i_0] = 2977736621;
                    arr_22 [i_0] [i_0] [i_1 - 1] [i_0] = ((-9688 ? ((~(arr_14 [i_0] [i_2 - 1] [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0]))) : ((((((var_11 ? 27986 : 65535)) <= (arr_15 [i_1 - 1] [i_0] [i_2 + 1] [i_0] [i_1 - 1])))))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_27 [i_0] = (arr_6 [i_0]);
                    arr_28 [7] [i_0] = ((!((max(var_7, ((var_9 ? 4 : (arr_7 [i_0] [i_0]))))))));
                    arr_29 [i_0] [i_0] [i_5] [i_5] = var_6;
                }
                arr_30 [i_0] [i_1] = (arr_9 [i_0] [i_1] [i_1] [i_1 - 1]);
            }
        }
    }
    var_12 = var_7;
    var_13 = var_7;
    #pragma endscop
}
