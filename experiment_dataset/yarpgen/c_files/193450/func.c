/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193450
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
    var_20 = ((/* implicit */unsigned long long int) (-(2919234647U)));
    var_21 += ((/* implicit */signed char) (+(((max((((/* implicit */long long int) var_15)), (var_8))) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_16))) - (((((/* implicit */_Bool) var_9)) ? ((~(arr_0 [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
        var_22 = (((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [5]) : (arr_0 [i_0] [i_0]))))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) arr_1 [i_0 + 2]))))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned short)18)) == (((/* implicit */int) (unsigned short)15))))) + (((/* implicit */int) max(((unsigned short)0), ((unsigned short)65531)))))) : (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_13 [(_Bool)1] [i_1] [i_2] [i_2] = ((/* implicit */short) (((+(((((/* implicit */_Bool) arr_7 [i_1] [21LL])) ? (arr_12 [i_1]) : (((/* implicit */unsigned long long int) var_11)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_3 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) < (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_1] [i_1])))))))))));
                    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_3)), (arr_10 [i_1] [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_10 [(short)13] [i_2 + 2] [i_5] [i_4])))) < (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
                                arr_19 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)65535))));
                                arr_20 [i_5] [i_2] = ((/* implicit */unsigned short) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) arr_12 [i_1]);
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                for (unsigned char i_8 = 4; i_8 < 23; i_8 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_32 [i_1] [i_6] [i_1] [i_6] [i_9] = ((/* implicit */signed char) (+(max((max((((/* implicit */int) arr_16 [i_6] [i_1])), (2147483647))), (((/* implicit */int) arr_24 [(short)4] [(short)4] [14ULL] [i_8 - 3]))))));
                            var_27 = ((/* implicit */signed char) arr_23 [i_1] [i_6] [i_1]);
                            arr_33 [i_1] [i_9] [i_6] [i_8] [i_9] [(unsigned short)17] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned char)12))))), (arr_18 [i_8 - 3] [i_8 + 1] [i_8 + 1] [i_8 - 3] [i_8 - 2] [i_8 - 3] [i_6])));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)63)), ((unsigned short)65507)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65530)) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_1] [i_1]))) : (arr_30 [i_6] [i_8 - 4] [i_8] [i_6] [i_8]))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_9] [i_8]))))), (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */long long int) arr_29 [(short)12] [i_6] [i_7] [(short)12] [i_9] [i_6])) : (var_11))))))))));
                            var_29 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -8048265861552272596LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65513)))) & (var_9))) ^ (((/* implicit */int) var_4))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_30 &= ((/* implicit */unsigned short) arr_5 [i_10] [i_7]);
                            var_31 -= ((/* implicit */unsigned char) ((short) ((unsigned int) var_1)));
                            var_32 = ((/* implicit */signed char) (-(arr_14 [i_8] [i_8 - 1])));
                        }
                        var_33 += ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) - (((((max((arr_7 [i_1] [i_6]), (((/* implicit */long long int) arr_29 [18] [2] [i_7] [i_6] [i_6] [18])))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_7]))) : (arr_3 [i_1]))) - (197U)))))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */long long int) var_7);
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            var_35 *= (-(arr_18 [10LL] [i_1] [i_11] [i_1] [i_1] [i_1] [10LL]));
            /* LoopSeq 4 */
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                var_36 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)127)))) && (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (((unsigned int) var_9))))));
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_39 [i_1] [i_1] [i_12]))))))), (max((((/* implicit */unsigned long long int) max((arr_43 [i_1] [i_1] [i_11] [i_1]), (((/* implicit */int) arr_11 [i_12] [i_12]))))), (((((/* implicit */_Bool) var_6)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))))))))))));
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (-(var_11))))) ? (((/* implicit */int) arr_34 [i_1] [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_1] [i_1] [(_Bool)1] [i_12])))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_46 [17U] [i_1] [i_11] [i_13] = ((/* implicit */_Bool) arr_6 [i_1] [i_11] [i_13]);
                var_39 = ((/* implicit */unsigned long long int) arr_41 [i_1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    arr_51 [i_1] [i_1] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_39 [i_11] [i_1] [i_13])) : (((/* implicit */int) (unsigned short)65511))))) && (((/* implicit */_Bool) 4498545609517349696ULL))));
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((long long int) (unsigned short)55630));
                        var_41 += ((/* implicit */signed char) (-(((/* implicit */int) arr_47 [i_15]))));
                        arr_54 [i_1] [i_13] [i_13] [i_1] [i_13] [i_1] [i_1] = ((/* implicit */signed char) arr_47 [i_14]);
                        var_42 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))));
                    }
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (-(arr_30 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    var_44 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (unsigned short)55)) >= (((/* implicit */int) var_2))))));
                }
                for (unsigned short i_16 = 1; i_16 < 21; i_16 += 3) 
                {
                    arr_57 [i_1] [i_13] [i_16] = ((/* implicit */_Bool) arr_16 [i_13] [i_13]);
                    var_45 = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_16 + 3] [i_11]))));
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (arr_50 [i_1] [i_1] [i_13] [i_13])))) ^ (max((((/* implicit */int) arr_11 [i_13] [i_13])), (925343545)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)25)), (-477829350564704634LL)))) : (arr_12 [10ULL])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        var_47 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 16320))));
                        arr_60 [i_13] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_12);
                    }
                    arr_61 [i_1] [i_13] [i_16 + 1] = ((/* implicit */signed char) (((+(((((/* implicit */int) (unsigned short)65511)) + (((/* implicit */int) var_17)))))) <= (max((-1268928409), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_1] [i_11] [i_1]))))))));
                }
            }
            for (unsigned int i_18 = 2; i_18 < 22; i_18 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_9) : (((/* implicit */int) (signed char)63))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        var_49 -= ((/* implicit */unsigned long long int) (+(arr_66 [i_18 - 2] [i_18 - 2] [i_18 - 2] [i_19] [15U])));
                        arr_70 [i_1] [i_11] [i_18 - 1] [i_11] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_56 [i_1] [i_1] [i_11] [(unsigned short)22]))));
                        var_50 = arr_41 [i_1];
                        var_51 += ((/* implicit */unsigned char) var_0);
                    }
                    for (unsigned char i_21 = 3; i_21 < 21; i_21 += 2) 
                    {
                        arr_73 [i_1] [i_1] [i_11] [i_11] [i_1] [i_21 + 3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)65527)) ? (arr_29 [(_Bool)1] [i_11] [(_Bool)1] [i_19] [i_19] [i_21 - 3]) : (((/* implicit */int) arr_9 [(_Bool)1] [i_11])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_45 [i_1] [i_11] [i_19] [i_21]))))))), (max((((((/* implicit */long long int) arr_29 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] [i_19] [i_21] [i_21])) / (arr_38 [i_21 - 1]))), (((/* implicit */long long int) ((signed char) (signed char)-71)))))));
                        var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) (unsigned short)65535))));
                        var_53 = ((/* implicit */unsigned char) max(((-((~(arr_41 [i_1]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_12))))))));
                    }
                    var_54 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_64 [i_1] [i_1] [i_1] [i_1] [i_19]), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */int) arr_45 [i_18 - 1] [i_18] [i_18] [i_18 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_1])))))))), (max((((((/* implicit */_Bool) arr_71 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_62 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */short) var_17)))))))));
                }
                /* vectorizable */
                for (signed char i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    arr_78 [i_1] [i_22] [i_11] [i_22] [i_1] = ((/* implicit */unsigned int) (+(arr_68 [i_18] [i_18 - 2] [i_18 + 2] [i_18 + 1])));
                    var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_23 = 2; i_23 < 23; i_23 += 2) 
                    {
                        arr_81 [(unsigned char)12] [i_11] [i_18] [i_23] [(unsigned char)18] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_15))) ? (arr_56 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23]) : (((/* implicit */unsigned long long int) ((int) arr_22 [i_23])))));
                        var_56 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_18 + 1] [i_18 + 1] [i_18])) ? (((/* implicit */int) arr_25 [i_18 + 1] [i_18 + 1] [i_18])) : (arr_17 [i_18 + 1] [i_18 + 1] [i_18 - 2] [i_18 + 2] [i_18 - 2])));
                        var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) arr_65 [i_11] [i_11] [i_11]))));
                        var_58 += ((/* implicit */short) (~(((/* implicit */int) var_5))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_59 = ((/* implicit */_Bool) (-(((arr_55 [i_1] [i_1] [12] [i_1]) / (((/* implicit */long long int) arr_14 [i_1] [i_1]))))));
                        var_60 = ((/* implicit */int) min((var_60), (((/* implicit */int) (!(((arr_30 [i_1] [i_1] [i_1] [i_1] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) var_18))))))))));
                        var_61 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_38 [i_1]))))));
                        var_62 -= ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_8)))));
                    }
                    arr_84 [i_1] [i_22] [i_22] [i_1] [i_18 - 2] [i_11] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_18 [i_22] [19LL] [19LL] [i_11] [19LL] [19LL] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_22] [i_11] [i_11] [i_11] [i_11] [14LL]))) : (var_11)))));
                }
                var_63 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65510)) >> (((((/* implicit */int) (unsigned short)30346)) - (30322)))));
                arr_85 [i_1] [i_11] [i_18] = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_42 [i_1] [i_11] [i_18] [i_18 + 2]), (((/* implicit */short) arr_39 [20] [20] [i_18]))))) ? (((((/* implicit */_Bool) arr_82 [i_1] [(signed char)12] [(signed char)12] [7LL] [i_18])) ? (428131629U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_1] [(_Bool)1] [i_1] [i_1]))))) : (((/* implicit */unsigned int) arr_72 [i_1] [i_1] [i_18] [i_18 - 2])))), (((/* implicit */unsigned int) ((_Bool) max(((signed char)87), ((signed char)-1)))))));
            }
            for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_26 = 3; i_26 < 23; i_26 += 2) 
                {
                    for (int i_27 = 0; i_27 < 24; i_27 += 3) 
                    {
                        {
                            var_64 = ((/* implicit */signed char) var_8);
                            var_65 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_10 [i_1] [i_25] [i_1] [i_27]))))), (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_52 [i_11]))))))) * ((+(arr_56 [i_11] [i_26 - 3] [i_26] [(unsigned char)4])))));
                            arr_98 [i_1] [i_26] [i_1] [(signed char)9] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_71 [i_26 - 1] [i_26] [i_26] [i_26 - 3] [i_26]))) >> ((+(((/* implicit */int) arr_71 [i_26 - 1] [(signed char)8] [i_26 - 1] [i_26 - 3] [i_26]))))));
                        }
                    } 
                } 
                arr_99 [i_25] [i_11] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)11281), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_29 [4U] [16ULL] [i_25] [i_25] [i_11] [i_25]))))) : (max((arr_29 [(signed char)10] [i_11] [(signed char)10] [i_11] [i_11] [(signed char)10]), (arr_29 [(unsigned char)12] [i_11] [i_25] [i_1] [(unsigned char)12] [i_25])))));
            }
            arr_100 [5] = ((/* implicit */unsigned char) arr_82 [i_11] [i_11] [i_1] [i_1] [i_1]);
            var_66 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)22)))), (((/* implicit */int) arr_63 [i_1] [i_1] [(unsigned short)23]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65510)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (unsigned short)40059))))))) : (((((/* implicit */_Bool) ((arr_30 [i_11] [i_11] [i_11] [i_11] [i_11]) / (((/* implicit */long long int) ((/* implicit */int) arr_74 [(unsigned short)22] [(unsigned char)22] [(unsigned short)22] [(unsigned short)22] [(unsigned short)22] [i_1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1] [i_11] [i_1] [i_11] [i_1])) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_16))))) : (arr_66 [i_1] [i_1] [i_11] [i_1] [(unsigned char)13])))));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            var_67 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_45 [i_1] [i_1] [(unsigned char)7] [i_28])))));
            /* LoopSeq 1 */
            for (short i_29 = 0; i_29 < 24; i_29 += 3) 
            {
                var_68 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_95 [i_1])), (477829350564704634LL)))) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) arr_11 [i_1] [i_28]))));
                /* LoopSeq 1 */
                for (unsigned int i_30 = 0; i_30 < 24; i_30 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_31 = 2; i_31 < 23; i_31 += 3) 
                    {
                        arr_111 [7LL] [i_31] [i_29] [i_29] [7LL] = ((/* implicit */short) max((((((((/* implicit */int) arr_90 [i_1] [i_28] [i_1] [i_31])) >= (((/* implicit */int) arr_39 [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) var_18)) ? (-477829350564704648LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) (~(arr_3 [i_30]))))));
                        var_69 -= ((/* implicit */_Bool) (+(var_14)));
                    }
                    arr_112 [i_1] [i_1] [i_28] [(signed char)0] [i_30] [(signed char)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)-38)) & (((/* implicit */int) (unsigned short)30696)))), ((+(((/* implicit */int) arr_49 [i_1] [i_28] [i_28] [(unsigned char)11] [i_30]))))))) ? (var_1) : (((/* implicit */int) max((arr_59 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), ((signed char)16))))));
                }
            }
            var_70 = ((/* implicit */unsigned short) min((var_70), (((/* implicit */unsigned short) arr_29 [(short)16] [(short)16] [i_28] [i_28] [i_28] [(unsigned char)4]))));
        }
    }
}
