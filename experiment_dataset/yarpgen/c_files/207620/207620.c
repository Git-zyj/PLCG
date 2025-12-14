/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (arr_0 [9]);
        var_18 &= 4;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 += var_0;
        arr_5 [2] = (((-(arr_4 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [14] [9] [i_2] [5] [1] = (((min(var_9, ((26 ? (arr_14 [0] [8] [0] [4]) : 4))))) ? (688911504 | var_10) : -688911515);
                                var_20 = 468352931;
                                arr_17 [i_2] [1] [3] [11] [1] = ((((min((((arr_15 [3] [12] [2] [1]) * -45)), ((~(arr_8 [4] [1] [i_2])))))) || ((((arr_8 [8] [13] [i_2]) ? (arr_6 [i_4]) : (arr_8 [14] [i_3] [i_2]))))));
                                var_21 += (max(((((arr_13 [9] [10] [3] [i_4] [13]) ? var_6 : (arr_13 [i_1] [i_1] [i_1] [i_1] [6])))), (min(688911504, ((var_10 ? (arr_10 [6] [14] [10] [i_4]) : (arr_11 [2] [14] [2] [2] [2] [i_3])))))));
                            }
                        }
                    }
                    arr_18 [1] [i_2] [6] = ((+(min(var_9, (min((arr_7 [9]), 3920278921))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                var_22 = ((((44 ? (min((arr_22 [19] [6]), var_9)) : (min(-32752, (arr_22 [4] [9])))))) ? (((arr_22 [i_6] [i_6]) ? var_11 : (arr_20 [i_7]))) : ((min(-45, (var_14 || var_2)))));
                var_23 = ((-((-(arr_19 [11])))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_24 = ((var_16 ? (((((min(45, -45)))) & (((arr_25 [5] [2] [6]) << (688911512 - 688911498))))) : (arr_26 [i_6] [1])));
                            var_25 = (((((arr_19 [17]) ? var_1 : (((arr_25 [16] [13] [4]) ? -70 : 1)))) <= (max((arr_21 [7]), (arr_23 [19] [17])))));
                        }
                    }
                }
                var_26 += min((((arr_21 [i_6]) / var_0)), var_9);
            }
        }
    }
    #pragma endscop
}
