/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190677
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_4)), (min((var_10), (var_10)))));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((var_2), (((/* implicit */signed char) var_9))))) : (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 4294967295U))) - (((/* implicit */int) max(((signed char)-35), ((signed char)-70))))));
        var_17 = ((/* implicit */short) var_4);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = max((-2000288969), (max((((/* implicit */int) (unsigned char)115)), (-2000288969))));
            var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))) : (var_12))))));
            var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */int) max(((signed char)21), ((signed char)10)))) != (((/* implicit */int) var_8)))))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((signed char)-5), (arr_0 [i_0])))) ? (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_9 [i_0 + 1] [i_1] [6U] [i_2])) - (26199))))), (((/* implicit */int) var_1))))) ? ((+(((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) ((unsigned short) ((short) (signed char)46))))));
            }
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0]))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (signed char)9))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 4; i_5 < 23; i_5 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (849021044U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)1)))))));
                            arr_19 [(unsigned char)14] [i_1] [i_3] [i_0] [i_5] = ((/* implicit */_Bool) (~(((849021037U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10)))))));
                        }
                    } 
                } 
                var_25 = (~((~(max((((/* implicit */unsigned int) arr_14 [i_0] [i_3] [i_1] [i_0])), (arr_10 [i_0] [i_1] [i_0] [i_3]))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (unsigned int i_7 = 2; i_7 < 23; i_7 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) (-(arr_11 [i_0 + 2] [8U] [8U] [i_1])));
                            var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_5 [i_6]), (((/* implicit */int) var_2))))) ? (arr_5 [i_3]) : (((int) (short)-31352))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (3445946251U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)123))));
            }
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_27 [i_0 + 2] [i_1] [i_0]), (arr_10 [i_1] [i_1] [i_0] [i_0]))))));
                /* LoopSeq 3 */
                for (short i_10 = 1; i_10 < 24; i_10 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_10))));
                    arr_33 [i_0] [i_1] [(_Bool)0] [i_0] [(_Bool)0] = ((/* implicit */unsigned char) max(((-(arr_27 [i_0] [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((~(((/* implicit */int) (signed char)-22)))) : (((/* implicit */int) arr_22 [i_10] [i_0] [i_10 + 1] [i_0 + 2] [i_0] [i_0 + 2])))))));
                    var_32 = ((/* implicit */int) 3445946241U);
                    var_33 = ((/* implicit */short) arr_31 [i_0] [i_0]);
                }
                for (short i_11 = 1; i_11 < 24; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        arr_40 [i_0 - 1] [i_11] [i_0] [i_11] [i_12] [i_0 + 1] [(unsigned char)6] = ((/* implicit */_Bool) var_11);
                        var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_10)));
                        var_35 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0])))))));
                        arr_41 [i_0] [i_1] [i_1] [i_11] [i_12] = ((/* implicit */unsigned char) arr_39 [i_0 + 1] [i_1] [i_9] [i_11 - 1] [i_0 - 1] [i_11 - 1]);
                        var_36 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_38 [1U] [i_0] [i_0 + 2]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 2; i_13 < 24; i_13 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0 - 1] [i_0] [i_0 + 1]))) : (var_12)));
                        arr_44 [i_0] [i_0] [(unsigned char)20] [i_11 - 1] [i_13] = ((/* implicit */int) var_4);
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 2; i_14 < 21; i_14 += 2) 
                    {
                        var_38 = ((/* implicit */_Bool) ((unsigned char) (short)-18729));
                        arr_49 [i_14 + 3] [(_Bool)1] [i_0] [i_9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_11 + 1])));
                    }
                    arr_50 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_31 [i_0 + 2] [i_0])) : (((/* implicit */int) var_9))))) : (arr_13 [i_0 + 1] [i_11 - 1]))), (4294967295U)));
                }
                for (short i_15 = 1; i_15 < 24; i_15 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_4))));
                    var_40 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_0 + 1] [(short)21] [20] [(_Bool)1] [i_15 - 1] [i_15 - 1] [i_15 - 1])) ? (var_10) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((-(arr_24 [i_9] [i_1] [i_9] [i_9] [i_9] [i_0] [(unsigned short)22])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_16 = 1; i_16 < 23; i_16 += 2) 
                    {
                        arr_56 [i_1] [i_0] [(short)24] [i_15] [i_16 + 1] = ((/* implicit */short) (-(var_12)));
                        var_41 = ((/* implicit */short) arr_51 [i_0] [i_1] [i_1] [(unsigned char)22] [i_0] [i_15]);
                    }
                    arr_57 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 2000288969)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) & (16U)))));
                }
            }
        }
    }
    for (unsigned int i_17 = 1; i_17 < 9; i_17 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))), (((min((((/* implicit */unsigned int) var_4)), (var_3))) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
            var_43 = ((/* implicit */_Bool) 1397068128U);
        }
        for (signed char i_19 = 0; i_19 < 13; i_19 += 2) /* same iter space */
        {
            arr_66 [i_19] [i_17] [i_17 + 3] = ((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((unsigned short) var_5))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned char)132))))))));
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_17 - 1] [i_17] [i_17 + 3] [i_17 + 1] [(signed char)23] [i_17 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) (unsigned char)23))));
            arr_67 [i_17] [i_19] [(unsigned char)4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) arr_0 [i_17]))), (arr_59 [i_17 + 1])));
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 13; i_20 += 2) 
            {
                for (int i_21 = 3; i_21 < 11; i_21 += 2) 
                {
                    {
                        arr_74 [i_17] [i_19] [i_20] [i_21 - 3] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_17 + 2] [i_17 + 2] [i_21 - 1])))))));
                        var_45 = ((/* implicit */signed char) var_12);
                        arr_75 [i_17 - 1] [i_20] [i_17] [i_19] [i_17 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_37 [i_17] [i_17 + 3] [i_17] [i_17 + 3] [i_17])))) ? (arr_37 [i_17] [i_17] [i_17] [i_17 + 3] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_9)))))));
                    }
                } 
            } 
        }
        var_46 = ((/* implicit */unsigned int) var_1);
        var_47 -= ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) ((short) (short)-22112))), (min((2642151662U), (((/* implicit */unsigned int) var_1))))))));
    }
}
