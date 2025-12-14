/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27473
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
    var_18 = ((/* implicit */int) var_2);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) (short)-25667);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_20 = ((int) ((long long int) arr_2 [i_3] [i_1]));
                        arr_10 [i_1] [i_2] [i_2] [3LL] [(unsigned char)5] [i_1] = ((/* implicit */short) ((arr_7 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 2]) == (arr_7 [i_3 + 1] [i_3] [i_3 + 3] [i_3 - 2])));
                        arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) (unsigned short)33468))));
                    }
                } 
            } 
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1991335316U)) ? (1U) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) : (((unsigned int) var_5))));
        }
        for (int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_4] = (short)21770;
            arr_16 [i_4] = ((/* implicit */unsigned int) arr_5 [i_4] [i_4]);
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))))))));
                            var_22 = ((/* implicit */long long int) ((unsigned int) arr_14 [i_4] [i_4]));
                        }
                    } 
                } 
                arr_24 [i_4] [0] [11U] = ((/* implicit */short) 9223372036854775807LL);
                arr_25 [i_4] = ((/* implicit */int) var_17);
            }
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 624649187U)) ? (((/* implicit */int) arr_6 [i_0] [i_4])) : (((/* implicit */int) var_13)))))));
        }
        arr_26 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [12U])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [(short)10] [i_0] [i_0] [(short)10]))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_24 = ((/* implicit */long long int) var_16);
            /* LoopSeq 2 */
            for (unsigned int i_9 = 3; i_9 < 12; i_9 += 3) 
            {
                var_25 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9 - 3] [i_9 - 1] [i_9 - 2] [i_0]))) - (var_3)));
                /* LoopSeq 3 */
                for (long long int i_10 = 1; i_10 < 12; i_10 += 3) /* same iter space */
                {
                    arr_34 [i_9] [12U] [5U] [i_8] [i_9] = ((/* implicit */signed char) (short)13566);
                    arr_35 [i_9] [i_9 - 3] = ((/* implicit */short) ((long long int) arr_18 [i_9] [i_10 + 1] [i_9]));
                }
                for (long long int i_11 = 1; i_11 < 12; i_11 += 3) /* same iter space */
                {
                    arr_40 [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) ((short) arr_27 [i_9 - 2]));
                    arr_41 [i_0] [i_0] [i_8] [i_0] [i_9] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_8] [i_9])) ? (((/* implicit */int) var_9)) : (arr_5 [i_9] [i_9])));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_9])) ? (((((/* implicit */int) (short)8523)) + (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_18 [i_9] [i_11] [i_9]))));
                }
                for (long long int i_12 = 1; i_12 < 12; i_12 += 3) /* same iter space */
                {
                    var_27 = 339292606;
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        arr_47 [i_0] [i_8] [i_8] [i_9] [i_8] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((1770804264U) % (((/* implicit */unsigned int) -621928140))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_13] [i_9]))) : ((-(var_4)))));
                        arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */short) 1968777874180202139LL);
                        var_28 &= ((/* implicit */unsigned int) ((long long int) 0LL));
                    }
                }
                arr_49 [i_0] [i_8] [4U] [i_9] = ((/* implicit */short) var_11);
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 68386810U)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)962))) * (594498839U)))) : ((+(arr_19 [i_0] [i_0])))));
                arr_50 [(unsigned short)11] [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((unsigned short) var_10));
            }
            for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                var_30 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (arr_46 [i_0] [i_0] [i_0] [i_8] [i_8] [i_14] [(signed char)7]) : (2051234509U))));
                var_31 = ((/* implicit */int) ((2738118577900053587LL) | (((/* implicit */long long int) (~(var_11))))));
                /* LoopSeq 1 */
                for (long long int i_15 = 1; i_15 < 11; i_15 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) /* same iter space */
                    {
                        var_32 = ((((/* implicit */_Bool) (short)-7806)) ? (((/* implicit */int) arr_18 [i_15] [i_14] [i_15])) : (((/* implicit */int) arr_18 [i_15] [(short)13] [i_15])));
                        var_33 = (i_15 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_0] [i_15] [8] [i_8])) >> (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) + (var_15))) - (5570335102372197527LL)))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_36 [i_0] [i_15] [8] [i_8])) + (2147483647))) >> (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) + (var_15))) - (5570335102372197527LL))))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [3LL] [i_15 + 3] [i_15] [i_15 + 3] [8])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_15)));
                    }
                    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) /* same iter space */
                    {
                        arr_63 [i_15] = (-(arr_42 [i_0] [i_8] [4LL] [i_15 + 1]));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_17] [i_17] [i_15 + 3] [i_14] [i_14] [i_14])) ? (var_3) : (((/* implicit */unsigned int) 2147483647))));
                        var_36 = ((/* implicit */unsigned int) arr_52 [i_17]);
                    }
                    arr_64 [i_15] [i_8] = ((/* implicit */unsigned int) arr_32 [i_15]);
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((arr_39 [i_0] [i_0] [i_14]) >> (((arr_46 [i_0] [i_0] [i_14] [i_0] [9LL] [i_0] [i_0]) - (3218999258U))))))));
                }
            }
            arr_65 [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1416582705)) ? (-196075315) : (arr_57 [i_8] [i_8] [i_0] [12LL] [i_0])));
            /* LoopSeq 1 */
            for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
            {
                var_38 += ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65535))));
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 14; i_19 += 3) 
                {
                    arr_72 [i_19] [i_19] [i_8] [i_19] = ((/* implicit */short) var_10);
                    arr_73 [i_18] [(unsigned short)11] [i_19] [i_18] [i_18] [(signed char)2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)2034)) : (((/* implicit */int) (unsigned char)230)))) > (((/* implicit */int) (short)29100))));
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((((/* implicit */_Bool) var_5)) ? (((95462004U) % (((/* implicit */unsigned int) 360154848)))) : (((/* implicit */unsigned int) arr_4 [i_8]))))));
                    arr_74 [i_0] [i_0] [i_0] [i_19] [i_18] [11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [2] [i_19] [i_19])) ? (((var_3) / (((/* implicit */unsigned int) 22)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [(short)3] [(short)3] [i_8] [i_19] [i_18])))));
                }
                /* LoopSeq 3 */
                for (long long int i_20 = 0; i_20 < 14; i_20 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)133)) ? (arr_78 [i_21] [i_20] [i_18] [i_0] [i_0]) : (arr_78 [(unsigned short)9] [i_20] [i_18] [i_8] [i_0])));
                        arr_82 [i_0] [i_0] [i_0] &= ((/* implicit */int) (((~(arr_28 [(short)3] [(signed char)4]))) == (((/* implicit */unsigned int) var_11))));
                        arr_83 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (signed char)-1))) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned short)50826)))))));
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (short)16832)) ? (((/* implicit */long long int) arr_81 [i_0] [i_0] [i_0] [i_0])) : (var_7)));
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [8] [i_0] [i_0] [i_0] [i_20]))) ^ (var_12)))) ? (arr_58 [i_21] [i_21] [i_20] [i_21] [i_21]) : (-1809591173))))));
                    }
                    for (unsigned short i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned int) 593710274);
                        var_44 = ((/* implicit */unsigned short) arr_43 [i_0] [i_0]);
                    }
                    arr_86 [i_0] [i_0] [7] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) arr_39 [i_8] [i_18] [i_20])) != (((((/* implicit */_Bool) arr_85 [i_0] [i_0] [i_0] [i_0] [0] [i_0] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_6))))));
                }
                for (long long int i_23 = 0; i_23 < 14; i_23 += 3) 
                {
                    arr_89 [i_8] [i_18] [i_18] = ((/* implicit */unsigned short) ((unsigned int) arr_55 [i_0] [i_0] [i_8] [i_18] [i_23]));
                    var_45 = ((/* implicit */unsigned short) arr_62 [i_0] [i_8] [i_18] [i_18] [i_23] [i_23]);
                }
                for (int i_24 = 1; i_24 < 12; i_24 += 2) 
                {
                    var_46 = ((/* implicit */long long int) var_13);
                    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_8])))) ? (((((/* implicit */_Bool) arr_54 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_8 [i_8])) : (arr_5 [i_24] [i_8]))) : (((/* implicit */int) (signed char)127))));
                }
            }
        }
        arr_93 [7U] [8U] = ((/* implicit */long long int) arr_44 [i_0] [6] [i_0] [i_0] [4U]);
    }
    for (short i_25 = 0; i_25 < 14; i_25 += 1) /* same iter space */
    {
        arr_96 [i_25] &= ((/* implicit */short) (-(((/* implicit */int) ((signed char) arr_55 [i_25] [i_25] [i_25] [10] [i_25])))));
        var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_13 [i_25] [i_25] [9LL]))))) | (var_7))) >> (((((((/* implicit */int) arr_44 [i_25] [i_25] [i_25] [i_25] [8U])) - (((/* implicit */int) var_17)))) + (11281))))))));
        arr_97 [i_25] = ((/* implicit */unsigned char) var_17);
    }
    for (short i_26 = 0; i_26 < 14; i_26 += 1) /* same iter space */
    {
        arr_101 [i_26] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) >> (((((/* implicit */int) var_8)) - (114)))))) ? (max((arr_45 [1U] [i_26] [i_26] [i_26] [i_26]), (arr_88 [13] [i_26] [i_26] [i_26]))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) arr_59 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])) : (arr_45 [i_26] [10] [i_26] [i_26] [i_26])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (short)(-32767 - 1))))))) : (((((var_3) << (0U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_33 [i_26])) : (((/* implicit */int) (signed char)-108)))))))));
        var_49 = ((/* implicit */unsigned short) var_17);
        var_50 = ((/* implicit */unsigned short) -1760103590405777435LL);
    }
    for (short i_27 = 0; i_27 < 14; i_27 += 1) /* same iter space */
    {
        arr_104 [i_27] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) var_10))) ? (min((var_12), (((/* implicit */long long int) arr_87 [i_27] [i_27] [i_27] [i_27] [i_27])))) : (max((arr_100 [i_27]), (7794643823474860982LL))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -2090231923)) ? (((/* implicit */unsigned int) 2097151)) : (2578185028U))) == (((/* implicit */unsigned int) ((int) 67076096U)))))))));
        var_51 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_13)) >> (((arr_81 [i_27] [(signed char)2] [i_27] [i_27]) + (804726638))))))) >> (((((/* implicit */_Bool) arr_33 [i_27])) ? (((/* implicit */int) ((((/* implicit */_Bool) -4605614328841665570LL)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_16))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_28 = 0; i_28 < 10; i_28 += 3) /* same iter space */
    {
        arr_107 [0U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_69 [i_28] [i_28] [i_28] [i_28] [i_28])) : (var_12)))) ? (var_11) : ((~(112946124)))));
        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_78 [8] [1LL] [i_28] [(unsigned char)0] [12])))))));
    }
    for (unsigned short i_29 = 0; i_29 < 10; i_29 += 3) /* same iter space */
    {
        var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_31 [6U] [10U] [i_29] [i_29])) ? (586172727U) : (((/* implicit */unsigned int) arr_91 [i_29] [i_29] [i_29] [8LL])))), (((/* implicit */unsigned int) ((int) arr_31 [i_29] [(unsigned char)6] [(unsigned char)6] [i_29]))))))));
        var_54 = ((/* implicit */unsigned int) var_2);
    }
}
