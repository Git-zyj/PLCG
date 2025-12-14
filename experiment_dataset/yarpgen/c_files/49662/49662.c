/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_3 [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = (arr_6 [i_2] [1] [1] [1]);
                    arr_9 [5] [i_1] [8] = ((((max((arr_3 [i_2]), (1 * 10008664039062243062)))) ? ((((arr_1 [i_2]) ? (((arr_2 [i_0]) ? (arr_3 [i_2]) : (arr_0 [i_2]))) : ((max((arr_0 [i_0]), (arr_0 [i_1]))))))) : (min(8438080034647308554, -1356306475))));
                    var_18 *= (arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1]);
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_19 &= (arr_7 [i_0] [i_0] [i_3] [i_0]);
                        arr_16 [i_0] [i_0] [6] = ((var_6 ? (arr_1 [i_1 - 1]) : ((((arr_15 [i_3]) <= (arr_0 [i_3]))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [1] [i_3] [i_5] = (((arr_5 [i_0] [i_3] [i_1] [i_0]) ? -1778791474226495219 : (arr_5 [6] [i_1] [6] [6])));
                        var_20 = 10008664039062243062;
                    }
                    var_21 ^= (arr_6 [i_1 - 1] [i_1] [1] [i_1]);
                    arr_22 [i_0] [i_0] = (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]);
                    var_22 = (max(var_22, ((((arr_7 [i_0] [i_0] [i_0] [i_0]) - (arr_7 [i_0] [i_1 - 1] [i_1] [i_3]))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 4; i_7 < 8;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_23 = (max(var_23, ((((((var_0 ? (arr_30 [1] [i_0] [i_1 + 1] [i_7 + 2] [i_0] [i_7 - 4]) : (arr_30 [i_0] [i_0] [i_1 + 1] [i_7 - 4] [i_7 + 2] [i_7 - 1])))) ? 39338 : ((202 ? ((1 ? (arr_23 [i_0] [9] [i_0]) : (arr_14 [i_0] [i_0] [i_0]))) : ((~(arr_20 [i_0] [1] [i_1] [i_6] [1] [i_8]))))))))));
                            arr_31 [i_6] [i_1 + 2] [i_6] [i_7] [i_7] = (((((min((arr_25 [i_0] [9]), (arr_13 [i_0] [i_0] [i_7 - 3] [i_0]))))) * (max((((arr_25 [i_0] [1]) ? 8438080034647308554 : (arr_7 [i_0] [i_0] [i_0] [i_0]))), (arr_27 [i_0] [i_0] [i_7] [i_0])))));
                            var_24 = ((arr_27 [i_0] [i_6] [i_8] [i_7 - 4]) ^ (4667125480943457764 % 10008664039062243062));
                            var_25 ^= arr_23 [i_0] [i_6] [i_7];
                            var_26 = (min(var_26, 250));
                        }
                        var_27 ^= (min((((1 ? 599952603 : 1))), (((arr_13 [i_1 + 2] [i_7 - 2] [i_7 - 2] [i_7 - 4]) ? (arr_13 [i_1 - 1] [i_7 - 4] [i_7 + 1] [i_7 + 1]) : (arr_13 [i_1 + 2] [i_7 - 1] [i_7 + 1] [i_7 - 3])))));
                    }
                    arr_32 [i_6] = (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_10 [i_0] [i_0] [i_0] [2])));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_35 [i_9] [i_9] [i_1] [i_9] = ((var_1 + (arr_27 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_9])));
                    arr_36 [i_0] [i_0] [i_9] = ((((((arr_14 [i_1 + 1] [i_1 + 1] [1]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [6]) : (arr_0 [i_1 + 2])))) ? 208 : (min(((((arr_5 [i_0] [i_1] [i_0] [i_9]) ? (arr_34 [i_9] [3]) : -791029047))), (~var_10)))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_28 ^= (((arr_13 [i_0] [i_0] [i_0] [i_0]) & (arr_27 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                    var_29 = ((((((arr_39 [i_0] [i_1] [i_10]) ? (arr_38 [i_0] [4] [4]) : 13))) < 134201344));
                    arr_40 [i_0] [i_1] [i_1] [i_10] = (arr_17 [i_0] [6] [i_0] [i_1] [i_0] [i_10]);
                }
                var_30 = ((~((((arr_5 [i_0] [i_0] [i_0] [i_0]) == (arr_28 [i_0] [i_1 + 2]))))));
                arr_41 [i_0] [i_0] [i_0] = ((min((arr_39 [i_1] [i_1] [i_1 + 1]), (arr_39 [i_1 + 1] [i_1 + 2] [i_1 + 2]))));
            }
        }
    }
    var_31 = (((min(var_10, (((var_14 ? 599952586 : 0)))))) == (~-3225653546827584031));
    #pragma endscop
}
