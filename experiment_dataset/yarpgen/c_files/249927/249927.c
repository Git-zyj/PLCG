/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [2] [i_0]) == ((-(arr_0 [13] [13])))));
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) ? 25820 : (((arr_0 [i_0] [i_0]) ? (arr_0 [9] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_13 = ((arr_5 [i_1] [i_1]) ? (((!(arr_7 [i_1])))) : (2194338309 || 4006656331));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_17 [i_2] = ((((min(288310965, 1349061758))) ? (((((2195936636 ? 55987 : 2100628987))) ? ((min(-1527724086, 2744244931))) : ((20657 ? 141 : (arr_11 [i_2] [11]))))) : 1));
                                var_14 = (max(((((((arr_1 [i_5]) ? (arr_8 [i_5]) : (arr_6 [i_1] [i_2 - 2])))) ? (((((arr_0 [i_2] [i_3]) || (arr_15 [1] [i_2] [i_3] [i_4] [i_4 + 2] [i_5]))))) : (arr_13 [i_2] [i_4 - 3] [i_5]))), (min(((((arr_1 [i_4]) ? (arr_5 [i_2 - 1] [i_2 - 1]) : (arr_1 [16])))), (min((arr_15 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1]), (arr_5 [i_1 + 1] [7])))))));
                                arr_18 [i_1] [i_2 + 1] [i_3] [i_4] [i_1] [9] [17] = (((((((arr_10 [i_1] [i_3 - 1] [i_5]) ? (arr_2 [9]) : (arr_1 [8])))) ^ (((arr_1 [12]) + (arr_7 [i_5]))))));
                                var_15 *= ((((((arr_5 [i_2 + 1] [i_2]) ? (arr_6 [i_1 + 1] [15]) : (((arr_11 [i_1] [i_2 - 2]) ? (arr_13 [i_1] [i_5] [i_3]) : (arr_8 [1])))))) ? (max((((arr_10 [11] [2] [i_4 + 1]) ? (arr_8 [i_5]) : (arr_6 [10] [i_2 - 2]))), (arr_0 [i_1 + 1] [i_5]))) : (((!((((arr_1 [i_1]) ? (arr_10 [i_3] [i_3 - 1] [i_3 - 1]) : (arr_11 [i_5] [i_5])))))))));
                            }
                        }
                    }
                    arr_19 [i_3] [i_2 - 2] [i_2 - 1] [8] = (((((((max(208, 189)))) == (min((arr_10 [i_3 - 1] [i_2] [i_1]), (arr_11 [i_2] [i_3]))))) ? ((max(((669696101 ? (arr_2 [i_2]) : 110)), (arr_14 [i_1] [i_2] [6])))) : (arr_13 [i_1 + 1] [i_2 - 2] [i_2 - 2])));
                    var_16 = (min((((arr_10 [i_1 + 1] [3] [i_3]) ? (arr_11 [i_1] [0]) : (((1596927202 ? (arr_15 [i_3] [i_3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) : 41))))), (arr_8 [i_1 + 1])));
                }
            }
        }
    }
    var_17 = (((((max(var_10, var_4))) ? var_5 : var_0)));
    var_18 &= (max(((max((max(8, 1)), var_10))), (max(var_7, (min(var_11, var_1))))));
    var_19 = ((var_1 + var_11) ? var_6 : (max(20652, (min(var_1, var_5)))));
    #pragma endscop
}
