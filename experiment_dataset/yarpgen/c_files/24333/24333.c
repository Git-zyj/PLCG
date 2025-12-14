/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_14 = (arr_5 [i_0]);
                    var_15 = (((min((max((arr_6 [i_0] [i_1] [i_2] [i_2]), (arr_3 [i_0] [i_0] [i_2]))), (arr_2 [1] [i_2]))) ^ (((arr_9 [i_0] [i_0 - 1]) ? (arr_5 [i_0]) : (arr_9 [i_0] [i_0 - 2])))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((-((-(arr_7 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2])))));
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_16 = (((arr_8 [i_0] [i_0 - 1] [i_3 + 1] [i_3]) < (arr_3 [i_0] [i_0] [i_0])));
                    var_17 &= ((+((-(((arr_9 [i_1] [i_1]) ? (arr_5 [i_1]) : (arr_0 [i_1])))))));
                    var_18 = (min(var_18, (((!(((arr_3 [i_1] [i_1] [i_3 + 3]) != (arr_3 [i_0 - 2] [i_1] [i_3 + 4]))))))));
                }
                /* vectorizable */
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    var_19 = ((!(((-(arr_15 [i_0] [i_0] [i_0]))))));
                    var_20 = ((((!(arr_5 [i_0]))) ? ((~(arr_5 [i_0]))) : ((((arr_14 [12] [i_1]) / (arr_7 [i_0] [i_1] [i_0] [i_4]))))));
                    var_21 = -7737069515649123421;
                    var_22 = ((-(arr_9 [i_0] [i_0])));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_23 = (max(((-(((!(arr_1 [i_0])))))), (arr_4 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_24 -= ((!((min((arr_0 [i_5]), ((((arr_0 [i_7]) != (arr_15 [i_0] [i_0] [i_7])))))))));
                                var_25 = (min(var_25, ((((((-(arr_15 [i_0] [i_6] [i_1])))) ^ (((arr_16 [i_0] [i_0 - 2] [i_5]) ? ((((!(arr_19 [i_1] [i_1] [i_5] [14]))))) : ((-(arr_9 [i_7] [i_1]))))))))));
                            }
                        }
                    }
                }
                arr_22 [i_0] = min((!-106), (arr_0 [i_0]));
                var_26 -= (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1]);
                var_27 = (((((-(((arr_3 [i_1] [i_0] [i_0 + 1]) + (arr_12 [i_0 - 2])))))) ? ((((!(((-(arr_16 [i_0] [i_1] [i_1])))))))) : (((((arr_20 [i_0] [i_1] [i_0] [i_1] [i_0] [14] [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_1]))) / (arr_11 [i_0] [i_0 + 1] [0] [i_1])))));
                var_28 = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
