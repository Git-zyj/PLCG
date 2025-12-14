/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44255
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_14 *= ((/* implicit */unsigned char) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            arr_15 [i_4] [i_3] [i_2] [i_2] [(unsigned char)16] [i_0] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2]);
                            var_15 &= ((/* implicit */unsigned short) 1639618870);
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */short) var_7);
                            arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (+((+(15309785939329372461ULL)))));
                        }
                        arr_20 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) arr_11 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]);
                    }
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_16 = (-(((unsigned int) (-(((/* implicit */int) (unsigned short)24619))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_0]))) ? (((/* implicit */long long int) max((arr_12 [i_0]), (arr_12 [i_0])))) : (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */long long int) arr_12 [i_0])) : (var_1)))));
                        arr_25 [i_6] [i_6] [i_6] [i_6] = var_13;
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_18 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (arr_2 [i_7] [i_1])))) : ((-(arr_6 [i_0] [i_7])))))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((arr_21 [i_7]) - (arr_21 [i_0]))) - (((/* implicit */long long int) 523466859U)))))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
                    }
                    var_20 = ((/* implicit */unsigned long long int) var_11);
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned int) (+(var_11)));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((unsigned int) (-(((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)254))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 19; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((((/* implicit */int) ((arr_8 [13ULL] [i_1] [i_0] [i_0] [i_11] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])))))) + ((-(((/* implicit */int) (unsigned char)25)))))), (((/* implicit */int) (unsigned short)15585)))))));
                                var_24 = ((/* implicit */unsigned char) max((var_13), (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_30 [i_0] [(unsigned char)18] [i_0] [i_0] [i_0] [i_0])), ((unsigned short)15585)))), (((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_33 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) ((arr_4 [i_0]) ? (-1879773755) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [(unsigned short)20] [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : ((~(arr_22 [i_0] [i_0] [i_0] [i_0]))))))))));
                var_26 = ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                /* LoopSeq 3 */
                for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        var_27 |= var_8;
                        var_28 = ((/* implicit */unsigned long long int) ((int) max((arr_13 [i_13] [i_13] [i_1] [i_12] [i_1] [i_1] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_29 |= ((/* implicit */short) ((signed char) var_11));
                    }
                    /* vectorizable */
                    for (signed char i_14 = 2; i_14 < 20; i_14 += 1) 
                    {
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */unsigned char) var_2);
                        arr_46 [i_12] [i_1] = ((/* implicit */unsigned char) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_47 [(unsigned char)14] [i_12] [i_1] [i_12] [i_0] = (unsigned char)113;
                        var_30 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_1]))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        arr_52 [i_12] = ((/* implicit */int) ((unsigned int) ((unsigned int) 312886697U)));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */int) ((signed char) arr_10 [i_16] [9ULL] [1]));
                            arr_57 [i_12] [i_16] [18U] [i_12] [i_1] [i_12] = ((/* implicit */long long int) max((arr_55 [i_0] [i_1] [i_16] [i_15]), (-1501320365)));
                        }
                    }
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (arr_8 [i_12] [i_12] [i_1] [i_0] [i_0] [i_0])))) ? (arr_33 [i_12] [i_1] [i_1] [i_0]) : (arr_48 [i_12] [i_1] [i_1] [i_0]))))));
                    var_33 &= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_50 [i_1])), (var_13)))) != ((+(15846350981753196599ULL))))))));
                    arr_58 [i_0] [19ULL] [i_12] [i_12] = ((/* implicit */unsigned short) arr_17 [i_0] [i_1]);
                    arr_59 [i_12] [i_1] [i_12] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2761688180U)) - (4810128997735215739ULL)))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (arr_2 [i_0] [i_0]))), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_12]))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27698)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_8))))))))));
                }
                for (signed char i_17 = 2; i_17 < 19; i_17 += 2) 
                {
                    var_34 = ((/* implicit */unsigned short) ((unsigned int) -1614536068));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))) ^ (min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) var_0))))))) || (((/* implicit */_Bool) arr_56 [i_17] [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (unsigned char)39)))))), (max((523466859U), (((/* implicit */unsigned int) min((((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_17 - 2] [i_18] [i_18])), (arr_24 [i_0] [i_1] [i_17] [i_18]))))))));
                        var_37 ^= (~(max((arr_5 [i_17 + 2] [i_17]), (2382581268U))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) max((arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (!((_Bool)1))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_20 = 0; i_20 < 21; i_20 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_53 [i_17] [i_17 + 1] [i_17 - 2] [i_17] [i_17 - 1] [i_17 - 2])), (max((((/* implicit */unsigned int) (_Bool)1)), ((~(arr_48 [i_0] [i_1] [i_17] [i_19]))))))))));
                            var_40 = ((/* implicit */unsigned short) (-(0U)));
                            arr_73 [i_17] [i_17] [i_17 + 2] [i_17 - 2] [(unsigned char)17] [i_17] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) arr_43 [i_17] [i_17 + 1] [i_17 - 1] [i_17] [i_17 - 2])) : (((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_0]))))), ((-((~(var_11)))))));
                            var_41 += ((/* implicit */unsigned short) arr_61 [i_0] [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) /* same iter space */
                        {
                            arr_76 [i_0] [(unsigned char)8] [(unsigned char)3] = ((/* implicit */_Bool) (~(arr_60 [i_0] [i_1] [i_17 + 1] [i_19])));
                            var_42 += ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_34 [i_17 - 1]))) : (arr_69 [i_17] [i_17 + 2] [i_17] [i_17] [i_17 - 2] [i_17 - 2] [i_19]));
                        }
                        var_43 += ((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_1] [(_Bool)1] [i_19] [i_1]);
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((3146616366U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_0] [i_1] [i_17]))))))) ? (var_13) : (((/* implicit */unsigned int) max((((int) arr_68 [i_1] [i_1] [i_19] [i_19])), (((1949733861) & (((/* implicit */int) (short)-3692)))))))));
                    }
                    for (unsigned short i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        var_45 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_4)), (((((((/* implicit */_Bool) var_4)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))))) - (((((/* implicit */_Bool) 984807367136551691ULL)) ? (4062618669U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))))))));
                        arr_81 [i_22] [i_22] [i_22] [i_0] = ((/* implicit */int) var_10);
                        /* LoopSeq 3 */
                        for (unsigned int i_23 = 1; i_23 < 19; i_23 += 1) 
                        {
                            arr_84 [i_0] [i_1] [i_22] [i_0] [i_17] = ((/* implicit */unsigned int) arr_41 [i_0] [i_0] [i_17 - 2] [i_22]);
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_78 [i_23 + 2] [(unsigned char)19] [i_17 - 2] [i_17] [i_1] [i_0]))));
                            var_47 += arr_71 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)13];
                            var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((unsigned int) var_13)) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_6)))))))) >> (((((/* implicit */int) arr_66 [i_0] [i_0] [i_0] [i_0] [i_0])) + (33))))))));
                        }
                        for (unsigned char i_24 = 0; i_24 < 21; i_24 += 4) 
                        {
                            var_49 += ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_17 + 1] [i_1] [i_24])) ? (var_13) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_77 [i_24] [i_22] [i_17] [i_1]))))))), (((/* implicit */unsigned int) ((int) arr_77 [i_24] [i_17 - 1] [i_17] [i_17 + 2])))));
                            var_50 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)73)), (arr_55 [i_22] [i_22] [i_17 - 1] [i_17 + 2])))) ? (((((/* implicit */_Bool) arr_72 [i_0] [i_0])) ? (((/* implicit */long long int) max((var_0), (((/* implicit */int) (unsigned char)242))))) : (((((/* implicit */_Bool) 520093696ULL)) ? (arr_23 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_33 [i_0] [16ULL] [i_0] [i_0]))))), (arr_22 [i_24] [i_22] [i_1] [i_0])))));
                            var_51 = ((((max((((/* implicit */int) arr_86 [i_0])), (var_7))) & (((/* implicit */int) (!(((/* implicit */_Bool) 872688550U))))))) | (((/* implicit */int) (short)-14)));
                        }
                        for (unsigned char i_25 = 2; i_25 < 17; i_25 += 1) 
                        {
                            arr_89 [i_0] [i_25 + 1] [i_17] [i_22] [i_25] [i_17] [i_1] = ((/* implicit */signed char) ((int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 3422278718U))))), (max((arr_23 [i_0] [i_1]), (((/* implicit */long long int) var_8)))))));
                            var_52 = ((/* implicit */unsigned int) ((signed char) ((unsigned short) 3490359700U)));
                            var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) min((((/* implicit */int) min((arr_79 [i_0] [i_17] [i_17] [i_25 + 1] [i_25] [i_17 + 2]), (arr_79 [i_0] [i_0] [i_17] [i_25 + 2] [i_25] [i_17 + 2])))), (((((/* implicit */_Bool) arr_26 [i_17] [i_17 - 2] [i_25 + 2] [i_25])) ? (arr_26 [i_0] [i_17 + 1] [i_25 + 3] [(unsigned char)5]) : (arr_26 [i_0] [i_17 + 1] [i_25 + 2] [i_25]))))))));
                            var_54 ^= ((/* implicit */long long int) min((-1741110808), (((/* implicit */int) ((arr_37 [i_25 - 1] [i_25 + 1] [9U] [i_25 + 3] [i_17 + 1]) >= (arr_37 [i_25 + 2] [i_25] [i_25] [i_22] [i_17 + 1]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 0; i_26 < 21; i_26 += 1) 
                    {
                        for (long long int i_27 = 0; i_27 < 21; i_27 += 1) 
                        {
                            {
                                var_55 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_48 [i_1] [i_17 - 1] [i_17 + 1] [i_17])) - (min((arr_8 [i_17] [i_17 + 2] [i_17 - 1] [i_17 - 2] [i_27] [i_27]), (((/* implicit */unsigned long long int) (unsigned char)42))))));
                                arr_98 [i_17] [i_26] [i_17] [i_1] [i_0] = ((/* implicit */unsigned int) -7844620784011760886LL);
                                var_56 = ((/* implicit */unsigned short) arr_13 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]);
                                var_57 += ((/* implicit */unsigned char) arr_24 [i_0] [i_1] [i_17] [i_26]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_28 = 0; i_28 < 21; i_28 += 2) 
                {
                    arr_101 [i_28] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_92 [i_28] [i_28] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [6LL] [i_1] [i_28]))) : (872688564U)))) ? (((/* implicit */int) arr_51 [i_0] [(signed char)13] [i_28] [i_1])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))) <= (arr_33 [i_0] [i_0] [i_0] [i_0]))))));
                    var_58 = var_0;
                }
            }
        } 
    } 
    var_59 = ((/* implicit */int) var_8);
    var_60 = ((/* implicit */unsigned long long int) (unsigned char)120);
    var_61 &= ((/* implicit */int) ((signed char) var_9));
}
