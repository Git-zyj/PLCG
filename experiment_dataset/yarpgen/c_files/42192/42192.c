/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_11 = 15169559390073590316;
                    var_12 |= min((arr_6 [1] [i_2] [i_2]), (min((arr_1 [i_1]), (arr_6 [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] &= ((((((arr_11 [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_2] [i_0] [i_4]) : var_0))) ? (((((127 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0])))) ? (arr_13 [i_0]) : (arr_2 [i_0] [i_1]))) : (((arr_12 [i_0] [i_2] [i_4] [i_3] [i_0] [i_1] [i_0]) ? (arr_2 [i_1] [4]) : (arr_6 [i_1] [1] [i_2])))));
                                var_13 = (arr_8 [i_0] [i_0] [i_1] [i_3]);
                                arr_16 [i_0] [i_3] [i_2] [i_0] [i_3] |= ((min(((max((arr_9 [i_0] [5] [i_0] [i_3] [13]), (arr_8 [i_3] [i_3] [i_3] [i_3])))), (arr_11 [i_4] [i_0]))));
                                arr_17 [i_0] [i_0] [i_2] = (max((max(-120, (arr_13 [i_3]))), (arr_0 [15])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_5] [1] = ((-(arr_10 [i_0] [i_5])));
                    var_14 = 127;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_15 = (((arr_14 [i_0] [i_0] [i_1] [i_1] [i_6]) ? (arr_5 [i_1] [i_1]) : (((!((min((arr_5 [i_0] [1]), 4))))))));
                    var_16 = (min(var_16, (arr_5 [i_0] [i_0])));
                    var_17 = 1;
                    var_18 = (arr_12 [i_0] [16] [18] [i_1] [i_1] [1] [i_0]);
                }
                var_19 = (((((-(arr_19 [i_1])))) ? (((arr_19 [i_1]) ? (arr_19 [i_1]) : var_1)) : (((arr_19 [i_0]) ? (arr_19 [i_0]) : (arr_19 [i_0])))));
                arr_25 [i_0] [i_0] = (min((((min(18006719954530218990, (arr_5 [i_1] [i_0]))) ^ (((arr_11 [i_0] [i_0]) % var_3)))), (((((((arr_3 [i_0] [i_0] [i_0]) ? 1 : -67))) ? 1 : ((min(0, (arr_10 [1] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
