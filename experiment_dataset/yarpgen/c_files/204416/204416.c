/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(1, 1));
    var_21 = var_4;
    var_22 = ((((max(((min(var_1, 1))), -var_5))) ? 3 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_23 = (-((((arr_1 [i_0] [i_1 - 3]) <= 1))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((var_15 == ((min(1, (arr_3 [i_0]))))));
                        arr_11 [i_1] [i_0] = (((max(1, (arr_8 [i_0] [i_1 + 2] [i_1 + 2] [i_1 - 3]))) ? (arr_8 [i_0] [i_1 - 1] [i_1 - 3] [i_1 + 1]) : ((max(var_8, var_1)))));
                        var_24 = ((((max(var_2, 72))) || (arr_0 [i_0])));
                        var_25 += (((((var_2 ? (arr_8 [i_2] [4] [4] [i_2]) : (arr_8 [i_2] [16] [i_1] [i_3])))) ? (arr_8 [i_2] [i_3] [i_3] [i_3]) : 1));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_26 = (max((max(var_1, 0)), var_10));
                                var_27 *= ((((((-132187844 ? (arr_4 [i_2] [i_1 + 2]) : 0))) ? var_7 : (arr_17 [18] [i_1] [22] [i_5]))));
                                arr_18 [i_0] [11] [11] [i_0] [i_0] [i_0] = ((1 | (max(((var_14 ? var_2 : var_10)), (var_1 && var_1)))));
                                arr_19 [i_0] [i_4] [i_2] [i_4 - 1] [i_5] |= ((var_5 || (((((min((arr_2 [i_2] [i_1]), 20121))) ? -var_2 : (arr_15 [i_5]))))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_0] = ((((max((((arr_6 [i_0]) ? var_6 : (arr_17 [9] [i_1] [i_1] [i_0]))), (arr_16 [i_0] [i_0])))) ? (min(132187856, (arr_16 [i_0] [i_0]))) : (min(((((arr_15 [i_0]) < var_17))), -132187856))));
                }
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    var_28 = ((((var_15 ? 1 : (max(-132187851, 1)))) | ((max(var_19, (arr_23 [i_0] [i_6 + 1] [i_1]))))));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_29 = (max(((0 ? (arr_14 [i_0] [i_6 + 1] [i_6 + 1] [i_6 - 1]) : var_9)), ((max(var_2, (((var_13 ? 1 : var_10))))))));
                        var_30 = (max(((1 ? (((arr_14 [i_0] [23] [i_6 + 1] [i_6 + 1]) << (var_2 - 2718032657588851256))) : (arr_7 [i_0]))), ((min((var_10 == var_0), var_10)))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_30 [i_0] [i_0] = (((((-132187857 <= ((min(1, (-32767 - 1))))))) ^ 1));
                        var_31 = var_9;
                    }
                    var_32 = (max(var_4, var_19));
                    arr_31 [i_0] [i_0] [i_0] = ((var_4 ? (((((var_6 ? var_6 : -132187856))) ? (((arr_1 [i_0] [i_1]) ? var_4 : var_16)) : var_12)) : (!var_15)));
                }
                var_33 = (((~0) * (((arr_14 [i_0] [i_1] [i_1] [i_1 + 1]) ? (arr_25 [i_1 + 2] [i_0] [i_0] [i_1 - 3]) : var_12))));
                arr_32 [19] [i_0] = 1522675066;
            }
        }
    }
    var_34 = ((~((-(var_1 >= var_14)))));
    #pragma endscop
}
