/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241395
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((_Bool) (-(var_11))));
                    var_20 = ((/* implicit */int) -6970325583631413580LL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_4] [i_3] [(short)12] [i_0] [i_0])) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((arr_13 [i_0] [i_3] [i_5] [i_5]) * (((/* implicit */int) (_Bool)1)))))));
                                arr_19 [i_6] [i_5] [i_3] [i_3] = ((/* implicit */signed char) arr_0 [i_5]);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        arr_23 [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_7])) ? (((/* implicit */int) arr_14 [i_7] [i_3] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_3] [i_4]))));
                        var_22 = ((/* implicit */unsigned short) ((arr_10 [i_7] [i_4] [i_0] [i_0]) & (arr_10 [i_0] [i_0] [i_0] [i_0])));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            arr_26 [i_0] [i_3] [i_4] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) != (arr_24 [i_0] [i_3] [i_4] [i_7] [i_8] [i_8])));
                            var_23 = ((/* implicit */int) ((_Bool) arr_2 [i_4]));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */_Bool) arr_21 [i_0] [i_4] [i_7]);
                        }
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            arr_31 [i_0] [i_3] [i_3] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_6 [i_0] [i_3] [(_Bool)1] [i_7]))));
                            var_24 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_28 [i_0] [i_3] [i_4] [i_3] [i_9] [i_4] [i_7]))))) ? (((/* implicit */int) arr_22 [i_0] [i_3] [i_4] [i_7])) : (((/* implicit */int) arr_21 [4] [(short)8] [i_9])));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) 3106476240U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32762))) : (-2707218020263414809LL))) : (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [(unsigned short)4] [i_3] [i_4] [i_7])) ? (((/* implicit */int) arr_22 [i_0] [i_3] [i_4] [i_7])) : (((/* implicit */int) arr_22 [i_0] [i_3] [i_4] [i_7]))));
                    }
                    for (short i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 1; i_11 < 13; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_11] [i_11 + 2] [i_11 + 4] [i_11 + 1]))));
                            var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_11 + 1] [i_11 + 4] [i_10] [i_10] [5LL] [i_0]))));
                        }
                        arr_36 [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_3] [i_4] [i_0])) ? (((/* implicit */int) arr_34 [i_0] [9U] [i_0] [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (short i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_12])) >> (((((/* implicit */int) arr_40 [i_0] [i_3] [(_Bool)1] [i_12] [i_13] [i_12])) - (209)))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_3])) ? (((/* implicit */int) arr_8 [i_13] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_12]))));
                            arr_43 [7LL] [7LL] [i_13] = ((((/* implicit */_Bool) arr_20 [i_0] [i_3] [i_4] [i_12])) ? (arr_20 [i_0] [i_0] [i_0] [i_0]) : (arr_20 [(signed char)1] [i_3] [i_3] [i_3]));
                            arr_44 [i_0] [i_0] [i_4] [i_12] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_3] [i_4] [i_12] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_3] [i_4] [i_12] [i_12] [i_13]))) : (arr_10 [i_3] [i_4] [i_4] [i_13])));
                        }
                        for (short i_14 = 1; i_14 < 14; i_14 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((unsigned short) arr_35 [i_14 + 3] [i_14 + 1] [i_14] [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 1]))));
                            arr_47 [i_0] [i_0] [i_0] [i_12] [i_0] [i_3] [i_14] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_0] [i_4] [i_12] [i_14 - 1]))));
                        }
                        var_32 -= ((/* implicit */unsigned short) (-(arr_39 [i_12] [i_3])));
                        var_33 = ((/* implicit */int) arr_37 [i_0] [i_3] [i_4] [i_12]);
                        /* LoopSeq 1 */
                        for (short i_15 = 2; i_15 < 15; i_15 += 4) 
                        {
                            var_34 = ((/* implicit */short) ((long long int) arr_1 [i_0] [i_15 + 2]));
                            var_35 = ((/* implicit */unsigned char) (+(arr_16 [i_15 + 1])));
                            arr_51 [i_0] [i_4] [15] = ((/* implicit */unsigned char) ((arr_33 [i_4] [i_4] [i_15 + 1] [i_15 + 1]) != (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_15 + 2] [i_12]))));
                        }
                    }
                    for (int i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((_Bool)1) || ((_Bool)1)));
                        arr_55 [i_0] [i_3] [i_4] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25561)) ? (((/* implicit */int) (_Bool)1)) : (-507462653)))) : (((((/* implicit */_Bool) arr_38 [i_16])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_4])))))));
                        arr_56 [i_0] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_4] [i_3] [i_0]))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (486446098) : ((~(((/* implicit */int) var_17)))))))));
                    }
                    arr_57 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_16 [i_0]) : (((/* implicit */int) var_10)))))));
                }
            } 
        } 
    }
    for (short i_17 = 0; i_17 < 17; i_17 += 4) /* same iter space */
    {
        arr_61 [11LL] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_17]))))), ((-(((/* implicit */int) arr_30 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))));
        /* LoopSeq 2 */
        for (unsigned char i_18 = 0; i_18 < 17; i_18 += 4) 
        {
            arr_66 [i_17] [i_18] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(arr_53 [i_17] [i_18] [i_18] [i_18])))), (((unsigned int) -460144623)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                /* LoopSeq 4 */
                for (short i_20 = 3; i_20 < 16; i_20 += 2) 
                {
                    var_37 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_20 + 1] [i_20] [i_20] [i_20 - 3] [i_20 - 3] [i_19])) ? (((/* implicit */int) arr_46 [i_20 - 3] [i_20 - 3] [i_20 + 1] [i_20 + 1] [i_20 - 3] [i_19])) : (((/* implicit */int) arr_46 [i_19] [i_19] [i_20 - 1] [i_20] [i_20 + 1] [i_19]))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-8438)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21680))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_20 + 1] [8LL] [i_19] [i_20 - 2] [i_17])) ? (((/* implicit */long long int) arr_39 [i_20 + 1] [i_20 + 1])) : (arr_15 [i_17] [i_17] [i_19] [i_20] [i_20])));
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_41 [i_17] [i_17] [i_17] [i_17] [i_17])))) ? (var_1) : (arr_49 [i_17] [i_20 - 3] [i_19] [i_20] [i_19] [i_19])));
                    arr_71 [i_17] [i_18] [i_17] [i_20] = ((/* implicit */long long int) ((arr_68 [i_17] [i_20 + 1] [i_19]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_17] [i_18] [i_19] [i_20] [i_17] [i_18] [i_17])) ? (((/* implicit */int) (short)22273)) : (((/* implicit */int) arr_69 [i_17] [i_18] [i_18]))))) : (((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_17])))))));
                }
                for (unsigned short i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_65 [i_17]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_17] [i_17] [i_18] [i_19] [i_19] [i_19]))) : (arr_25 [i_17] [i_17])));
                    var_42 = (~(((/* implicit */int) arr_2 [i_17])));
                    arr_75 [i_17] = ((/* implicit */unsigned short) (~(arr_9 [i_17] [i_18] [i_19])));
                }
                for (long long int i_22 = 0; i_22 < 17; i_22 += 2) /* same iter space */
                {
                    arr_80 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_64 [i_18] [i_19])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_2 [i_17]))))) : (var_18)));
                    /* LoopSeq 3 */
                    for (unsigned short i_23 = 0; i_23 < 17; i_23 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) (-(arr_65 [i_23])));
                        var_44 = ((/* implicit */signed char) (+(((/* implicit */int) arr_28 [i_17] [i_18] [i_19] [i_22] [i_23] [i_22] [i_19]))));
                    }
                    for (int i_24 = 1; i_24 < 14; i_24 += 4) 
                    {
                        arr_87 [i_17] [i_18] [i_17] [i_22] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_17] [i_19] [i_22] [i_24])) ? (((/* implicit */int) arr_46 [i_22] [i_22] [i_24 + 1] [i_24 + 3] [i_24 + 2] [i_18])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9898)))))));
                        arr_88 [i_17] [i_18] [i_18] [i_17] [i_17] [(_Bool)1] [i_24 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_60 [i_24 - 1])) ^ (((/* implicit */int) arr_40 [i_24] [i_24] [i_24] [i_24] [i_24 + 3] [i_24 + 3]))));
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_45 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_18] [i_19])) ? (((/* implicit */int) arr_3 [i_17] [i_17])) : (((/* implicit */int) arr_28 [i_17] [i_17] [i_19] [i_22] [i_25] [i_25] [i_18]))));
                        arr_91 [i_25] [i_25] [i_25] = ((/* implicit */_Bool) ((int) var_15));
                        var_46 = ((/* implicit */int) 0LL);
                        var_47 = (-9223372036854775807LL - 1LL);
                    }
                }
                for (long long int i_26 = 0; i_26 < 17; i_26 += 2) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned int) arr_13 [i_17] [i_18] [i_19] [i_26]);
                    var_49 = ((unsigned int) ((arr_62 [i_18] [i_19]) >> (((((/* implicit */int) var_13)) - (23750)))));
                    var_50 = ((/* implicit */short) (-(((/* implicit */int) arr_84 [i_17]))));
                    var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((unsigned int) (-(((/* implicit */int) arr_68 [i_17] [i_18] [i_26]))))))));
                }
                /* LoopSeq 1 */
                for (int i_27 = 1; i_27 < 13; i_27 += 4) 
                {
                    arr_98 [i_17] [i_17] [i_19] [i_17] = ((/* implicit */_Bool) (+(arr_13 [i_17] [i_17] [i_27 + 3] [i_27 - 1])));
                    /* LoopSeq 1 */
                    for (short i_28 = 0; i_28 < 17; i_28 += 4) 
                    {
                        arr_102 [i_17] [i_17] [i_19] [i_27 + 2] [i_17] = (+(arr_11 [i_27 - 1] [i_27 + 4]));
                        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_27] [i_27] [i_27 + 1] [i_27 + 4] [i_27 + 4] [i_27 + 4] [i_27 - 1])) ? (((/* implicit */int) arr_97 [i_27 + 4] [i_27 - 1] [i_27 - 1] [i_27 + 4])) : (((/* implicit */int) arr_3 [i_17] [i_27 - 1]))));
                        var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) ((arr_42 [i_17] [i_27 + 2] [i_27 + 2] [i_27 + 2] [i_28] [i_17] [i_28]) ? (((/* implicit */int) arr_42 [i_17] [i_27 - 1] [i_19] [i_27] [i_28] [i_17] [i_18])) : (((/* implicit */int) arr_42 [i_17] [i_27 - 1] [i_19] [i_27 + 1] [i_27 - 1] [i_28] [i_19])))))));
                    }
                }
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_29 = 3; i_29 < 16; i_29 += 2) 
            {
                var_54 = ((/* implicit */long long int) arr_18 [i_29] [i_29 - 1] [i_29] [i_29 - 2] [i_29 + 1] [i_29] [i_29]);
                var_55 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(var_6))))));
                var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) arr_49 [i_29 + 1] [i_29 - 1] [i_29 - 1] [i_29 - 3] [i_29 - 3] [i_29 - 1]))));
            }
            for (long long int i_30 = 3; i_30 < 16; i_30 += 2) 
            {
                arr_109 [i_17] [i_18] [i_30] = ((/* implicit */short) ((_Bool) arr_30 [i_17] [i_18] [i_30 - 2] [i_30] [i_17] [i_30] [i_30]));
                var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 507462658)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_17] [i_18]))) : (var_14))))) ? (((((/* implicit */_Bool) arr_106 [i_17] [i_30 + 1])) ? (((/* implicit */long long int) arr_16 [i_30 - 3])) : (arr_5 [i_17] [i_30 + 1] [i_30]))) : (((((/* implicit */_Bool) min((-6749626461874358260LL), (6221441071910366943LL)))) ? (min((((/* implicit */long long int) arr_86 [i_30] [(short)6] [i_18] [i_18] [i_17] [i_17] [i_17])), (-3527568314164971665LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_97 [i_17] [i_17] [i_18] [i_17])))))))));
            }
        }
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            var_58 = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_5)))))), (arr_16 [i_17])));
            /* LoopNest 3 */
            for (unsigned int i_32 = 0; i_32 < 17; i_32 += 1) 
            {
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    for (short i_34 = 2; i_34 < 14; i_34 += 4) 
                    {
                        {
                            arr_120 [i_34] [i_31] [i_32] [i_31] [i_17] = ((/* implicit */unsigned int) min((((/* implicit */short) ((arr_13 [i_17] [i_32] [i_33] [i_34 + 3]) >= (arr_70 [i_17] [i_31] [i_17] [i_33] [i_34 - 1] [i_33])))), (((short) arr_28 [11LL] [i_34 - 2] [i_34] [i_34 + 2] [i_34 - 1] [i_34 + 3] [i_34 + 3]))));
                            var_59 = ((/* implicit */int) (~(min((((/* implicit */long long int) arr_70 [i_34 - 1] [i_34 + 3] [i_34 + 2] [i_34 + 3] [i_34 - 2] [i_34])), (((((/* implicit */long long int) arr_62 [i_31] [i_33])) & (1406868981806633363LL)))))));
                            var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_81 [i_17] [i_17] [i_32] [i_32] [i_33] [i_34 + 3]))))))) ? (((((/* implicit */_Bool) arr_2 [i_34 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_34 - 1] [i_34 - 2] [i_34 - 2] [i_34 - 1] [i_34 - 1] [i_34 - 2]))) : (max((var_7), (((/* implicit */long long int) var_15)))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) var_6)))))))));
                            arr_121 [i_17] [i_31] [i_32] [(short)13] [i_31] [i_33] [i_17] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_30 [i_34 - 2] [i_34 - 2] [i_34 - 2] [i_34 - 2] [i_34] [i_34 + 1] [i_34])) ? (((/* implicit */int) arr_30 [i_34 - 2] [i_34 - 2] [i_34 - 2] [i_34 - 2] [i_34 - 2] [i_34 + 1] [i_34 + 1])) : (((/* implicit */int) arr_42 [i_34 - 2] [i_34 - 2] [i_34 - 2] [i_34] [i_34 + 2] [i_34 + 1] [i_34 + 2]))))));
                            var_61 = (((!(((/* implicit */_Bool) ((((-1829720916) + (2147483647))) >> (((507462653) - (507462623)))))))) ? (arr_20 [i_34 - 2] [i_34 + 1] [i_34 + 1] [i_34 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_31] [i_31] [i_34] [i_34 + 2])) ? (((/* implicit */int) arr_12 [i_17] [i_34] [i_34 + 3] [i_34 + 2])) : (((/* implicit */int) arr_30 [i_17] [i_17] [i_34 + 2] [i_34 + 1] [i_34 + 3] [i_34 - 1] [i_34 - 2]))))));
                        }
                    } 
                } 
            } 
            arr_122 [i_31] [i_31] [i_17] = ((/* implicit */int) arr_2 [i_17]);
            var_62 = ((/* implicit */unsigned long long int) (-(min((min((((/* implicit */int) (_Bool)1)), (-507462662))), (arr_62 [i_17] [i_31])))));
        }
    }
    for (short i_35 = 0; i_35 < 17; i_35 += 4) /* same iter space */
    {
        var_63 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_69 [i_35] [i_35] [i_35]) ? (((/* implicit */int) arr_69 [i_35] [i_35] [i_35])) : (((/* implicit */int) arr_69 [i_35] [i_35] [i_35]))))) && (min((arr_69 [(_Bool)1] [i_35] [i_35]), (arr_69 [i_35] [i_35] [i_35])))));
        var_64 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_104 [i_35] [i_35] [i_35]))))));
    }
    for (short i_36 = 0; i_36 < 17; i_36 += 4) /* same iter space */
    {
        var_65 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_20 [i_36] [i_36] [i_36] [i_36])) ? (arr_20 [i_36] [i_36] [14U] [i_36]) : (arr_20 [i_36] [i_36] [i_36] [i_36])))));
        arr_128 [i_36] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_52 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36])) ? (((/* implicit */long long int) (+(arr_58 [i_36])))) : (arr_20 [i_36] [i_36] [i_36] [i_36])))));
    }
    var_66 &= ((/* implicit */unsigned short) var_17);
}
