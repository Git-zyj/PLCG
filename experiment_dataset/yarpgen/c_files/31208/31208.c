/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [8] [8] &= ((((((arr_0 [i_0 + 1]) > (arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 1])))) + ((max((arr_5 [i_0 + 1] [i_0 + 1] [i_1 - 1]), (max((arr_7 [i_2] [i_1] [i_0]), (arr_2 [i_0] [0] [i_2]))))))));
                    var_15 = ((var_7 ? ((+((((arr_3 [1] [i_1 - 2]) > var_2))))) : 501374217));
                    arr_9 [i_0] [i_1] [i_0] = var_13;
                    arr_10 [i_0] [i_1] [i_0] = ((var_4 ? (arr_7 [i_0] [i_0] [i_0]) : ((max(var_6, var_7)))));
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_16 = arr_0 [i_0 + 1];
                    var_17 = var_6;
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_18 = ((((max((arr_3 [i_1] [i_1]), (arr_3 [i_0 + 1] [i_0])))) && (((~(arr_14 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_19 = (arr_7 [i_1 + 1] [i_0 + 1] [i_4]);
                                arr_22 [1] [i_5] [i_0] [i_1] [i_0] = ((((max((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 + 1])))) ? (arr_1 [i_0 + 1]) : (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))));
                                var_20 = ((arr_19 [i_1 - 1] [i_0 + 1] [i_0 + 1]) == ((~(arr_18 [i_0 + 1] [i_0 + 1]))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_21 = var_12;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_22 = (-(arr_29 [i_9 - 1] [i_9 - 3] [i_9 + 2] [i_9 + 2] [i_9 - 2] [i_9 - 2]));
                                var_23 = (((-(arr_28 [i_1 - 2] [1] [1] [1] [i_1] [i_1 - 1]))) > (arr_24 [1] [1] [i_0 + 1] [i_0 + 1]));
                            }
                        }
                    }
                }
                var_24 &= ((var_4 >= (arr_28 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0])));
            }
        }
    }
    var_25 = var_7;
    var_26 -= var_7;
    #pragma endscop
}
