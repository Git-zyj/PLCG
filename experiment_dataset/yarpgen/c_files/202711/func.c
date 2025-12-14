/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202711
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) 2861139525451969949LL);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) (unsigned short)10758)) : (((/* implicit */int) var_3)))))));
        var_22 = ((/* implicit */unsigned long long int) var_9);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) 
                    {
                        arr_13 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */unsigned int) (unsigned short)10758);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)54777)), (539150065)))) ? (min((arr_12 [i_1] [i_2] [i_3 + 3] [i_1] [i_2]), (((/* implicit */unsigned int) arr_5 [i_1] [i_2] [i_3])))) : (min((min((((/* implicit */unsigned int) (unsigned short)10758)), (arr_9 [i_2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18)))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) arr_10 [i_1] [i_3 - 3] [i_6] [i_6]))))));
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (short)-14657);
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_21 [i_7] [i_1] = ((/* implicit */unsigned char) max((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((((/* implicit */_Bool) ((((/* implicit */int) (short)18310)) / (((/* implicit */int) arr_10 [i_7] [i_5] [i_2] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7 - 1]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) / (arr_11 [i_2] [i_3])))))));
                            var_25 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15941))))), (((arr_17 [i_1] [i_2] [i_3] [i_7]) / (((/* implicit */unsigned int) 461320919)))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) == (arr_7 [i_3] [i_2] [i_1]))))));
                        }
                        var_26 ^= ((/* implicit */signed char) (short)-18289);
                        arr_22 [i_1] [i_2] [i_3] [i_5] = ((((/* implicit */int) max(((unsigned char)31), ((unsigned char)246)))) & (((/* implicit */int) ((((/* implicit */_Bool) 468644280U)) || (((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3] [i_5]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                arr_29 [i_9] [i_8] [i_3] [i_2] [i_1] [i_1] [i_9] = min((((((/* implicit */unsigned long long int) 736085661)) * (((arr_5 [i_1] [i_2] [i_3]) ? (arr_8 [i_1] [i_3] [i_9]) : (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) ((arr_12 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 2] [i_3 - 1]) << (((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (var_16))) - (13933U)))))));
                                var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_3] [i_3 - 1] [i_3 + 3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22158))) : (var_11))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_3] [i_3 + 2] [i_3])))));
                                arr_30 [i_9] [i_9] = min(((unsigned short)29680), (((/* implicit */unsigned short) (short)-22160)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_35 [i_1] [i_2] [i_3] [i_10] = ((/* implicit */unsigned int) var_3);
                        var_28 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_3 + 1])) : (((/* implicit */int) arr_6 [i_3 + 1])))), (((((/* implicit */int) arr_6 [i_3 + 2])) >> (((/* implicit */int) arr_6 [i_3 + 1]))))));
                        arr_36 [i_1] [i_3 - 2] [i_10] = ((/* implicit */short) (-(((((/* implicit */int) arr_26 [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3 - 1])) | (((/* implicit */int) arr_26 [i_3 - 3] [i_3 - 3] [i_3 + 3] [i_3 - 3]))))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 20; i_11 += 1) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned short) arr_24 [i_1] [i_2] [i_3] [i_11]))))) || (((/* implicit */_Bool) min((((/* implicit */short) (signed char)117)), ((short)-22146))))))), (min((var_14), ((unsigned short)54777)))));
                        var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) var_14)) - (27900)))))) : (((((/* implicit */_Bool) arr_28 [i_11] [i_1] [i_3] [i_11] [i_1] [i_3])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)245), (arr_37 [i_1] [i_2] [i_1])))))));
                    }
                    for (unsigned char i_12 = 2; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        var_31 = (unsigned char)16;
                        var_32 = ((/* implicit */short) arr_0 [i_3]);
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            arr_44 [i_12] [i_2] [i_3] [i_12] [i_13] [i_13] = ((arr_20 [i_1] [i_1] [i_2] [i_3] [i_3] [i_12] [i_13]) - (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) var_18))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) var_8)) + (29266)))))) : (arr_43 [i_2] [i_2] [i_12])))));
                            var_33 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_12 - 1])) ? (arr_4 [i_3 + 3] [i_12 - 2]) : (arr_4 [i_3 - 1] [i_12 - 2]))), ((+(((/* implicit */int) (short)-18310))))));
                            arr_45 [i_13] [i_12] [i_3] [i_12] [i_3 - 2] [i_2] [i_1] = ((/* implicit */signed char) ((max((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3158))) : (var_17))), (((/* implicit */unsigned long long int) var_7)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_12] [i_3] [i_3 + 1] [i_3] [i_3 + 3] [i_3 - 3] [i_3 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((var_8), (var_8)))))))));
                            arr_46 [i_13] [i_13] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-110)), (arr_26 [i_3 + 2] [i_3 - 1] [i_12 - 2] [i_12 - 1])))) ? (((((/* implicit */int) (short)-22160)) ^ (((/* implicit */int) arr_37 [i_3] [i_3 - 3] [i_3 + 3])))) : (max((arr_27 [i_13] [i_13] [i_13] [i_13] [i_12 + 1] [i_1] [i_13]), (arr_27 [i_2] [i_12] [i_12] [i_12] [i_12 - 2] [i_2] [i_2])))));
                            var_34 += ((/* implicit */signed char) min((max((((/* implicit */short) arr_6 [i_12 + 1])), ((short)2))), (((/* implicit */short) (!(((/* implicit */_Bool) var_16)))))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54777)) ? (((((/* implicit */_Bool) -1478322084)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-21)))) : (((/* implicit */int) (signed char)-83))));
                            var_36 = ((/* implicit */int) ((max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-22144)) != (arr_27 [i_12] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_12])), ((unsigned char)233)))))));
                        }
                        /* vectorizable */
                        for (signed char i_15 = 3; i_15 < 19; i_15 += 2) 
                        {
                            arr_53 [i_2] [i_3] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8307)) ^ (arr_23 [i_15] [i_3])));
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (signed char)10))));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_3 + 2] [i_3 - 1] [i_12 + 1] [i_15 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 2]))) : ((+(arr_17 [i_15] [i_12] [i_2] [i_1])))));
                            var_39 = ((/* implicit */long long int) (+(arr_51 [i_12] [i_15 - 2] [i_3] [i_12 - 1] [i_15])));
                            var_40 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                        }
                        arr_54 [i_12] [i_12] [i_3] [i_12] [i_1] = ((-736085661) != (((/* implicit */int) var_18)));
                    }
                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 19; i_16 += 4) 
                    {
                        arr_57 [i_16] [i_2] [i_3] [i_16] = ((/* implicit */signed char) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        /* LoopSeq 1 */
                        for (int i_17 = 3; i_17 < 20; i_17 += 1) 
                        {
                            arr_61 [i_1] [i_3] [i_2] [i_16] = ((/* implicit */_Bool) arr_56 [i_1] [i_2] [i_3] [i_16 - 1]);
                            arr_62 [i_1] [i_16] [i_3] [i_17] = var_19;
                        }
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 21; i_18 += 1) 
                        {
                            var_41 = ((((var_7) == (arr_55 [i_1] [i_16] [i_3] [i_16] [i_18] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (3770347999U) : (((/* implicit */unsigned int) -1)))));
                            arr_66 [i_18] [i_16] [i_16] [i_2] [i_1] = ((/* implicit */long long int) arr_55 [i_18] [i_16] [i_3] [i_3] [i_16] [i_1]);
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_40 [i_1] [i_2] [i_3 - 1] [i_18])) != (((/* implicit */int) (_Bool)1))))) * ((~(((/* implicit */int) var_2))))));
                            var_43 = ((/* implicit */signed char) ((arr_32 [i_16 - 1] [i_16 + 2] [i_3 + 1] [i_3 + 3]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) << (((arr_31 [i_1] [i_1] [i_1] [i_1]) - (3490940486U))))))));
                            arr_67 [i_1] [i_16] [i_2] [i_3] [i_16] [i_18] = ((/* implicit */signed char) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        }
                        arr_68 [i_16] [i_2] [i_2] [i_1] |= ((/* implicit */int) var_19);
                        /* LoopSeq 3 */
                        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
                        {
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_16] [i_16 - 1] [i_16] [i_3 - 2])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_60 [i_1] [i_2] [i_3] [i_16 + 1] [i_16])) % (((/* implicit */int) arr_14 [i_19] [i_16] [i_3 + 2] [i_2] [i_1]))))) : (((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_3] [i_3 - 3] [i_16] [i_19])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                            arr_72 [i_1] [i_2] [i_3] [i_3] [i_16] [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)99)) % (((/* implicit */int) var_12))));
                        }
                        for (unsigned short i_20 = 0; i_20 < 21; i_20 += 2) 
                        {
                            arr_77 [i_1] [i_16] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_40 [i_20] [i_16] [i_3] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) / (((((/* implicit */int) (short)-18310)) % (((/* implicit */int) (short)6))))));
                            arr_78 [i_16] [i_2] = ((((/* implicit */_Bool) arr_47 [i_3] [i_16] [i_16] [i_16] [i_16 + 1] [i_16 + 2])) ? (arr_55 [i_1] [i_16] [i_2] [i_2] [i_3] [i_16 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16 + 2]))));
                            var_45 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_49 [i_1] [i_2] [i_3] [i_16] [i_20]) : (((/* implicit */int) (signed char)99))))) | (arr_8 [i_3 + 3] [i_3] [i_16 - 1])));
                            var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_1] [i_1] [i_1] [i_1]))));
                        }
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            arr_83 [i_1] [i_16] [i_3] [i_16 + 1] [i_21] = ((/* implicit */unsigned short) ((arr_19 [i_21] [i_16 + 1] [i_16 + 2] [i_16] [i_3 + 1] [i_3]) - (((/* implicit */int) var_2))));
                            var_47 = ((/* implicit */unsigned long long int) ((arr_20 [i_1] [i_2] [i_16 + 2] [i_1] [i_21] [i_21 - 1] [i_3 + 3]) ^ (arr_20 [i_3 + 2] [i_2] [i_3] [i_16] [i_21] [i_21 - 1] [i_3 + 3])));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_22 = 0; i_22 < 17; i_22 += 2) 
    {
        arr_88 [i_22] = ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned int) min((arr_59 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]), (arr_59 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))))));
        /* LoopNest 3 */
        for (short i_23 = 0; i_23 < 17; i_23 += 1) 
        {
            for (unsigned int i_24 = 2; i_24 < 15; i_24 += 1) 
            {
                for (unsigned long long int i_25 = 3; i_25 < 16; i_25 += 4) 
                {
                    {
                        var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (~((~(((/* implicit */int) var_2)))))))));
                        arr_97 [i_25] [i_23] [i_23] [i_22] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_5)), (0U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)54777)) >> (((/* implicit */int) (_Bool)1)))))))), (11384578870619135816ULL)));
                    }
                } 
            } 
        } 
    }
    var_49 = ((((/* implicit */int) (unsigned short)10786)) % (((/* implicit */int) var_15)));
    var_50 = ((/* implicit */short) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)10747)) >= (((((((/* implicit */int) (signed char)-100)) + (2147483647))) << (((((((/* implicit */int) (signed char)-94)) + (111))) - (17)))))))))));
}
