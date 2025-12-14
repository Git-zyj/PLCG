/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28117
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [(signed char)22] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 |= ((/* implicit */signed char) (~(min((((/* implicit */int) arr_5 [i_2] [i_1] [i_4])), ((-(((/* implicit */int) (signed char)(-127 - 1)))))))));
                                var_15 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) arr_3 [i_0] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_0] [(signed char)19])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        arr_16 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) min((arr_2 [i_0] [i_1]), (var_9)))) < (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) (signed char)-114))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_1] [i_5])) ? (((/* implicit */int) arr_12 [(signed char)1] [i_1] [i_2 - 1] [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_0]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min(((signed char)-59), (arr_2 [i_0] [i_1])))))) : (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_0] [i_2 + 1] [i_1] [(signed char)6] [i_0] [i_0])) : (((/* implicit */int) (signed char)13)))), (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))))));
                        var_16 += ((/* implicit */signed char) (-(((((/* implicit */int) var_13)) + (((/* implicit */int) arr_5 [i_1] [i_1] [i_5 - 3]))))));
                        var_17 *= min(((signed char)103), (min((arr_11 [i_1] [i_1] [i_2 - 1] [i_1] [i_0]), (arr_11 [(signed char)12] [i_1] [i_2 - 1] [i_1] [i_0]))));
                        var_18 += ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_1]), (var_10)))) ? (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1])) * (((/* implicit */int) var_3)))) : (((/* implicit */int) var_12)))) > (((/* implicit */int) max((arr_4 [i_0] [(signed char)4] [i_2 + 1]), (arr_4 [i_1] [i_2 - 1] [i_5 - 1]))))));
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)0)))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */int) max((arr_15 [i_1] [i_1]), (arr_11 [i_0] [i_1] [i_2 - 1] [i_1] [i_0])))), (min(((-(((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1])))), (((/* implicit */int) max(((signed char)126), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)9] [i_0])))))))))));
                        arr_20 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) max((arr_10 [i_0]), (arr_4 [i_0] [i_2 + 1] [i_6]))))))));
                    }
                    for (signed char i_7 = 2; i_7 < 21; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            arr_28 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) max((arr_0 [i_0]), (var_1))))), ((-(((/* implicit */int) max((arr_24 [i_2] [i_8]), (arr_13 [i_0] [i_1] [i_2 - 1] [i_7] [i_8] [i_8] [i_8]))))))));
                            var_21 = arr_17 [i_0] [i_2] [i_8];
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)37))))) > ((((!(((/* implicit */_Bool) (signed char)97)))) ? (((/* implicit */int) arr_12 [i_8] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_1])))))))));
                        }
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_7 + 1] [i_7 + 1] [i_9] = ((/* implicit */signed char) min(((-(((/* implicit */int) min(((signed char)-23), (arr_13 [(signed char)13] [i_1] [i_1] [i_1] [i_2] [i_1] [i_9])))))), (((/* implicit */int) ((((/* implicit */int) max((arr_19 [i_0] [i_0] [i_0] [i_0]), (var_1)))) >= (((/* implicit */int) var_6)))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_32 [i_7] [i_7 - 2] [i_7] [i_0] [i_7 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_9]))))) : ((~((-(((/* implicit */int) arr_4 [i_2 + 1] [i_1] [i_0]))))))));
                            var_24 = min((var_11), (((signed char) min((var_3), (var_5)))));
                        }
                        var_25 -= ((/* implicit */signed char) (~(min((((((/* implicit */int) var_8)) - (((/* implicit */int) (signed char)123)))), (((((/* implicit */int) arr_30 [i_2] [i_1] [i_2] [i_7] [i_0] [i_2] [i_0])) * (((/* implicit */int) var_1))))))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(signed char)8] [i_1])) & (((/* implicit */int) min((arr_27 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0]), (var_4))))))) ? (((/* implicit */int) arr_27 [i_7 + 1] [(signed char)10] [i_2] [(signed char)14] [i_7] [i_7])) : (((((/* implicit */_Bool) max((var_8), (arr_25 [i_0] [i_1] [i_2 + 1] [i_7 + 1] [i_7])))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_7] [i_2])) : (((/* implicit */int) max((arr_31 [i_0] [i_0] [i_1] [i_1] [i_1] [i_7]), (arr_25 [i_0] [i_0] [(signed char)16] [i_2] [i_7 + 1])))))))))));
                        arr_34 [i_0] [i_0] [(signed char)15] [i_7 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) min((arr_23 [i_0] [i_0] [i_7]), ((signed char)-5)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (signed char)109))))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (signed char i_11 = 2; i_11 < 22; i_11 += 2) 
                        {
                            {
                                arr_39 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_37 [i_11] [i_10] [i_0] [i_1] [i_0]), (var_9))))))), (((((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_0] [i_0] [i_2 + 1] [i_10] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-56)) < (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127))))))));
                                arr_40 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)13)) << (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_10] [i_11 - 1] [i_2] [i_10] [i_11 - 2])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_10] [i_11])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [(signed char)11] [i_11 + 1])))) >= (((((((/* implicit */int) arr_37 [i_11] [i_1] [i_10] [(signed char)10] [i_11])) + (2147483647))) << (((((((/* implicit */int) (signed char)-53)) + (68))) - (15))))))))));
                                arr_41 [i_0] = ((signed char) ((((((/* implicit */int) arr_3 [i_0] [i_1])) * (((/* implicit */int) var_11)))) - (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_10] [i_11]))));
                                var_27 = arr_29 [i_0] [i_1] [(signed char)1] [i_2] [i_0] [(signed char)1] [i_0];
                                arr_42 [i_0] [i_0] [i_0] [i_10] [i_11] = (signed char)112;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = var_9;
}
