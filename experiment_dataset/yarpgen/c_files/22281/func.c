/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22281
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-25)) <= (((/* implicit */int) (signed char)-12))));
                        arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_5))))) << (((((/* implicit */int) (signed char)-30)) + (36)))));
                        var_17 = ((signed char) (signed char)126);
                        var_18 |= var_12;
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_3 [(signed char)14] [i_1] [i_0]))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (signed char)-34))));
                        arr_12 [(signed char)4] [(signed char)13] [(signed char)5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(signed char)6] [i_1 - 1])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_4] [i_4])) : ((-(((/* implicit */int) arr_5 [i_1] [i_2] [i_1]))))));
                        arr_13 [i_1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) arr_2 [i_4]))))) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))));
                        var_20 = arr_5 [i_1] [(signed char)0] [i_1 + 1];
                    }
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_16 [i_1 + 1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)29)))))));
                        arr_17 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-38)) <= (((/* implicit */int) (signed char)-64)))) ? ((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_5))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                        {
                            var_21 = var_3;
                            var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-120))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))) ? (((((/* implicit */int) (signed char)-18)) ^ (((/* implicit */int) arr_8 [i_0] [i_2])))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_2] [(signed char)11] [i_7])))))));
                            arr_24 [i_0] [i_1] [i_2] [(signed char)4] [(signed char)14] |= (signed char)-119;
                        }
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)-8))) / (((/* implicit */int) arr_0 [i_8] [i_6]))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1])) > (((/* implicit */int) (signed char)0)))))));
                            arr_27 [i_0] [(signed char)13] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) var_9))));
                            var_26 = arr_14 [i_6] [i_8];
                        }
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)4)) * (((/* implicit */int) (signed char)-30))));
                            var_28 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [(signed char)14] [i_1] [i_1 - 1] [i_6]))));
                        }
                        var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_23 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_23 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                    }
                }
                for (signed char i_10 = 1; i_10 < 13; i_10 += 1) 
                {
                    arr_33 [i_10] [i_1] [(signed char)1] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_21 [i_10 + 1] [i_1] [(signed char)8] [i_0] [i_0])))), ((~((~(((/* implicit */int) var_7))))))));
                    arr_34 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (signed char)-20))))) ? (((/* implicit */int) var_11)) : (((((((/* implicit */int) var_15)) * (((/* implicit */int) arr_19 [i_10 + 1] [i_10 + 1] [i_10 + 1] [(signed char)13] [i_1 + 1] [i_0])))) / (((/* implicit */int) (signed char)(-127 - 1)))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    var_30 = var_11;
                    var_31 = (signed char)27;
                    var_32 &= ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_1 - 1]))));
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) /* same iter space */
                        {
                            arr_42 [i_0] [(signed char)11] [i_11] [i_12] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_7))) < (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (signed char)-63)))))));
                            var_33 = ((signed char) (signed char)93);
                        }
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_1 + 1] [i_1 + 1])) < (((/* implicit */int) arr_19 [i_0] [i_1 - 1] [i_0] [i_0] [i_1 - 1] [i_1]))));
                            var_35 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)64))));
                            var_36 &= arr_20 [i_0] [i_12];
                        }
                        arr_46 [i_0] [i_1] [i_11] [i_12] &= var_11;
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            var_37 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)4)) * (((/* implicit */int) (signed char)-39))));
                            var_38 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))))));
                            var_39 &= var_6;
                        }
                        var_40 = ((signed char) arr_0 [(signed char)13] [i_1 + 1]);
                    }
                    for (signed char i_16 = 1; i_16 < 14; i_16 += 4) 
                    {
                        arr_51 [i_11] [i_16] [i_16] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1 - 1] [i_11] [i_1] [i_16])) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) arr_18 [(signed char)5] [i_1 + 1])))) + (2147483647))) << (((((((/* implicit */int) (signed char)-63)) + (71))) - (8)))));
                        arr_52 [i_0] [(signed char)8] [(signed char)14] [i_1] = arr_32 [i_1 - 1] [i_0];
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 15; i_17 += 1) 
                        {
                            var_41 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)122))));
                            var_42 = arr_15 [i_1];
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (signed char)53)) & (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [(signed char)14] [(signed char)1]))))));
                            var_44 &= ((/* implicit */signed char) (+(((/* implicit */int) var_15))));
                        }
                    }
                    for (signed char i_18 = 3; i_18 < 14; i_18 += 1) 
                    {
                        arr_59 [i_0] [i_1] [i_1] [i_18] = arr_23 [i_0] [i_0] [i_1 - 1] [i_18 - 2] [i_18 - 3] [i_18 - 1] [i_18 - 3];
                        var_45 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)38)) ^ (((/* implicit */int) ((signed char) (signed char)107)))));
                        arr_60 [i_1] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_1 + 1] [i_1] [i_18] [i_11] [i_1 + 1] [i_1] [(signed char)14]))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_1 [i_1 + 1]))));
                    }
                }
            }
        } 
    } 
    var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) max(((signed char)-67), (var_13))))) / (((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (signed char)19)))))))));
    var_47 = var_12;
}
