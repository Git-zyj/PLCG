/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((2181431069507584 ? -24 : 14937));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = ((((var_10 + (arr_6 [i_0])))) ? (((arr_1 [10]) * (arr_1 [i_0]))) : ((max((arr_11 [6] [i_1] [12] [i_1] [i_1] [i_1]), (arr_11 [10] [i_3] [i_3] [18] [i_1] [10])))));
                                var_20 &= ((((max(var_10, (arr_3 [0])))) ? ((((!(((var_14 ? var_8 : var_12))))))) : (((arr_2 [i_0]) ? var_10 : ((var_16 ? 1 : var_15))))));
                                var_21 = (min((((arr_2 [i_3]) >> var_4)), ((var_13 ? (arr_10 [i_0] [i_1] [i_2] [i_0] [i_2]) : (arr_10 [i_0] [i_1] [i_2] [i_0] [i_4])))));
                                var_22 = (((((arr_9 [i_4] [1] [i_2] [i_1] [i_1] [i_0]) ? var_2 : (arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]))) & (arr_9 [i_0] [i_0] [i_0] [i_0] [17] [i_0])));
                            }
                        }
                    }
                    var_23 = (((!(((var_14 ? (arr_0 [i_1]) : (arr_2 [i_0])))))));
                    var_24 = var_18;
                    var_25 = (~((1 ? ((100 ? 1811101983 : -505292240077999176)) : -26355)));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_14 [14] [14] [i_5] |= (((arr_3 [i_5]) | ((-(arr_11 [i_5] [i_5] [i_1] [i_0] [i_0] [i_5])))));
                    var_26 += (min(((227 ? 1 : 26924)), (!3570837821)));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_27 -= ((-((((var_16 ? 19 : var_7))))));
                    var_28 = (max(var_28, -var_14));
                }
            }
        }
    }
    var_29 = (!var_6);
    var_30 *= (max(var_0, (((((1422140719616582471 ? 2483865316 : 93)) == var_12)))));
    #pragma endscop
}
