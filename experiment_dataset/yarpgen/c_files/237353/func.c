/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237353
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
    var_15 = ((/* implicit */unsigned short) min(((short)21040), (((/* implicit */short) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_3)), (var_13))))))))));
    var_16 = ((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */unsigned int) var_14))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */signed char) min(((~(arr_1 [i_0]))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [1])) == (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0]) : ((~(arr_5 [i_0] [i_0])))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_2] [i_1])), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1] [(unsigned short)8])) ? (-7673728289800686407LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [9U]))))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [(unsigned char)8] [i_1 - 1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_0] [i_2] [i_3]))) : (((arr_10 [i_3 + 1] [i_2] [i_3 - 1] [i_2] [i_3] [i_3 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 2]))) : (arr_5 [12LL] [i_2])))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            arr_15 [i_4] [i_4] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */signed char) ((((((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [0LL] [i_0] [i_0] [3ULL] [9LL] [i_0]))) != (4241766252U))) ? (min((arr_14 [i_1] [i_1] [i_2] [i_1 + 2] [i_4]), (arr_0 [i_0]))) : (var_14))) + (2147483647))) >> (((((/* implicit */int) (short)21040)) - (21028)))));
                            arr_16 [i_3] [i_0] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3 - 2] = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_4] [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_21 [i_0] = ((/* implicit */unsigned short) max((arr_20 [(short)5] [i_1 - 1] [i_2] [i_5] [i_0]), (((/* implicit */long long int) (unsigned short)45793))));
                            var_19 = ((/* implicit */signed char) var_11);
                            arr_22 [i_0] [i_1] [i_2] [i_3 - 2] [i_0] [3] = ((/* implicit */short) arr_9 [i_0] [i_1] [i_0] [i_3]);
                            arr_23 [4] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(_Bool)1] [8ULL] [i_0])) >= (((/* implicit */int) var_3))));
                            arr_24 [i_0] [i_1] = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_3 - 2]);
                        }
                    }
                    for (unsigned int i_6 = 2; i_6 < 14; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(arr_20 [i_0] [i_1] [8] [i_0] [i_2]))))));
                        arr_27 [i_0] [i_1 + 2] [i_2] [i_0] [i_2] = max((((/* implicit */int) arr_17 [i_6] [i_0] [i_2] [i_6] [10] [i_6] [(signed char)9])), ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-18332)) : (arr_14 [i_0] [i_2] [i_2] [i_0] [i_1]))))));
                        arr_28 [i_2] [i_2] &= ((/* implicit */short) ((((arr_4 [i_6] [i_1 - 1]) ? (min((arr_20 [(short)8] [i_2] [i_2] [i_6] [i_6]), (((/* implicit */long long int) arr_26 [i_2] [i_2] [i_2])))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (arr_5 [i_0] [i_6])))))) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [6] [i_0] [2U] [2U] [i_2] [i_6])))));
                        var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)46732)) : (arr_14 [i_0] [i_1] [i_2] [i_2] [i_2])))), ((+(max((var_10), (((/* implicit */unsigned int) (unsigned char)73))))))));
                        var_22 += min((((/* implicit */int) min((min((arr_17 [i_0] [i_2] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_6 [(unsigned short)4] [i_6])))), (((/* implicit */short) min((var_5), ((signed char)25))))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)46)), ((unsigned short)45793)))))));
                    }
                    var_23 = max((((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)198))))) + (1870026134U))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1])), (arr_25 [i_0] [i_1] [i_1 + 1] [i_2])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 12; i_7 += 4) 
        {
            for (signed char i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [6] [6]))) : (0U)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-8), ((short)21030))))))))))));
                    arr_35 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((arr_14 [i_0] [i_7 + 2] [i_8] [i_0] [i_7]), (((/* implicit */int) arr_34 [i_7 - 1] [i_0] [i_0] [i_0])))) / (((/* implicit */int) min((var_1), (((/* implicit */short) arr_31 [i_0] [i_7 + 2] [i_0])))))))) ? (14096232081435800117ULL) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)19743)) + (((/* implicit */int) (unsigned short)45797)))))))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 3; i_9 < 12; i_9 += 2) 
    {
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_10 [i_9] [(unsigned short)6] [i_9] [i_9] [i_9 - 3] [i_9])))), (((/* implicit */int) min((arr_34 [i_9] [i_9 - 3] [(signed char)4] [i_9]), (((/* implicit */short) arr_31 [i_9] [i_9] [12])))))))), (min((((/* implicit */unsigned long long int) (-(arr_20 [i_9] [i_9 + 1] [i_9] [i_9] [2])))), (max((((/* implicit */unsigned long long int) var_14)), (var_7))))))))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_5 [i_9] [(_Bool)1]))));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_5 [i_9] [0]))));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        arr_42 [i_10] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_10])) ? (arr_38 [i_10]) : (((arr_39 [i_10]) ? (((/* implicit */int) arr_41 [(signed char)19])) : (((/* implicit */int) (unsigned short)9642))))));
        arr_43 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55884)) | (arr_38 [i_10])));
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        arr_46 [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_44 [i_11]))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_11])) ? (((/* implicit */int) arr_45 [3U])) : (((/* implicit */int) var_1))))) / (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2000274253U)))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                arr_51 [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) (+(arr_49 [i_13 - 1] [(unsigned char)2] [i_11] [i_11])));
                arr_52 [i_11] [i_12] = ((arr_50 [i_11] [i_12] [i_13 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_11] [i_11] [i_11]))) : (var_10));
                arr_53 [i_13 - 1] [i_12] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)130)) ? (((((/* implicit */_Bool) arr_48 [i_11] [(short)0] [i_11])) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) arr_50 [i_11] [i_11] [i_11])))) : (((/* implicit */int) arr_50 [i_11] [i_12] [i_13]))));
            }
            for (unsigned short i_14 = 1; i_14 < 23; i_14 += 1) 
            {
                arr_56 [i_11] [i_11] [i_12] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_44 [i_12]))));
                var_29 = ((/* implicit */signed char) var_10);
                arr_57 [i_11] [i_12] [i_14] [i_12] = ((/* implicit */short) var_8);
            }
            arr_58 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_44 [i_11])) * (((/* implicit */int) arr_44 [i_12]))));
        }
        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_11])))))));
    }
    /* LoopSeq 3 */
    for (int i_15 = 0; i_15 < 15; i_15 += 4) 
    {
        arr_61 [i_15] = (+(arr_20 [i_15] [i_15] [i_15] [i_15] [i_15]));
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) min((((/* implicit */unsigned int) var_9)), ((+(arr_48 [i_15] [i_15] [i_15]))))))));
    }
    for (int i_16 = 1; i_16 < 12; i_16 += 4) 
    {
        var_32 = ((/* implicit */int) min((((((/* implicit */_Bool) var_2)) ? (arr_63 [i_16 - 1] [(short)12]) : (arr_63 [i_16 + 1] [0U]))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (short)15681)), ((unsigned short)9649))))));
        arr_64 [i_16] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 349408124638631690ULL)) ? (-1491295874) : (((/* implicit */int) (unsigned char)168)))) <= (((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) var_1)))) : ((-(((/* implicit */int) (short)-19913))))))));
        /* LoopSeq 3 */
        for (unsigned int i_17 = 4; i_17 < 12; i_17 += 3) 
        {
            arr_67 [i_16] = ((/* implicit */unsigned int) min((((/* implicit */short) arr_47 [(_Bool)1] [(_Bool)1] [i_17 - 4])), (var_1)));
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 13; i_18 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_19 = 0; i_19 < 13; i_19 += 3) 
                {
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((max((3052255270U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) min((arr_39 [i_16]), (var_3))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_18])) == (((/* implicit */int) arr_17 [i_16] [i_18] [i_16] [i_16] [i_16] [i_16] [i_16])))))) + (var_7))))))));
                    arr_72 [i_16] [i_18] [i_17] [i_16] = max((((/* implicit */long long int) min((((/* implicit */int) arr_34 [i_16 + 1] [i_16 + 1] [i_16] [i_17])), ((~(((/* implicit */int) arr_55 [i_16] [i_17] [(short)2] [i_19]))))))), (((((/* implicit */_Bool) arr_71 [i_16 + 1] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_16] [i_16] [i_18] [4]))) : (min((arr_30 [i_17] [i_16]), (((/* implicit */long long int) (signed char)116)))))));
                }
                for (signed char i_20 = 0; i_20 < 13; i_20 += 2) 
                {
                    var_34 *= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_18] [i_18])) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_20] [i_17] [i_20] [i_20])) : (arr_38 [i_16])))), (min((((/* implicit */unsigned long long int) arr_59 [i_18] [i_20])), (var_7))))) - (71ULL)))));
                    /* LoopSeq 3 */
                    for (short i_21 = 2; i_21 < 10; i_21 += 4) 
                    {
                        arr_77 [i_16 + 1] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)73)), (arr_62 [i_18] [i_16])))) ? (arr_49 [i_16] [i_17] [i_18] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_50 [i_21] [i_18] [i_17 - 4])), (arr_17 [i_16] [i_16] [(short)7] [i_16] [i_16 - 1] [i_16 + 1] [i_16])))))))) ? (((/* implicit */int) min((arr_44 [i_16 - 1]), (((/* implicit */short) ((((/* implicit */int) arr_47 [i_16] [i_16] [i_16 + 1])) == (((/* implicit */int) (short)-19271)))))))) : (min(((-(arr_0 [i_20]))), (arr_38 [i_16])))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) 1465503051U))));
                    }
                    /* vectorizable */
                    for (int i_22 = 1; i_22 < 10; i_22 += 2) 
                    {
                        arr_82 [i_16] [i_17] [i_18] [i_16] [i_16] = (i_16 % 2 == 0) ? (((/* implicit */signed char) ((arr_80 [i_16] [i_16] [i_16] [i_16] [i_16]) << (((arr_80 [i_16] [i_16] [i_16] [i_16] [i_16]) - (3264109832480817650ULL)))))) : (((/* implicit */signed char) ((arr_80 [i_16] [i_16] [i_16] [i_16] [i_16]) << (((((arr_80 [i_16] [i_16] [i_16] [i_16] [i_16]) - (3264109832480817650ULL))) - (9151983488753446176ULL))))));
                        arr_83 [i_16] [i_18] [i_16] = arr_48 [i_16] [i_16] [i_16];
                        arr_84 [i_17 - 1] [i_17] [i_18] [i_17] [i_17] [i_17 - 3] |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)9415)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3815243937U)))));
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) var_8))));
                    }
                    /* vectorizable */
                    for (signed char i_23 = 1; i_23 < 10; i_23 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_16] [i_16] [i_17 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) : (arr_68 [1LL] [i_16])));
                        var_38 = ((/* implicit */unsigned short) var_12);
                    }
                }
                for (unsigned short i_24 = 0; i_24 < 13; i_24 += 4) 
                {
                    arr_90 [i_16] [i_17] [i_17] [i_24] [i_16] = ((/* implicit */short) arr_47 [i_16 - 1] [i_17 - 2] [i_18]);
                    arr_91 [i_16] [i_17] [(_Bool)1] [i_17 - 4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [(short)14] [i_16])) ? (((/* implicit */int) arr_74 [i_16] [i_17] [i_18] [i_24] [i_17] [i_18])) : (((/* implicit */int) (unsigned short)63488))))) ? (max((arr_0 [i_24]), (((/* implicit */int) arr_9 [i_16] [(signed char)2] [i_16] [i_24])))) : (((/* implicit */int) min(((signed char)-46), ((signed char)-46))))))), (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)57637))))) + (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2)))))));
                }
                arr_92 [i_16] [i_16] [i_16] = ((/* implicit */int) (unsigned short)57627);
                arr_93 [i_16] = (~(arr_49 [1U] [i_17 + 1] [i_17 + 1] [i_17 - 3]));
            }
        }
        /* vectorizable */
        for (signed char i_25 = 0; i_25 < 13; i_25 += 2) 
        {
            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (+((+(((/* implicit */int) arr_44 [i_25])))))))));
            arr_97 [i_25] [i_16] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)31464)))))));
            arr_98 [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_76 [i_16]))));
        }
        for (unsigned char i_26 = 0; i_26 < 13; i_26 += 2) 
        {
            arr_101 [i_16] = ((/* implicit */short) min((((max((((/* implicit */int) (short)63)), (var_14))) == (arr_2 [i_16 - 1] [i_26] [i_16 + 1]))), (arr_9 [i_16] [i_16] [i_16] [i_26])));
            arr_102 [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_11)), (min((((/* implicit */unsigned int) ((arr_59 [i_16] [i_16]) != (((/* implicit */unsigned int) arr_2 [i_26] [i_26] [i_16]))))), (arr_87 [i_16 + 1] [i_26])))));
        }
    }
    for (short i_27 = 4; i_27 < 21; i_27 += 3) 
    {
        arr_105 [i_27] = ((/* implicit */unsigned short) arr_47 [i_27 + 3] [i_27 - 3] [i_27 - 1]);
        arr_106 [i_27] [i_27] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) > (((/* implicit */int) min((arr_104 [i_27 - 4]), (arr_104 [i_27 + 3]))))));
    }
}
