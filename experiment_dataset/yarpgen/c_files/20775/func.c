/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20775
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)51879))));
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0]))) ? (((7854221672858699057LL) - (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) (short)255)))))));
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) + (var_8)));
        var_12 = ((/* implicit */int) arr_4 [i_0] [(signed char)5]);
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (max((2023460783U), ((-(arr_8 [i_3] [i_3] [i_3] [i_3])))))));
        /* LoopSeq 3 */
        for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) ((((65535) % (((/* implicit */int) (_Bool)1)))) * (max((min((((/* implicit */int) (short)-17433)), (1308395676))), (((/* implicit */int) arr_7 [i_3] [i_3]))))));
            arr_18 [i_3] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_17 [i_4 + 1])), (((10520710715630373832ULL) >> (((((/* implicit */int) arr_9 [i_4] [i_3] [18] [i_4])) - (128)))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) arr_22 [i_3] [i_5]);
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) min((arr_15 [(signed char)0] [i_6] [i_7]), (((/* implicit */unsigned char) (_Bool)1))))) : ((-(((/* implicit */int) ((arr_6 [i_3]) > (-702224923264366686LL))))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */int) min((arr_21 [i_5]), (((/* implicit */long long int) (-((+(((/* implicit */int) arr_15 [i_3] [i_3] [i_3])))))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_31 [i_8] = ((/* implicit */short) -2540121988970499734LL);
            /* LoopSeq 3 */
            for (unsigned int i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) ((long long int) min((arr_23 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]), (((/* implicit */unsigned long long int) arr_34 [i_8] [i_9 + 1] [i_9 - 1] [i_9 - 1])))));
                arr_35 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_9 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (var_6))))) : (arr_21 [i_3]))));
                /* LoopSeq 2 */
                for (signed char i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    var_19 = ((/* implicit */signed char) var_2);
                    arr_39 [i_3] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) var_5);
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_20 = ((/* implicit */signed char) arr_0 [i_8]);
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_2 [i_3]))));
                }
                var_22 = ((/* implicit */int) max((arr_33 [i_3]), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)54744)) * (((/* implicit */int) arr_7 [i_3] [i_8])))) & (((/* implicit */int) ((unsigned short) 537165177U))))))));
            }
            for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                arr_44 [i_8] [i_8] [(signed char)10] = ((/* implicit */unsigned int) arr_37 [i_3] [i_3] [i_8] [0LL]);
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((arr_1 [i_3]) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [i_8])))) & (((/* implicit */int) min((var_3), (((/* implicit */signed char) arr_1 [i_12]))))))))));
                /* LoopSeq 4 */
                for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) 
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((((((/* implicit */long long int) ((/* implicit */int) arr_36 [(unsigned short)8] [i_3]))) / ((+(144080003703767040LL))))) << (((max((((/* implicit */unsigned long long int) arr_6 [i_8])), (max((((/* implicit */unsigned long long int) arr_48 [i_3] [i_8] [(unsigned short)3] [i_8] [i_13] [i_13])), (var_7))))) - (9825594310269595837ULL)))))));
                    arr_49 [i_8] = ((/* implicit */unsigned long long int) 2023460772U);
                    arr_50 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) -8484973825020911195LL))) ? (3361093771104812248ULL) : (((/* implicit */unsigned long long int) ((281474909601792LL) + (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_13 - 3]))))))));
                }
                for (unsigned char i_14 = 3; i_14 < 10; i_14 += 3) 
                {
                    var_25 *= ((/* implicit */long long int) var_4);
                    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) + ((~(var_2))))) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [2ULL] [i_8])))));
                    var_27 = ((/* implicit */signed char) arr_37 [i_3] [i_8] [(unsigned short)2] [i_14]);
                    arr_54 [i_3] [i_3] [i_8] [i_12] [i_8] [i_14] = ((/* implicit */unsigned short) arr_45 [i_14 - 2] [i_14 - 2] [i_14 - 3] [i_14] [i_8] [i_14 - 1]);
                }
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                {
                    var_28 -= ((/* implicit */short) ((unsigned short) ((arr_55 [i_3] [i_3]) ? (((/* implicit */long long int) arr_14 [i_3])) : (arr_33 [i_3]))));
                    var_29 = ((/* implicit */signed char) min((var_29), (var_3)));
                }
                for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((long long int) ((-702224923264366687LL) & (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_3] [i_3] [i_3] [i_12] [i_12] [i_16] [i_17])))))))));
                        arr_62 [(_Bool)1] [i_8] [i_12] [i_16] [i_8] = ((/* implicit */long long int) 2360425843U);
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((((((/* implicit */int) var_5)) > (((/* implicit */int) (short)7252)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3]))) : (1458649716U)))), ((-(var_7))))) : (((/* implicit */unsigned long long int) ((min((arr_16 [i_3] [i_3] [i_3]), (639206833859967426LL))) - (((/* implicit */long long int) (+(4276423932U)))))))))));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 11; i_18 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) (unsigned char)210)));
                        var_33 = ((/* implicit */unsigned char) arr_19 [i_3]);
                        arr_66 [i_8] [i_8] = ((int) ((2540121988970499733LL) & (8388544LL)));
                        arr_67 [i_3] [i_3] [i_3] [i_3] [i_8] [(signed char)10] = ((/* implicit */unsigned long long int) ((long long int) arr_22 [i_3] [i_3]));
                        arr_68 [i_3] [i_8] [i_8] [i_12] = ((/* implicit */int) ((arr_33 [i_8]) / (((/* implicit */long long int) arr_53 [i_3] [i_8] [i_12] [i_16] [i_16] [i_18]))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) (~((((((~(((/* implicit */int) arr_24 [i_3] [i_8] [i_8] [i_16])))) + (2147483647))) >> (((((/* implicit */int) (short)-17918)) + (17919)))))));
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (-(((/* implicit */int) ((-8388544LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140)))))))))));
                        var_36 *= ((/* implicit */_Bool) ((unsigned int) arr_70 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]));
                        arr_71 [i_3] [i_8] [(unsigned char)8] [i_8] [i_19] [i_8] = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) arr_52 [i_16] [i_8] [i_12] [(unsigned short)6] [i_16])))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_3])) >> (((/* implicit */int) max((arr_1 [i_16]), (arr_1 [i_3])))))))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        var_38 &= ((((/* implicit */int) var_1)) & (((((/* implicit */int) arr_43 [i_8] [i_8])) << (((((/* implicit */int) arr_43 [i_3] [i_3])) - (66))))));
                        arr_75 [i_3] [i_12] [i_16] [i_8] = var_0;
                        arr_76 [i_3] [i_8] [i_12] [i_16] [i_8] [i_12] [i_8] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_23 [i_3] [i_8] [i_3] [i_16])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                    }
                }
                var_39 += ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) arr_46 [i_12] [i_12] [i_12] [(short)3])) ? (arr_72 [i_12] [i_12] [i_12] [i_3] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_12])))))) ? (((/* implicit */int) arr_38 [i_3] [i_8] [i_3] [i_12])) : (((/* implicit */int) ((short) (-(((/* implicit */int) arr_34 [i_3] [i_8] [i_8] [(short)0]))))))));
                /* LoopNest 2 */
                for (unsigned short i_21 = 3; i_21 < 9; i_21 += 4) 
                {
                    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_7)))));
                            arr_84 [i_3] [i_8] [i_8] [i_12] [i_21] [i_21] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)4478))))) ? (((/* implicit */int) (unsigned char)35)) : ((~(((/* implicit */int) arr_5 [i_3] [i_3])))))) << (((((/* implicit */int) arr_42 [i_3] [6LL] [i_21] [i_22])) - (5350)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_23 = 0; i_23 < 11; i_23 += 1) 
            {
                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)27379)) : (((/* implicit */int) arr_80 [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                arr_88 [i_8] = ((/* implicit */int) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_58 [2ULL] [i_8] [2ULL] [i_3] [i_23])))));
            }
        }
    }
    var_42 = ((/* implicit */unsigned int) var_3);
}
