/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 ? ((var_6 ? var_14 : 244)) : ((max(481799455, var_6)))))) ? ((-20 ? -27188 : var_14)) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (((((((min((arr_4 [14]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_0])))) ? ((3813167829 ? (arr_6 [i_0] [i_2 - 1] [10]) : (arr_6 [i_0] [i_0] [7]))) : ((((arr_13 [i_0] [0] [i_2] [i_3] [i_0]) || -90)))))) ? 1329831449 : (arr_1 [i_0])));
                                var_17 = (max(var_17, 2744516675946512806));
                                arr_15 [1] [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_18 *= (((((103 ? ((8238733559205156317 ? (arr_3 [i_1] [i_6]) : (arr_7 [18] [6] [18]))) : (arr_12 [i_0] [i_1 + 3] [i_5] [i_1 + 3] [i_6])))) ? -109 : (arr_21 [i_0] [i_1] [i_0] [i_5] [i_5] [10])));
                            var_19 ^= ((((((-(arr_19 [i_6] [i_1]))) ? (arr_21 [1] [i_0] [i_1] [i_1] [i_6 + 1] [i_6]) : 595756551))));
                        }
                    }
                }
                var_20 = (min(2732000256592788587, 2744516675946512819));
            }
        }
    }
    var_21 = (max(var_9, ((((((var_2 ? 8 : 4294967295))) ? var_11 : var_9)))));
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                arr_29 [i_7] [i_8] = (max(((!(((15714743817116763028 ? var_12 : 173))))), (arr_27 [i_7] [i_7] [i_8])));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_22 = -8123713927959856391;
                    var_23 = (max(var_23, 1));
                    var_24 = (~-1970955032);
                    var_25 = (arr_20 [i_7 - 2] [i_7 - 1] [1] [i_7 + 1]);
                }
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    var_26 = ((var_6 ? (arr_18 [i_7 + 1] [i_7] [16] [11]) : -2744516675946512787));
                    arr_34 [i_7] [9] = (max((((arr_16 [i_10] [i_7] [1]) ? (arr_14 [i_7] [i_7] [13] [i_7] [0]) : ((((arr_8 [17] [i_7]) ? var_0 : (arr_22 [i_7])))))), (((-(arr_7 [i_8] [i_8] [i_8]))))));
                    arr_35 [i_7] [i_7] = (((arr_11 [11] [i_7] [i_7] [i_7]) ? var_3 : ((~((-(arr_25 [i_10] [i_7])))))));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    arr_39 [i_7 - 1] [i_7] [i_7] = (arr_27 [i_7] [i_7] [0]);
                    arr_40 [i_7 - 2] [i_7] = (arr_2 [i_7] [i_7]);
                }
                arr_41 [i_7] = ((-((((((-(arr_33 [i_7 - 1] [i_7] [i_7] [i_8])))) || (arr_10 [i_7] [i_7] [12] [i_7] [i_8]))))));
            }
        }
    }
    #pragma endscop
}
