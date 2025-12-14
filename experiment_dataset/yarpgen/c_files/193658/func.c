/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193658
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) min(((unsigned char)143), (((/* implicit */unsigned char) arr_1 [i_0 + 1]))))), (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_0 [i_0])))) / (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0 - 1]))))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((((/* implicit */int) max((((((/* implicit */int) arr_2 [(unsigned char)4])) == (((/* implicit */int) arr_0 [0])))), (((var_4) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [18U])))))))), (((((/* implicit */_Bool) max((242273477), (((/* implicit */int) (signed char)102))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_16 [i_1] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) ((var_1) > (((/* implicit */int) arr_10 [i_1]))))) != (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (short)-25116)) : (((/* implicit */int) (unsigned char)255))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_1] = ((/* implicit */unsigned short) max((min((((/* implicit */short) (signed char)-79)), (var_6))), (((/* implicit */short) max((((/* implicit */unsigned char) (signed char)79)), (arr_5 [i_1 - 1]))))));
                            var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (signed char)99)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (var_9))))), (((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_5])))) & (((/* implicit */int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))))))))));
                            var_17 = ((/* implicit */unsigned int) min((min((372776005), (((/* implicit */int) (unsigned char)199)))), ((+(((/* implicit */int) (signed char)79))))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_1] [(unsigned char)13] [(unsigned char)9] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 0U)) : (7310836816392169368LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-32)) < (((/* implicit */int) (signed char)31))))))))) - (((((((/* implicit */int) (signed char)-28)) + (2147483647))) >> (((min((9223372036854775807LL), (((/* implicit */long long int) (short)-1)))) + (6LL)))))));
                            arr_23 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) (short)29191)) <= (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_3] [i_4 - 1] [i_6] [i_6]))))))) == ((((!(((/* implicit */_Bool) arr_9 [i_2])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_2))))));
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1] = ((((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((/* implicit */int) (!((_Bool)0)))) : (min((var_1), (((/* implicit */int) (unsigned char)94)))));
                            arr_25 [i_1] [i_1] [i_3] [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */short) max((var_5), (var_0)))), (var_7)))), (min((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) 911593629219063823LL)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (short)-31796))))))));
                        }
                        var_18 *= ((/* implicit */unsigned short) (+(((((/* implicit */int) max((var_12), ((_Bool)1)))) | (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_8 [10LL] [i_2 + 1] [i_2 + 1]) : (var_1)))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)252), (min(((unsigned char)252), (((/* implicit */unsigned char) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_1] [i_1] [i_1]) != (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) : (max((var_4), (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (-2147483647) : (((/* implicit */int) arr_1 [i_1])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_0)))))))));
    }
    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) var_4)) | (var_13))), (((/* implicit */unsigned long long int) max((arr_2 [i_7]), (arr_2 [i_7])))))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            for (short i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((!((_Bool)1))) ? ((-(((/* implicit */int) arr_30 [i_8] [i_9 + 2])))) : (((((/* implicit */int) arr_30 [i_8] [i_9 + 1])) >> (((((/* implicit */int) arr_30 [i_8] [i_9 + 1])) - (78))))))))));
                    arr_35 [i_9] [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_17 [i_7 - 1] [(short)0] [i_9] [i_7] [2] [i_7]), (((/* implicit */unsigned short) var_14)))))));
                }
            } 
        } 
        var_22 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_4))))));
    }
    for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_11 = 1; i_11 < 18; i_11 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)21250))))));
            arr_42 [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_11 - 1] [i_11] [i_11 + 2])) >> (((var_10) + (115713866466535694LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_40 [i_11 + 1] [i_11 + 1] [i_11 + 2])), ((short)4891))))) : (min((((/* implicit */long long int) arr_40 [i_11 + 3] [i_11 - 1] [i_11 + 3])), (7678975361267642080LL))));
            var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) max((max((((/* implicit */short) var_5)), ((short)10884))), (((/* implicit */short) min((arr_37 [i_10]), (((/* implicit */unsigned char) arr_36 [i_10] [i_10])))))))), (max((((/* implicit */unsigned short) arr_36 [i_10 + 1] [i_11 + 2])), ((unsigned short)39369)))));
        }
        for (unsigned char i_12 = 1; i_12 < 18; i_12 += 4) /* same iter space */
        {
            arr_45 [i_10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12] [i_10] [i_10 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)225))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2479580834U)))) != (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12 + 1] [i_12 - 1])))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)138)) : (var_3)))));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12]))) / (var_9)))), (var_13)))))))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                arr_48 [i_10] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((((/* implicit */int) var_14)) | (((/* implicit */int) arr_46 [i_10 - 1])))), (((((/* implicit */int) (short)-4263)) | (((/* implicit */int) var_11))))))), (((((/* implicit */long long int) (~(var_1)))) | (max((((/* implicit */long long int) var_3)), (var_4)))))));
                var_26 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)224))))), (((((/* implicit */_Bool) var_11)) ? (16105895593752509LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                arr_49 [i_10] [i_10] = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_43 [i_10 - 2])))) % (((((((/* implicit */_Bool) arr_44 [i_10] [i_12] [i_10])) ? (((/* implicit */int) arr_38 [i_10] [i_10])) : (((/* implicit */int) (_Bool)1)))) - ((+(((/* implicit */int) var_6))))))));
            }
            for (int i_14 = 1; i_14 < 17; i_14 += 2) 
            {
                arr_53 [i_14] [i_12] [i_14] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_38 [i_10 - 2] [i_12 - 1])) ? (((/* implicit */int) arr_38 [i_10 - 2] [i_12 + 1])) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_38 [i_10 + 2] [i_12 + 3]))))));
                var_27 = ((/* implicit */short) (+(((/* implicit */int) (short)-21243))));
            }
            arr_54 [i_10] [i_10] [15ULL] = ((/* implicit */unsigned char) ((max((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_39 [i_10]))), (((/* implicit */long long int) max((var_1), (((/* implicit */int) arr_50 [i_10]))))))) >> (((((((/* implicit */_Bool) arr_41 [i_12 - 1] [i_12 - 1] [i_12 + 2])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)192))))) : (((((/* implicit */_Bool) var_3)) ? (664008420199715374ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))))))) - (188ULL)))));
            var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)13671)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) : (10284006638603960119ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) arr_37 [i_10]))))) ? (max((33554431LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))))));
        }
        for (unsigned char i_15 = 1; i_15 < 18; i_15 += 4) /* same iter space */
        {
            var_29 = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)18052))))) && (((/* implicit */_Bool) (+(227003602U))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_15])) ? (-7678975361267642079LL) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_10] [i_15] [i_10])))))) ? (var_9) : (max((var_4), (((/* implicit */long long int) (unsigned char)236)))))));
            arr_59 [i_10] [i_15] = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_36 [i_10] [i_15]))))));
        }
        var_30 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-91)), (arr_52 [i_10] [i_10] [i_10])))))), (((/* implicit */int) ((((/* implicit */int) arr_56 [i_10 + 1] [i_10 - 1])) < (max((var_3), (var_1))))))));
    }
    var_31 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (short i_16 = 2; i_16 < 9; i_16 += 2) 
    {
        for (unsigned short i_17 = 1; i_17 < 12; i_17 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_18 = 1; i_18 < 9; i_18 += 2) 
                {
                    for (signed char i_19 = 3; i_19 < 10; i_19 += 3) 
                    {
                        for (signed char i_20 = 3; i_20 < 12; i_20 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */int) min((var_12), ((_Bool)1)))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_11))))));
                                arr_74 [i_19] [i_17] [i_17] [i_20] = ((/* implicit */int) ((((/* implicit */int) max((arr_50 [i_16]), (arr_50 [i_16])))) > (((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_12))))) - (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)95)), ((unsigned char)128))))))));
                                arr_75 [i_20] [i_19] [i_19] [i_16 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */int) (_Bool)1)), (var_3)))))) ? (max(((((_Bool)1) ? (33554431ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))), (((/* implicit */unsigned long long int) arr_13 [i_16] [i_17] [i_18] [i_19 - 3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_44 [i_19 + 3] [i_19 + 3] [i_17 - 1]), (arr_44 [i_19 + 1] [i_19 - 1] [i_17 + 1])))))));
                            }
                        } 
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (signed char)121)), (1803891170))), (((/* implicit */int) ((min((((/* implicit */long long int) arr_52 [i_16] [i_16] [i_16])), (arr_55 [i_16] [i_17 + 1] [i_16]))) > (((/* implicit */long long int) ((arr_36 [(signed char)18] [i_17]) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) arr_7 [i_16]))))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */int) var_7)), ((~(((/* implicit */int) (signed char)126)))))) : (((/* implicit */int) ((max((((/* implicit */long long int) var_7)), (var_9))) != (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (~(max((((var_8) % (((/* implicit */long long int) var_3)))), (max((((/* implicit */long long int) var_3)), (-558604929784536923LL))))))))));
}
