/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232031
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (5294524985312730359ULL) : (5294524985312730359ULL))), (max((5294524985312730354ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])))))))));
        var_20 = ((/* implicit */unsigned long long int) 59872045061928605LL);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                var_21 = ((/* implicit */signed char) (-(arr_3 [(_Bool)1])));
                var_22 = ((/* implicit */signed char) arr_8 [i_1] [i_2]);
                var_23 = ((/* implicit */int) ((short) arr_1 [i_0 - 1]));
            }
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) == (5294524985312730359ULL))))), (((unsigned long long int) (-(((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
                var_25 -= ((/* implicit */long long int) (-(((/* implicit */int) var_16))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) max((max((max((arr_10 [(unsigned short)0] [i_1] [1U]), (arr_3 [5ULL]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)28))))))), (arr_3 [i_6])));
                    var_27 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_5)) & (((int) arr_5 [i_3] [1U] [(unsigned short)5]))))));
                    var_28 ^= ((/* implicit */long long int) arr_11 [(signed char)0] [i_1] [(signed char)0] [i_6]);
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_3])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1]))))) || (((/* implicit */_Bool) (~(((unsigned long long int) (signed char)33)))))));
                }
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    var_30 = ((/* implicit */_Bool) var_11);
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (signed char)39))));
                }
                for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((signed char) var_16)))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (max((arr_24 [i_0 + 1]), (arr_24 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((int) max((((/* implicit */int) var_7)), (arr_22 [i_0 - 1] [i_1] [3] [i_8])))))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    var_34 = ((/* implicit */unsigned long long int) var_16);
                    var_35 = ((unsigned long long int) 5294524985312730355ULL);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) var_18);
                        var_36 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(signed char)10])) ? (((unsigned long long int) (unsigned short)4032)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (arr_22 [i_0 - 1] [i_0 - 1] [i_3] [i_10]) : (((/* implicit */int) var_6)))))));
                        var_37 = ((/* implicit */unsigned short) (+(((arr_4 [i_0]) ^ (((/* implicit */unsigned long long int) -855740819164240947LL))))));
                        arr_32 [i_10] [i_9] [i_0] [i_1] [i_1] [(signed char)10] [i_0] = ((/* implicit */long long int) ((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2))) : (arr_28 [6LL] [i_9] [i_3] [i_9]))) - (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_30 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    }
                }
                var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_0]))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), ((+(max((((/* implicit */unsigned long long int) 535822336)), (arr_3 [i_0 - 1])))))));
                    var_40 &= min(((~(((/* implicit */int) (short)-20675)))), (((/* implicit */int) (signed char)114)));
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((max(((-2147483647 - 1)), (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_11])))) * (((((/* implicit */_Bool) arr_23 [i_0] [(signed char)0] [i_3] [2ULL])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_14 [i_11] [(short)4] [(short)0] [i_0])))))) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_3] [(unsigned short)0]))));
                }
            }
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((arr_24 [i_0 + 1]) & (((unsigned long long int) arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
            var_43 = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_21 [i_0 + 1] [i_0 + 1])), (((((/* implicit */long long int) ((/* implicit */int) (signed char)84))) * (281470681743360LL)))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))) ^ (10881622624908787931ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-84)) + (2147483647))) >> (((((/* implicit */int) var_17)) - (30)))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((unsigned short) ((unsigned int) arr_16 [i_0] [i_1] [i_1] [i_0] [i_12]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 3; i_13 < 8; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        {
                            var_45 &= ((/* implicit */signed char) ((long long int) arr_24 [i_0 + 1]));
                            arr_44 [i_0] [(unsigned char)3] [i_13] [i_13] [i_0] = ((/* implicit */long long int) arr_26 [i_1] [i_12] [i_12] [(short)4]);
                            arr_45 [i_0] [(unsigned short)4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_0 - 1]))));
                            var_46 = ((/* implicit */unsigned long long int) (signed char)-108);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_15 = 1; i_15 < 9; i_15 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_16 = 1; i_16 < 10; i_16 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned int) (~(arr_22 [(_Bool)1] [(_Bool)1] [i_0 - 1] [i_15])));
                        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_1])) ? (5294524985312730360ULL) : (((/* implicit */unsigned long long int) arr_38 [i_0 - 1] [i_1] [i_12] [i_15 - 1] [3ULL]))));
                        arr_51 [i_16] [i_1] [i_16 + 1] [i_15 + 1] [i_15] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_16] [i_16])) ? (13152219088396821256ULL) : (((/* implicit */unsigned long long int) 2013073754)))));
                        var_49 = ((/* implicit */signed char) min((var_49), (((signed char) arr_5 [i_16 + 1] [i_1] [i_12]))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        var_50 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) var_13)))) : (2147483647)));
                        var_51 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_12] [i_12] [i_12]))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_55 [i_0] [i_1] [i_15] [i_15] [i_18]))));
                        arr_57 [i_0] [(short)4] [i_1] [i_18] [(signed char)2] [i_15] [i_18] |= ((/* implicit */signed char) (~(arr_30 [i_15 + 1])));
                        arr_58 [i_0 + 1] [i_15] [i_12] [i_15] [i_18] [i_15] = ((/* implicit */signed char) ((6747541456935917187ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [8LL])))));
                        var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_1] [i_1] [i_0 - 1] [i_15 - 1] [i_1]))))))));
                    }
                    arr_59 [i_1] [i_12] [i_15] = ((/* implicit */unsigned long long int) ((unsigned int) (-2147483647 - 1)));
                }
                for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    var_54 = ((/* implicit */unsigned short) ((18ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_0 - 1] [(unsigned short)3] [(short)0] [i_0 + 1])))));
                    var_55 = ((/* implicit */long long int) arr_8 [i_1] [i_1]);
                }
                for (unsigned short i_20 = 0; i_20 < 11; i_20 += 4) 
                {
                    var_56 = ((/* implicit */short) arr_34 [i_0 - 1] [i_12]);
                    var_57 = ((/* implicit */unsigned long long int) arr_41 [i_1] [i_0 - 1] [i_12] [6] [i_0 - 1] [i_12] [i_20]);
                }
            }
            for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                var_58 = ((/* implicit */unsigned short) (signed char)127);
                var_59 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-85))));
                var_60 = ((/* implicit */unsigned short) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [8ULL]);
            }
            for (short i_22 = 0; i_22 < 11; i_22 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    var_61 ^= max((min(((+(5294524985312730349ULL))), (((/* implicit */unsigned long long int) arr_38 [i_23] [i_22] [i_1] [i_0 - 1] [i_0])))), (max(((~(17365295603130860390ULL))), (5294524985312730372ULL))));
                    var_62 ^= ((/* implicit */unsigned long long int) (unsigned short)27284);
                }
                var_63 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -2147483640)) ? (((/* implicit */int) ((unsigned short) (signed char)12))) : (((/* implicit */int) ((unsigned short) 18446744073709551615ULL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_24 = 0; i_24 < 11; i_24 += 1) 
                {
                    var_64 = ((/* implicit */int) arr_18 [i_0 - 1]);
                    var_65 = ((/* implicit */signed char) ((unsigned long long int) 5294524985312730349ULL));
                }
            }
        }
        arr_76 [(signed char)6] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_7 [i_0 - 1])))), ((~(((/* implicit */int) (unsigned char)142))))));
    }
    for (unsigned short i_25 = 0; i_25 < 15; i_25 += 2) 
    {
        var_66 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_79 [i_25])) - (((/* implicit */int) arr_79 [i_25]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)34)) ^ (arr_77 [(unsigned short)0])))) ? (max((((/* implicit */unsigned long long int) arr_80 [i_25])), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) : (4294967281U))))))));
        arr_81 [i_25] [(unsigned short)3] = ((/* implicit */short) max((max((((unsigned int) var_4)), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)58)) | (arr_77 [i_25])))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_78 [i_25])))))));
        var_67 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)63488))))) ? (((((/* implicit */_Bool) arr_78 [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_80 [i_25]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_78 [i_25])) < (((/* implicit */int) arr_78 [i_25]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_26 = 0; i_26 < 15; i_26 += 1) 
        {
            for (signed char i_27 = 3; i_27 < 12; i_27 += 3) 
            {
                {
                    var_68 &= ((_Bool) ((arr_84 [i_25] [i_26] [i_27 - 2]) / (((/* implicit */unsigned long long int) 4294967293U))));
                    arr_87 [i_25] [i_25] [i_27] [(_Bool)1] = arr_78 [i_27 - 2];
                    var_69 = ((/* implicit */long long int) max((var_69), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_85 [i_27] [i_27 + 3] [i_27 - 2] [i_27 + 1]))))))));
                }
            } 
        } 
    }
    for (long long int i_28 = 1; i_28 < 21; i_28 += 1) 
    {
        var_70 = ((/* implicit */short) min(((-(((((/* implicit */_Bool) arr_88 [i_28] [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (arr_88 [i_28] [i_28]))))), (arr_88 [(_Bool)1] [i_28])));
        arr_90 [i_28 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (arr_88 [i_28] [(short)18])))) ? (((/* implicit */int) min(((_Bool)1), (var_7)))) : (((/* implicit */int) ((short) arr_88 [i_28] [i_28])))))) == ((+(max((((/* implicit */unsigned long long int) var_7)), (13152219088396821260ULL)))))));
    }
    var_71 = ((/* implicit */signed char) var_16);
    var_72 = ((/* implicit */signed char) min((var_72), (((/* implicit */signed char) var_3))));
}
