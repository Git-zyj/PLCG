/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 -= (arr_8 [i_4]);
                                arr_12 [i_0] [i_1] [i_1] = (((arr_10 [i_3] [i_2 + 2] [i_2 + 2]) ? (arr_3 [i_1] [i_2 + 3] [i_1]) : ((((!(arr_9 [i_1] [i_2 - 1] [i_1])))))));
                                arr_13 [i_1] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_5 [i_1] [1] [i_0] [i_1]);
                            }
                        }
                    }
                    arr_14 [i_2 + 2] [i_1] [i_0] = ((-((((arr_2 [i_1] [i_1]) ? var_4 : (arr_5 [i_0] [i_0] [i_0] [i_1]))))));
                }
            }
        }
        var_20 = 245;
        var_21 = ((!(arr_8 [i_0])));
    }
    var_22 = var_1;
    var_23 = ((!((max(var_6, -306046703)))));
    var_24 = 777922285;
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_25 = ((((max(((-(arr_8 [14]))), (((arr_3 [16] [i_6] [i_7]) ? (arr_8 [1]) : (arr_22 [i_5] [i_6] [i_7])))))) ? (arr_20 [i_5]) : ((-(arr_18 [i_5 + 2] [i_5 - 1])))));
                    var_26 = 127;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_27 = (arr_15 [i_6]);
                                arr_29 [i_5] [i_6] [i_7] [i_6] [i_9] [i_9] [i_9] = ((((((((var_14 ? var_10 : (arr_21 [i_5])))) ? ((12 | (arr_3 [i_9] [i_9] [i_7]))) : ((((arr_24 [i_5]) << (((arr_24 [i_5]) - 2033381330)))))))) ? (~var_11) : (arr_22 [i_5 - 2] [i_6] [6])));
                                var_28 = ((((((arr_21 [i_5 - 2]) ? var_15 : (arr_21 [i_5 - 1])))) ^ (245 || var_5)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
