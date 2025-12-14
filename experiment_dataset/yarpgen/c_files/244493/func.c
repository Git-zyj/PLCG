/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244493
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)12038)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_1 [i_0])))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1390009572U)) ? (((/* implicit */int) (unsigned short)53497)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) -1LL)) ? (var_5) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) && (((/* implicit */_Bool) arr_1 [i_0])))))) : (-1LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) max((var_7), (arr_1 [i_0])))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (-11LL) : (((/* implicit */long long int) arr_1 [i_0]))))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_15 = min((((/* implicit */unsigned char) min((arr_4 [i_1]), (arr_4 [i_1])))), (var_9));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_7) : (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_2 [8])) ^ (((/* implicit */int) arr_4 [i_1])))))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_1]) : (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((max((var_7), (((/* implicit */unsigned int) var_6)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))) : (max((((/* implicit */long long int) arr_3 [i_1])), (min((((/* implicit */long long int) var_11)), (0LL)))))));
        arr_5 [i_1] = (_Bool)1;
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) var_2)))) ? (-1) : (((/* implicit */int) var_9))));
            var_19 = ((/* implicit */_Bool) var_9);
        }
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2495738584U)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (short)-17322)))) << (((((var_4) + (2147483647))) >> (((/* implicit */int) var_6))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) ((arr_11 [i_2] [i_4] [i_4]) >= (((/* implicit */unsigned int) var_4))))), (arr_13 [i_2] [i_4]))))));
            var_21 ^= ((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1] [i_2]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 3; i_5 < 14; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (var_4)))));
                    var_23 = ((/* implicit */long long int) (~(var_7)));
                }
                for (signed char i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                {
                    arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2 + 1])) > ((+(((/* implicit */int) var_8))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        arr_28 [(signed char)5] [i_4] [i_4] [i_4] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17322))) : (546250556U))) : (((((/* implicit */_Bool) 2904957751U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [5U] [i_4] [(unsigned short)3] [i_7] [i_8]))) : (arr_21 [i_2] [i_2] [i_5])))));
                        var_24 = ((/* implicit */unsigned long long int) 0LL);
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) > (1484681459264796692ULL))))) : (((((/* implicit */_Bool) 1390009544U)) ? (7976177805541395212ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64)))))));
                        var_26 = (signed char)22;
                        arr_29 [i_8] [10] [i_5] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_27 [i_2] [i_4] [15LL] [(unsigned short)8] [i_4]);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                    {
                        var_27 = (~(((/* implicit */int) arr_9 [i_2] [i_2] [i_2])));
                        arr_33 [i_2] [i_4] [i_2] [i_7] [i_7] = ((/* implicit */unsigned int) -5143380903775268411LL);
                        var_28 = arr_0 [i_5] [6U];
                        var_29 = ((/* implicit */int) 150295564U);
                    }
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        arr_36 [i_2] [i_4] [i_5] [i_7] [i_10] |= ((/* implicit */signed char) ((1484681459264796683ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-49)))))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? (var_3) : (((/* implicit */int) arr_24 [i_2] [i_2 + 1] [i_2 + 1] [i_5 - 3]))));
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_2 + 1] [6U] [i_2] [(unsigned char)8] [i_2])) ? (((/* implicit */int) arr_37 [i_2 + 1] [9] [9] [i_2] [i_2])) : (var_3)));
                    arr_40 [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_2] [i_4] [i_5 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]))) : (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_32 = ((/* implicit */unsigned int) (unsigned char)82);
                    arr_41 [i_11] = ((/* implicit */unsigned char) (signed char)-54);
                }
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)118)) || (((/* implicit */_Bool) var_11))));
            }
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((((/* implicit */int) var_6)) < (((/* implicit */int) min((var_8), (var_11))))))));
                var_35 = ((/* implicit */short) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [17U] [i_4] [i_12]))))))));
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_2] [i_2] [i_4] [(short)1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -2034625608))))) ? (max((0U), (arr_32 [i_4]))) : (max((arr_39 [i_12] [i_12] [i_12] [i_2]), (arr_39 [i_2] [i_4] [i_12] [i_2])))));
            }
        }
        var_37 = ((/* implicit */unsigned char) ((((max((var_10), (((/* implicit */long long int) (short)28107)))) <= (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [i_2] [i_2] [(_Bool)1] [(_Bool)1] [(short)17]), ((unsigned char)183))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)9619)) + (((arr_2 [i_2]) ? (var_3) : (((/* implicit */int) (unsigned char)161))))))) : (((((/* implicit */unsigned long long int) var_4)) / (var_5)))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
    {
        var_38 |= ((/* implicit */unsigned long long int) var_9);
        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)35274))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) arr_26 [i_13]))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)45)))))))) : (((((/* implicit */_Bool) arr_18 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (max((((/* implicit */unsigned long long int) arr_9 [i_13] [i_13] [i_13])), (var_2))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))))))))));
    }
    for (short i_14 = 3; i_14 < 15; i_14 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_40 = ((/* implicit */unsigned short) max((var_40), (arr_48 [(unsigned short)6])));
            var_41 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_14 + 2] [i_14 - 3] [i_14 - 1])))))) | (max((arr_11 [i_14] [i_14] [i_14]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_15] [i_14])))))))));
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_42 -= ((/* implicit */unsigned int) arr_48 [i_14]);
            arr_56 [i_14] = ((/* implicit */signed char) ((var_3) < (((/* implicit */int) arr_48 [i_14 - 2]))));
        }
        var_43 *= ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (max((((/* implicit */unsigned char) var_12)), (var_0)))))) + (((/* implicit */int) arr_2 [(unsigned char)11]))));
        var_44 = 2753386416U;
        var_45 = ((/* implicit */signed char) (unsigned char)44);
    }
    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_19 = 0; i_19 < 23; i_19 += 2) /* same iter space */
            {
                var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)26))))) == (min((arr_63 [i_17] [i_17] [i_19] [i_19]), (((/* implicit */unsigned int) var_12)))))))) != (((((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) (short)-16590)))) ? ((+(arr_62 [i_17] [i_17] [i_19] [i_17]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) var_6))))))))))));
                var_47 = ((/* implicit */unsigned int) var_5);
            }
            for (signed char i_20 = 0; i_20 < 23; i_20 += 2) /* same iter space */
            {
                arr_67 [i_17] [i_18] [i_18] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13))))))) || (((/* implicit */_Bool) (-((-(((/* implicit */int) var_11)))))))));
                arr_68 [i_17] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */unsigned int) ((arr_59 [i_18] [i_20]) ? (((/* implicit */int) arr_65 [i_17] [10U] [i_20] [i_20])) : (((/* implicit */int) var_1))))) : (arr_62 [i_17] [i_17] [i_17] [i_17])))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_65 [i_17] [i_17] [i_17] [i_17])) < (((/* implicit */int) arr_65 [i_17] [(short)2] [i_17] [i_17])))) ? (max((((/* implicit */unsigned long long int) (signed char)-109)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_63 [i_17] [i_17] [i_17] [i_17]) > (var_7))))))))));
                /* LoopSeq 2 */
                for (int i_21 = 3; i_21 < 22; i_21 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_48 ^= ((/* implicit */_Bool) var_8);
                        var_49 = ((/* implicit */unsigned int) arr_70 [(signed char)10] [8U] [(signed char)10] [i_17] [i_17]);
                    }
                    for (int i_23 = 3; i_23 < 21; i_23 += 3) 
                    {
                        var_50 = ((/* implicit */signed char) arr_75 [i_20]);
                        var_51 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_0))))), (arr_73 [i_23] [i_21] [(signed char)9] [i_18] [i_18] [(signed char)10] [(signed char)10])))) <= (((((/* implicit */_Bool) arr_70 [i_21] [i_21] [i_21] [i_21 - 1] [i_21])) ? (arr_70 [i_21] [i_21] [i_21] [i_21 - 1] [i_21]) : (var_2)))));
                        arr_77 [i_17] [i_17] [i_23] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                    }
                    var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_7)) : (((var_10) / (((/* implicit */long long int) ((/* implicit */int) (signed char)93))))))), (arr_73 [i_17] [i_17] [i_17] [16U] [i_17] [i_17] [i_17]))))));
                    var_53 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                }
                for (int i_24 = 3; i_24 < 22; i_24 += 3) /* same iter space */
                {
                    var_54 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_24 - 1] [i_24 + 1] [i_24 - 3] [i_24 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5)))) || ((!(((/* implicit */_Bool) var_10)))));
                    var_55 = arr_78 [i_24 - 3] [i_24 + 1];
                }
                var_56 = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (max((((/* implicit */unsigned int) var_9)), (1475511523U)))))));
            }
            var_57 = ((/* implicit */long long int) ((((998908726U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_75 [i_17])) ? (((/* implicit */int) arr_79 [(signed char)22] [i_18])) : (2034625607)))))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        }
        for (unsigned int i_25 = 1; i_25 < 20; i_25 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_26 = 0; i_26 < 23; i_26 += 4) 
            {
                for (int i_27 = 2; i_27 < 19; i_27 += 1) 
                {
                    {
                        arr_88 [i_17] [(unsigned char)21] [i_26] [(unsigned char)21] [i_25] [i_25] = ((/* implicit */unsigned int) arr_86 [i_27] [i_27] [22] [i_27 + 2] [i_27 - 1] [i_27 + 3]);
                        var_58 = ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_57 [i_25 - 1])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62793)) ? (((/* implicit */int) arr_85 [i_27] [i_26] [i_25 - 1] [i_17])) : (2147483647)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_17]))) ^ (arr_70 [(_Bool)1] [i_25 - 1] [i_25 + 3] [i_25] [(unsigned char)15]))))));
                        var_59 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_85 [i_27 + 2] [i_26] [i_25] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_7)))), (arr_71 [i_17] [i_25 + 3])))));
                        var_60 = ((/* implicit */signed char) (+(max(((((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_11))))));
                        arr_89 [i_25] [i_27 - 1] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) 2819455757U)))), ((_Bool)1)));
                    }
                } 
            } 
            var_61 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_79 [i_17] [i_25 + 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_79 [i_17] [i_17])) ? (((/* implicit */int) arr_79 [i_17] [i_17])) : (((/* implicit */int) arr_79 [i_25 + 3] [i_25 - 1]))))) : (arr_71 [i_17] [i_17])));
        }
        for (int i_28 = 0; i_28 < 23; i_28 += 1) 
        {
            arr_94 [i_17] [i_28] [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_57 [i_17])))) ? (((/* implicit */int) ((((/* implicit */int) ((arr_64 [i_28] [(unsigned short)17] [i_17]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) == (((/* implicit */int) ((((/* implicit */int) arr_75 [i_17])) <= (((/* implicit */int) var_1)))))))) : (((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_69 [i_17] [i_17] [i_28])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_61 [i_28])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
            arr_95 [i_17] [(unsigned char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)54209)) ? (var_5) : (((/* implicit */unsigned long long int) 2034625607)))), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_9)))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
        }
        var_62 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2819455785U)) ? (((((/* implicit */_Bool) (unsigned char)44)) ? (arr_70 [(unsigned char)8] [i_17] [i_17] [i_17] [i_17]) : (arr_70 [i_17] [(signed char)2] [i_17] [i_17] [i_17]))) : (max((((/* implicit */unsigned long long int) arr_84 [18U] [i_17])), (arr_70 [i_17] [i_17] [i_17] [i_17] [i_17])))));
        arr_96 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) ((arr_76 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) == (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)48)))))))) : (((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)33643)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
    }
}
