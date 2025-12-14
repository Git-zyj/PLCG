/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52265
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(arr_9 [i_0] [i_3] [(unsigned char)17] [i_0]))))));
                    arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) arr_7 [6U] [(signed char)13] [i_2]);
                    var_16 = ((/* implicit */unsigned int) (!(var_6)));
                }
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) var_5);
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((arr_0 [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) var_8);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32557)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)32537))))) ? (((/* implicit */unsigned int) -2147483638)) : (arr_7 [i_0] [i_1] [i_2])));
                }
                for (signed char i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 6109566005525220850LL)))) / (((11994875544211221790ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182)))))));
                    var_22 = (!(((/* implicit */_Bool) var_10)));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(((/* implicit */int) arr_12 [i_0])))))));
                }
                var_24 = ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned short)32979)))) + (2147483647))) << (((((var_3) + (17644617041725335426ULL))) - (4175560314693462250ULL)))));
                var_25 = ((/* implicit */signed char) var_9);
                var_26 = ((/* implicit */unsigned long long int) ((short) ((arr_5 [(short)12] [i_1] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_1] [i_0])))));
            }
            for (short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_8])))))));
                            var_28 = ((/* implicit */int) ((unsigned char) (signed char)107));
                        }
                    } 
                } 
                arr_29 [i_7] [i_1] [i_1] [16ULL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_7] [4] [i_1] [i_1] [i_1])) + (((((/* implicit */int) arr_1 [i_1])) >> (((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_32 [i_0] [i_1] [i_10] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) == (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) arr_16 [i_1] [(short)8] [i_0] [i_0] [(unsigned short)12])) : (((/* implicit */int) (signed char)49))))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((var_2) + ((-2147483647 - 1)))) : (((/* implicit */int) var_1))));
                var_30 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_25 [i_0] [i_0] [i_1] [i_1] [(unsigned char)20]) : (((/* implicit */int) arr_12 [i_0]))));
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_13))))));
                /* LoopNest 2 */
                for (short i_12 = 1; i_12 < 19; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (signed char)-107))));
                            var_33 = ((/* implicit */int) (!(((((/* implicit */_Bool) 1851420159)) || (((/* implicit */_Bool) var_3))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */signed char) arr_9 [i_0] [i_11] [i_11 + 1] [i_11 + 1]);
            }
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) ((3642637536U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        }
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 1; i_15 < 19; i_15 += 2) 
            {
                for (long long int i_16 = 2; i_16 < 19; i_16 += 3) 
                {
                    {
                        arr_48 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((unsigned int) -391306478));
                        var_36 += ((/* implicit */short) ((((var_11) >> (((((/* implicit */int) var_9)) - (197))))) | (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_4)))))));
                        var_37 = ((/* implicit */unsigned short) var_3);
                    }
                } 
            } 
        } 
        var_38 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-6109566005525220850LL)));
    }
    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) & (arr_21 [i_17] [i_17] [i_18])));
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    {
                        arr_61 [i_18] [i_18] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_43 [i_20] [i_18] [(unsigned char)20])) : (((/* implicit */int) var_7)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 4) 
                        {
                            var_40 = ((/* implicit */int) ((((/* implicit */int) (!(var_6)))) > (((/* implicit */int) arr_9 [i_17] [i_18] [(short)2] [i_21]))));
                            var_41 = ((/* implicit */short) arr_30 [i_17] [i_18] [8ULL] [i_21]);
                        }
                        for (unsigned char i_22 = 1; i_22 < 10; i_22 += 4) 
                        {
                            var_42 = ((/* implicit */int) ((arr_58 [i_22 + 1] [i_22] [i_22 + 1]) <= ((((_Bool)1) ? (((/* implicit */int) (unsigned short)11890)) : (((/* implicit */int) (unsigned char)0))))));
                            var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_45 [i_17] [i_18] [i_18] [i_20])))) >> (((/* implicit */int) ((signed char) (_Bool)1)))));
                            var_44 = ((/* implicit */unsigned char) max((var_44), (var_9)));
                        }
                        for (int i_23 = 0; i_23 < 12; i_23 += 4) 
                        {
                            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)-87))))))));
                            arr_71 [i_17] [i_18] [(unsigned char)1] [(_Bool)1] [3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_60 [i_23] [i_20] [i_18] [i_17]))));
                        }
                        for (signed char i_24 = 0; i_24 < 12; i_24 += 1) 
                        {
                            var_46 = (~(var_3));
                            var_47 |= ((/* implicit */unsigned short) var_1);
                        }
                    }
                } 
            } 
            var_48 += ((/* implicit */long long int) ((((/* implicit */_Bool) 1360229135)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
            var_49 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_63 [i_18] [i_18] [i_18] [i_17] [i_18] [i_17] [i_17])) == (var_11)));
            var_50 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4148254460U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)32537)))))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            arr_77 [0U] [i_25] = ((/* implicit */unsigned int) var_0);
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_26 = 2; i_26 < 11; i_26 += 3) 
            {
                /* LoopNest 2 */
                for (short i_27 = 3; i_27 < 11; i_27 += 1) 
                {
                    for (signed char i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        {
                            arr_85 [(signed char)11] [i_25] [5] [i_17] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_25] [i_25] [i_25] [i_25])) >= (((/* implicit */int) var_0)))))) >= (((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) : (var_12))));
                            var_51 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-87)) + (2147483647))) >> (((((/* implicit */int) var_14)) + (9828)))));
                            var_52 = ((/* implicit */signed char) (-(arr_62 [i_17] [i_25] [i_26] [i_27 - 2] [(signed char)0] [i_27])));
                            var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_27 - 2] [i_26 - 1])) ? (((/* implicit */int) arr_17 [i_27 - 1] [i_26 - 2])) : (((/* implicit */int) arr_17 [i_27 + 1] [i_26 + 1]))));
                            arr_86 [i_17] [i_26] [i_26] [(short)0] [i_25] [i_25] [i_26] = ((var_12) >= (arr_49 [i_26 - 1]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_29 = 0; i_29 < 12; i_29 += 2) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            arr_91 [i_17] [i_25] [i_25] [i_29] [i_30] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned short)53646)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59718))) : (arr_66 [i_25] [(_Bool)1] [i_26] [i_29] [i_30]))) - (59712U)))));
                            var_54 = (unsigned char)34;
                            var_55 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_17] [i_25] [i_26 - 2]))) : ((~(4294967295U)))));
                            var_56 = ((/* implicit */short) -6109566005525220851LL);
                        }
                    } 
                } 
            }
            arr_92 [i_25] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 153782886U))));
            var_57 = ((((/* implicit */_Bool) (unsigned short)59718)) ? (max(((+(var_12))), (((/* implicit */unsigned int) ((_Bool) (unsigned char)142))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) arr_68 [i_25] [i_25] [i_25] [i_25] [i_25])))))))));
        }
        arr_93 [i_17] = ((/* implicit */unsigned char) max((((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))))), ((((!(((/* implicit */_Bool) arr_89 [(short)9] [i_17] [(short)9] [i_17] [i_17])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_50 [i_17])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)2934))))))));
        /* LoopSeq 2 */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            var_58 += max(((~(arr_30 [i_31] [i_31] [i_17] [i_17]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) == (arr_66 [4] [i_17] [4U] [i_31] [i_31])))));
            var_59 = ((/* implicit */long long int) max((var_8), (((/* implicit */short) var_0))));
            var_60 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) ((signed char) (unsigned short)3951))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (var_12))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (unsigned short)60206))), (max(((unsigned short)11890), ((unsigned short)5330))))))));
        }
        for (unsigned short i_32 = 0; i_32 < 12; i_32 += 1) 
        {
            var_61 ^= ((/* implicit */unsigned long long int) arr_34 [i_17] [14] [i_32]);
            var_62 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_25 [i_17] [i_32] [i_32] [i_17] [i_17])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (max((var_3), (((/* implicit */unsigned long long int) (signed char)16)))))));
        }
        var_63 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) var_8))))))))), ((~(((((/* implicit */_Bool) var_3)) ? (-5895243297914416403LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))))))));
        var_64 = ((/* implicit */unsigned char) max((var_64), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8))))))) == (var_12))))));
    }
    var_65 += ((/* implicit */unsigned int) var_9);
    var_66 = ((/* implicit */long long int) min((var_66), (((/* implicit */long long int) var_9))));
}
