/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33328
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 *= ((/* implicit */signed char) var_12);
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((long long int) arr_0 [i_0 - 1])), (((/* implicit */long long int) arr_0 [i_0 - 1]))));
        arr_3 [(short)10] = ((/* implicit */signed char) max((((9223369837831520256LL) * (((/* implicit */long long int) ((((/* implicit */int) (signed char)-112)) / (((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12)) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (short)240)))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) << ((((+(var_9))) - (51936483U)))))), (max((((((/* implicit */_Bool) var_10)) ? (var_7) : (var_7))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_9 [i_1] [i_2] [i_1 - 1])), (arr_6 [i_1]))))))));
            arr_11 [i_2] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2]))));
        }
        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))));
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */unsigned short) ((arr_9 [i_3] [i_3 - 1] [i_3 - 1]) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_5 [i_3])))))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_24 [i_3 - 1] [i_4] [(short)5] [i_4 + 1])) : (((/* implicit */int) (short)32749))));
                        arr_28 [i_5] [i_4] [i_3] = (+(((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6106598780297873749LL))));
                        arr_29 [i_3] [i_3] = ((/* implicit */unsigned short) ((arr_27 [i_3 - 1] [3LL] [i_3] [i_4] [i_5] [(unsigned short)6]) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_27 [i_6] [i_5] [i_5] [i_4] [i_4] [i_3 - 1]))));
                        arr_30 [i_3] [(unsigned short)3] [i_4 + 1] [i_4 + 1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)21952)) <= (((/* implicit */int) ((signed char) arr_23 [i_5] [i_5])))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (short i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                arr_33 [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                arr_34 [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) var_11);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_41 [i_3 - 1] [i_3 - 1] [i_8] [i_3 - 1] [i_3] [i_3] = ((/* implicit */_Bool) ((arr_38 [i_4] [i_8] [i_10]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            var_16 *= ((/* implicit */_Bool) arr_40 [(short)12] [i_8]);
                        }
                    } 
                } 
                arr_42 [i_8] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)28415)) ? (((/* implicit */int) arr_39 [i_4 + 1] [i_8])) : (((/* implicit */int) var_10))))));
            }
            for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_12 = 2; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    arr_47 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] = ((/* implicit */short) (unsigned short)65532);
                    var_17 *= ((/* implicit */signed char) (((+(var_1))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)28415)) >= (((/* implicit */int) (unsigned short)9))))))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 2; i_13 < 10; i_13 += 2) 
                    {
                        arr_51 [(unsigned short)6] [i_13] [i_11] [i_12 + 1] [i_12 + 1] [(short)4] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((_Bool) var_9)) ? (((long long int) arr_40 [i_13] [i_13])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_12 + 2] [i_4 - 1] [i_3]))) <= (arr_12 [i_3]))))))))));
                    }
                }
                for (unsigned short i_14 = 2; i_14 < 11; i_14 += 4) /* same iter space */
                {
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-248)) ? (((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */long long int) 4294967265U)) : (6106598780297873764LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
                    arr_56 [i_3] [i_3 - 1] [i_3] = (unsigned short)35278;
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_3 - 1] [i_4] [i_11] [(signed char)2])) ? (((/* implicit */int) ((((/* implicit */int) arr_49 [i_3] [(signed char)4] [i_3] [i_3] [i_3])) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_11)))))));
                    var_21 *= ((/* implicit */_Bool) arr_55 [i_3] [i_3] [i_3] [i_3]);
                }
                for (unsigned short i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    arr_59 [i_15] [i_11] [i_4] [i_4 + 1] [i_3] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-17710))));
                    arr_60 [i_3] [i_4] [i_11] [i_4] = arr_7 [i_3 - 1] [i_15] [i_11];
                }
                arr_61 [i_3] [i_3 - 1] [i_3] = ((/* implicit */_Bool) arr_39 [(signed char)10] [(signed char)10]);
            }
            for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_17 = 2; i_17 < 12; i_17 += 3) 
                {
                    arr_67 [i_17] [i_16] [i_16] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    arr_68 [i_3] [i_3] [i_3] [i_16] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_3 - 1] [i_4 - 1] [i_16] [i_17 - 2]))));
                    arr_69 [i_4] [i_4] [i_16] [i_4] = ((/* implicit */_Bool) ((short) arr_57 [i_17 - 2]));
                    arr_70 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3])) - (((/* implicit */int) arr_7 [i_17 - 2] [i_17] [i_17]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_48 [i_3] [i_3] [i_4 + 1] [i_3] [i_3])) >= (((/* implicit */int) arr_37 [i_17] [i_4 + 1] [i_3]))))) : (((/* implicit */int) arr_27 [i_3] [i_3] [(signed char)1] [i_17] [i_3 - 1] [i_17 - 2]))));
                }
                /* LoopSeq 2 */
                for (signed char i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    arr_74 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [(signed char)0] [i_3 - 1] [(_Bool)1] [i_3])) / (((/* implicit */int) arr_45 [i_3] [i_3 - 1] [i_3 - 1] [(signed char)2]))));
                    var_22 *= ((/* implicit */short) ((arr_55 [i_3] [i_4] [i_16] [i_3]) > (((/* implicit */long long int) ((((/* implicit */_Bool) (short)6451)) ? (((/* implicit */int) arr_53 [i_18] [6U])) : (((/* implicit */int) arr_32 [i_18] [i_4] [i_3])))))));
                }
                for (signed char i_19 = 2; i_19 < 11; i_19 += 1) 
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) (signed char)103)))))));
                    arr_77 [i_3] [i_16] [i_16] [i_16] [(short)9] [12U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_54 [i_19 - 1] [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) (unsigned short)52017))));
                    arr_78 [i_3] [i_3] [i_3] [i_3] [i_3] [i_16] = ((/* implicit */signed char) ((((arr_7 [i_3] [i_4 - 1] [i_16]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0)))) << (((((long long int) arr_38 [i_19] [(unsigned short)8] [i_3])) - (2950389908LL)))));
                    arr_79 [i_16] = ((/* implicit */signed char) var_4);
                }
                arr_80 [i_16] [i_16] [i_3] = ((/* implicit */signed char) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_16] [(signed char)11] [i_16] [i_3] [i_16])))))) : (((var_12) ? (((/* implicit */long long int) arr_64 [(signed char)3] [i_4] [i_16])) : (4733435095674676958LL)))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_3 - 1])) * (((/* implicit */int) var_10)))) < (((/* implicit */int) arr_57 [i_16])))))));
            }
        }
        for (unsigned short i_20 = 0; i_20 < 13; i_20 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)9101)) && (((/* implicit */_Bool) arr_25 [i_20] [i_20] [i_20])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13522)) && (var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_20] [i_20])))))));
            arr_83 [(unsigned short)1] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-12))));
        }
    }
    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [(signed char)4] [(_Bool)1] [(unsigned short)0]))))) + (((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) || (arr_36 [i_21] [i_21 - 1] [i_21] [i_21]))))));
        /* LoopNest 2 */
        for (unsigned short i_22 = 0; i_22 < 13; i_22 += 3) 
        {
            for (unsigned short i_23 = 3; i_23 < 11; i_23 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_24 = 0; i_24 < 13; i_24 += 3) 
                    {
                        for (signed char i_25 = 1; i_25 < 12; i_25 += 4) 
                        {
                            {
                                arr_96 [i_21] [i_22] [(short)3] [i_24] [i_21] [i_24] = ((/* implicit */unsigned short) var_10);
                                arr_97 [i_21] [i_21] [i_21] [i_21] [i_22] [i_21] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) min((arr_86 [i_25]), (((/* implicit */short) arr_57 [i_22]))))))), (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) min((var_27), ((!(((/* implicit */_Bool) var_0))))));
                    arr_98 [i_22] [i_23] [(signed char)12] [i_22] = var_4;
                }
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) max((((/* implicit */int) var_5)), (min((((/* implicit */int) (unsigned short)52015)), (((((/* implicit */int) (unsigned short)13506)) / (((/* implicit */int) var_5))))))));
}
