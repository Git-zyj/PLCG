/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((min((((arr_0 [i_1 + 3]) | var_10)), ((((arr_1 [i_1 - 2]) == (arr_1 [i_1 - 2])))))))));
                var_20 |= ((((min((((var_3 ? (arr_0 [i_0]) : var_5))), (min(var_10, (arr_4 [i_1])))))) ? (min((((arr_4 [3]) & var_8)), (arr_5 [i_1 - 3] [i_1 + 1]))) : ((min(((var_7 ? (arr_1 [i_0]) : var_3)), (((arr_5 [i_0] [i_0]) / (arr_1 [i_1]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 ^= (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);

                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            arr_15 [i_4] [i_4] [i_4 + 3] [i_4] [i_2] [i_4] = var_8;
                            arr_16 [i_2] [i_4] [i_4 + 1] [i_4] = (((arr_1 [i_0]) ? (((arr_10 [i_3] [i_3] [i_3] [i_3] [7] [i_3]) ? var_15 : (arr_14 [8] [8] [i_0] [i_0] [i_0]))) : (((28714 ? -818453979 : -28727)))));
                        }
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = var_9;
                            arr_21 [i_1] [i_2] [i_2] = ((var_1 - (arr_0 [i_1 + 3])));
                        }
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_22 = var_4;
                            var_23 *= (((arr_12 [i_1 + 3] [8] [i_1 - 1] [i_1] [i_1 + 3]) ? (arr_12 [i_1 + 1] [1] [i_1 - 3] [i_1] [i_1 - 3]) : (arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                            arr_27 [i_0] [i_0] [i_2] [i_0] [4] = var_11;
                        }
                        arr_28 [i_0] [i_2] [i_0] [i_0] = arr_7 [i_1 - 1] [i_1 - 3] [i_2];
                    }
                    arr_29 [i_2] [i_2] = (((((arr_12 [8] [i_2] [i_2] [i_2] [i_2]) ^ (arr_5 [i_0] [i_0]))) + (arr_1 [i_1 + 3])));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_24 = (((arr_33 [i_2]) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_2));
                            var_25 = ((818453978 ? -1601196441 : -41993001));
                            arr_35 [i_2] [i_2] [1] [i_2] [i_2] [i_2] [1] = (2220268163 - -818453979);
                            var_26 = (min(var_26, (((arr_11 [i_1] [i_1 + 1] [i_1]) ^ (arr_11 [i_1] [i_1 - 3] [i_1 - 3])))));
                            var_27 = (((arr_10 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? var_2 : var_17));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_28 = (((((var_17 ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_32 [i_10])))) ? (arr_34 [i_1 + 3] [i_1 + 2] [i_1 - 3] [i_1 + 2]) : (arr_1 [i_1 + 1])));
                            arr_38 [i_2] [i_10] = ((var_3 ? (arr_5 [i_1 - 3] [i_1 - 2]) : var_7));
                            var_29 &= (-10429 ? 18281378718335059116 : 177243967001114577);
                        }
                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            var_30 = (((arr_6 [i_1] [i_1 + 1] [i_1 - 3] [i_2]) ? (arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_2]) : (arr_6 [1] [i_1 + 2] [i_1 - 2] [i_2])));
                            var_31 = ((var_7 ? var_3 : (arr_18 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [1])));
                        }
                        arr_41 [i_2] [i_2] [i_2] [i_2] = ((var_11 ? (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_36 [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    arr_42 [i_2] [i_1] [i_1 + 1] [i_1] = (((arr_6 [i_1] [i_1] [i_1] [i_2]) ? (arr_6 [i_1] [i_1 + 2] [i_1] [i_2]) : (arr_6 [i_1] [i_1] [i_1] [i_2])));
                    var_32 = ((var_0 ? -22277 : (arr_19 [i_1 - 3] [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 3])));
                }
            }
        }
    }
    var_33 = (min(((((min(1645867368, 61))) - ((var_13 ? var_2 : var_12)))), var_14));
    #pragma endscop
}
