/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (((((max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1]))) + ((((arr_1 [i_0] [i_0 - 2]) ? var_0 : var_18))))) + (((arr_4 [i_0 + 1]) + (arr_4 [i_0 + 1])))));
                var_21 = ((((arr_4 [i_1]) ? (arr_3 [i_0 - 2] [i_0 - 2] [i_1]) : (((arr_3 [i_0] [i_1] [i_0]) - (arr_3 [i_0] [i_0] [i_0]))))));
                var_22 = (arr_1 [i_0] [i_0]);
            }
        }
    }
    var_23 = (min(var_23, ((((var_18 <= var_10) == ((((var_16 ? var_8 : var_14)))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {

                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    var_24 = (min((min(var_13, (!var_3))), ((((arr_10 [i_4 - 3] [i_4 + 1] [i_4 - 1] [i_4 - 2]) != (max((arr_1 [i_3] [i_4 + 1]), (arr_9 [6] [8]))))))));
                    var_25 = (3566179926280393721 % 1);
                    var_26 += (!var_9);
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_27 = (~(max((((arr_0 [i_3]) & var_5)), (arr_11 [i_5] [i_3] [i_2]))));
                    var_28 = (max(var_28, ((((arr_10 [i_2] [i_2] [i_5] [i_5]) ? (arr_12 [i_2]) : ((((((arr_6 [i_5] [i_2]) ^ var_17)) <= (arr_9 [i_3] [i_5])))))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_18 [6] [i_2] [i_7] &= ((((~((((arr_6 [i_3] [i_3]) != (arr_5 [i_7] [i_3])))))) - (((((((arr_13 [i_2] [i_2] [i_6]) > (arr_3 [6] [i_6] [i_7])))) > (arr_2 [i_2]))))));
                        var_29 ^= ((-(arr_12 [i_2])));

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_23 [i_2] [i_3] [i_3] [i_3] [i_3] [i_2] [i_8] &= (min((((arr_5 [i_2] [i_2]) ^ var_15)), (arr_10 [i_3] [i_3] [i_7] [i_3])));
                            var_30 = (min(var_30, (26329 == 6391457586622283274)));
                        }
                        var_31 = ((arr_10 [i_2] [i_6] [i_2] [i_2]) ^ (((~((var_6 ^ (arr_5 [i_2] [i_2])))))));
                        var_32 &= ((((min(6391457586622283255, 12055286487087268343))) ? (arr_5 [i_2] [i_7]) : (((var_16 >= (arr_13 [i_2] [i_2] [i_2]))))));
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_33 = (((arr_14 [i_2] [i_6] [i_9]) ? (arr_5 [i_2] [i_2]) : (arr_14 [i_2] [i_2] [i_2])));
                        var_34 = (arr_3 [i_6] [i_3] [i_2]);
                        var_35 = ((var_0 && (arr_17 [i_2] [i_3] [i_6] [i_9] [i_9] [i_9])));
                        var_36 &= ((var_19 / (arr_0 [i_6])));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_29 [i_2] [i_6] [i_6] [i_6] = ((~(1208600887911243509 <= 1)));
                        var_37 ^= (!-1208600887911243510);
                        var_38 = (((((-(((arr_25 [10] [i_3] [11] [i_6]) - (arr_19 [i_2] [i_3] [10] [i_6] [i_2])))))) ? ((((min((arr_27 [13] [i_3] [i_3] [i_2]), (arr_15 [i_2] [i_3] [i_6]))) / (arr_25 [i_2] [i_3] [i_6] [i_6])))) : (max((((arr_16 [i_6] [i_3]) / (arr_27 [i_2] [i_2] [i_6] [i_10]))), (arr_24 [i_2] [5] [i_6] [i_6])))));
                        var_39 = (((((min(var_11, (arr_27 [i_2] [i_2] [i_2] [i_2]))) != (arr_11 [5] [i_3] [7]))) ? ((-(var_18 - var_17))) : ((-(!-1208600887911243509)))));
                    }
                }
                var_40 = (min(var_40, (2591376467 / 3326773571)));
                arr_30 [i_2] [i_2] [i_2] = (~-1208600887911243510);
            }
        }
    }
    #pragma endscop
}
