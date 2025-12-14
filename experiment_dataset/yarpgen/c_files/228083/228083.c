/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_3] = (min(((+(((arr_0 [i_4]) & (arr_2 [i_3] [i_2]))))), (((-(127 >= 0))))));
                                arr_13 [i_0] [19] [i_1] [i_3] [i_4] = var_5;
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (max((max(((var_11 ? (arr_8 [i_0 + 1] [i_1] [i_1] [14] [i_1]) : 1)), ((max(127, (arr_2 [i_0] [i_0])))))), (((((!(arr_4 [11] [i_0]))))))));
                arr_15 [i_1] [i_1] = (-127 - 1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 19;i_9 += 1)
                            {
                                arr_26 [i_7] [i_6] [i_7] [i_6] [i_5] = (arr_20 [i_6] [i_6]);
                                arr_27 [i_5] [9] [i_7] [i_6] = (((((-(arr_9 [i_6] [i_6] [i_6 + 1] [i_6 - 3])))) ? ((3195249100 ? (min((arr_2 [i_8] [i_9]), (arr_7 [19] [i_6] [i_7]))) : (arr_3 [i_5] [4] [i_6]))) : ((~((((arr_16 [i_5]) > 222)))))));
                            }
                            arr_28 [i_6] [i_7] [i_7] [i_6 - 1] [i_6] = ((-(((((arr_3 [i_6] [7] [i_6]) >= (arr_9 [i_5] [12] [i_7] [12]))) ? (arr_0 [2]) : (((var_14 ^ (arr_18 [i_5] [2]))))))));
                            arr_29 [i_5] [i_5] [i_5] [i_6] [i_7] [i_8] = (((655060626 * 3) ? (arr_20 [i_5] [i_8]) : (arr_17 [i_6] [i_8])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_35 [1] [i_6] [i_10] [i_11] |= (arr_8 [i_5] [i_11] [i_6 - 1] [i_10 + 2] [i_10]);
                            arr_36 [i_11] [i_11] [i_6] [i_6] [i_5] [i_5] = (max((~1), 655060612));
                            arr_37 [i_10] [i_6] [i_6] [i_5] = ((((!(arr_5 [i_6] [i_6]))) ? 3639906647 : (((var_10 ? -1674505345 : (arr_19 [i_5] [i_10]))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = 0;
    #pragma endscop
}
