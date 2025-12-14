/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232070
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
    var_19 = ((/* implicit */unsigned int) var_17);
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_17)), ((unsigned char)240)))) : (((/* implicit */int) ((signed char) var_3))))), (max((var_0), (((((((/* implicit */int) var_7)) + (2147483647))) >> (((var_14) - (6896685338178898256ULL))))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) max(((-(arr_2 [i_0 + 1] [i_0]))), (((arr_2 [i_0 - 1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        arr_9 [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))));
                        arr_10 [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((min(((-(3829463822662392806LL))), (arr_2 [i_0] [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */int) (short)27364)) >= (((/* implicit */int) arr_4 [i_0]))))), (max((((/* implicit */signed char) arr_3 [i_0 + 1] [i_0 + 1])), (arr_0 [i_0] [i_0])))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0 - 1] [i_3 - 2] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (min((5135271815634675963LL), (((/* implicit */long long int) (unsigned char)96)))) : (arr_2 [i_0 + 1] [i_0 - 1])))));
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_1] [i_0])) != (((/* implicit */int) arr_8 [i_0] [i_2] [i_1] [i_0]))))));
                    arr_14 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) var_10);
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 3; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_21 [i_0] [i_0 - 1] [i_0] [i_4] [i_5 - 1]), (arr_21 [i_0] [i_0 + 1] [i_2] [i_2] [i_5 - 1]))))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_2] [i_4 + 1] [i_4] [i_4] [i_4] [i_5 - 3])) >> (((((/* implicit */int) arr_16 [i_1] [i_4 + 2] [i_4] [i_4] [i_4 - 3] [i_5 - 3])) - (53417)))))) ? (((/* implicit */int) max(((unsigned short)60367), (((/* implicit */unsigned short) (signed char)-106))))) : (((/* implicit */int) ((short) var_16))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (max((arr_19 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 10; i_7 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 12; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    for (long long int i_10 = 2; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_6 + 1] [i_10 - 1] [i_6 + 1])) : (arr_36 [i_7 + 2] [i_6 + 1]))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_8 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_8 + 2] [i_10 - 2] [i_8] [i_9]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    for (unsigned char i_13 = 2; i_13 < 12; i_13 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_13] [i_12] [i_11] [i_7 + 3] [i_6 + 1])) ? (((/* implicit */int) arr_41 [i_13] [i_13] [i_7 + 1] [i_6 - 1])) : (((/* implicit */int) arr_41 [i_12] [i_12] [i_7 + 2] [i_6 - 1]))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)126)) & (((/* implicit */int) arr_20 [i_6] [i_7 - 2] [i_11] [i_11] [i_13] [i_13] [i_11]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_14 = 2; i_14 < 10; i_14 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 2; i_15 < 11; i_15 += 4) 
            {
                for (unsigned short i_16 = 2; i_16 < 13; i_16 += 2) 
                {
                    {
                        arr_53 [i_15] [i_14 + 3] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_6] [i_6 - 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_14 + 4])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_6 - 1] [i_6] [i_14 + 2] [i_14 + 4] [i_14] [i_14 + 4])))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_6] [i_14 + 1] [i_15 + 3] [i_16])) ? (((/* implicit */int) (signed char)96)) : (arr_31 [i_6 - 1] [i_14 - 1] [i_15 + 1] [i_6 - 1]))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (-(5135271815634675967LL))))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (arr_5 [i_16] [i_15] [i_14])));
                    }
                } 
            } 
            var_32 = ((/* implicit */_Bool) var_7);
        }
        /* LoopSeq 1 */
        for (int i_17 = 2; i_17 < 10; i_17 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 1; i_18 < 11; i_18 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 14; i_19 += 3) 
                {
                    for (unsigned char i_20 = 2; i_20 < 12; i_20 += 3) 
                    {
                        {
                            var_33 = (i_17 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_6 + 1] [i_17 + 3] [i_18] [i_17])) >> (((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_17] [i_18] [i_19] [i_20 + 1]))))))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_6 + 1] [i_17 + 3] [i_18] [i_17])) + (2147483647))) >> (((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_17] [i_18] [i_19] [i_20 + 1])))))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (arr_28 [i_6] [i_6 - 1] [i_6])));
                            var_35 = ((/* implicit */short) arr_43 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_18 - 1] [i_20 + 1]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_21 = 1; i_21 < 13; i_21 += 2) 
                {
                    arr_68 [i_17] [i_17] = ((/* implicit */signed char) (unsigned short)33407);
                    arr_69 [i_17] [i_18 - 1] [i_18] [i_17 + 1] [i_17] = ((((/* implicit */_Bool) arr_61 [i_6 - 1] [i_6] [i_17] [i_17] [i_18 + 2])) ? (arr_61 [i_6 + 1] [i_6 + 1] [i_17 - 2] [i_17] [i_18 + 2]) : (((/* implicit */int) arr_35 [i_17 - 1])));
                    /* LoopSeq 2 */
                    for (unsigned char i_22 = 1; i_22 < 11; i_22 += 4) /* same iter space */
                    {
                        arr_72 [(unsigned char)6] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [(_Bool)1] [i_6 - 1]))));
                        arr_73 [i_6] [i_17] [i_17] [i_6] [i_6] [i_17] [i_17] = ((/* implicit */long long int) arr_40 [i_6 - 1] [i_21 + 1] [i_21 + 1]);
                        arr_74 [i_22] [i_22] [i_17] [i_21] [i_17] [i_17 + 4] [i_6] = ((/* implicit */_Bool) 4294967288U);
                        arr_75 [i_21] [i_21] [i_17] [i_17] [i_17] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_6 - 1])) : (((/* implicit */int) arr_25 [i_6] [i_17 + 3] [i_21 + 1]))));
                    }
                    for (unsigned char i_23 = 1; i_23 < 11; i_23 += 4) /* same iter space */
                    {
                        arr_78 [i_6] [i_6] [i_17] [i_18] [i_21] [i_6] [i_23] = ((/* implicit */int) ((long long int) arr_31 [i_6] [i_17] [i_17] [i_21]));
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) arr_1 [i_21 - 1])) + (49)))))) ? (((((/* implicit */_Bool) var_17)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [(signed char)2] [(signed char)2] [i_21 - 1]))))) : (((((/* implicit */_Bool) arr_4 [i_17])) ? (((/* implicit */unsigned int) arr_26 [i_6 - 1] [i_6 - 1] [i_18 + 2])) : (var_9))))))));
                    }
                }
            }
            for (unsigned long long int i_24 = 1; i_24 < 11; i_24 += 2) 
            {
                var_37 = ((/* implicit */unsigned int) arr_26 [i_6 - 1] [i_17 + 4] [i_6 - 1]);
                /* LoopNest 2 */
                for (long long int i_25 = 4; i_25 < 12; i_25 += 4) 
                {
                    for (int i_26 = 1; i_26 < 11; i_26 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_40 [i_6 - 1] [i_17 - 1] [i_17 - 2]))));
                            var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_85 [i_24 + 3] [i_24] [i_24] [i_24]))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned char i_27 = 0; i_27 < 14; i_27 += 3) 
            {
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    for (unsigned short i_29 = 1; i_29 < 13; i_29 += 3) 
                    {
                        {
                            arr_94 [i_17] [i_28 + 1] [i_6] [i_17] = ((/* implicit */unsigned long long int) arr_61 [i_6] [i_6 - 1] [i_28 + 1] [i_17] [i_29]);
                            arr_95 [i_6] [i_17] [i_17] [i_6] [i_17] = ((/* implicit */signed char) arr_89 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_17]);
                        }
                    } 
                } 
            } 
            var_40 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_17 + 4] [i_6 - 1] [i_17])) >> (((arr_45 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_17 + 4] [i_17 + 4]) - (2038961276)))));
        }
        arr_96 [i_6] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_6] [i_6 - 1] [i_6 - 1]))));
    }
    for (signed char i_30 = 1; i_30 < 13; i_30 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) var_3))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_31 = 3; i_31 < 13; i_31 += 2) 
        {
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_27 [i_30 - 1] [i_30 + 1] [i_31 - 3])))))));
            var_43 ^= ((/* implicit */int) var_5);
            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((arr_82 [(signed char)2] [i_31] [(signed char)2] [i_30] [(signed char)2]) ? (((/* implicit */int) arr_82 [(signed char)2] [i_31] [(signed char)2] [i_30 - 1] [(signed char)2])) : (((/* implicit */int) arr_82 [(unsigned char)0] [i_31 + 1] [i_31 - 1] [i_31 + 1] [(unsigned char)0])))))));
        }
        var_45 = ((/* implicit */long long int) max((((/* implicit */signed char) var_4)), ((signed char)94)));
        arr_102 [i_30 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    }
}
