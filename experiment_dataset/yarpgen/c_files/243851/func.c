/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243851
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 4325140865782098600ULL)) ? (((/* implicit */int) (signed char)-86)) : (-1397154016)))));
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned short)57096);
        var_12 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) 1910740460)), (3800652315U)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
        {
            var_13 |= ((/* implicit */signed char) -2126528531);
            var_14 = ((/* implicit */unsigned short) (-(-1)));
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1 - 1]))));
        }
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_15 = arr_7 [i_5] [i_1 + 1];
                            arr_21 [i_6] [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((/* implicit */int) min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1 - 1])), (var_5))))));
                        }
                    } 
                } 
            } 
            arr_22 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((unsigned int) var_4))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) -6496339494425889904LL)) : (16502592865886511126ULL)))) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_14 [i_1 - 1] [i_1] [i_1])))), (((/* implicit */int) (signed char)100)))))));
            arr_23 [i_1] [i_1] [i_1 + 1] = (+(((/* implicit */int) (signed char)-124)));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
            {
                arr_28 [i_1] [i_3] [i_3] [i_7] = ((/* implicit */int) arr_6 [i_1]);
                arr_29 [i_1 + 1] [i_1 + 1] [i_7] = ((/* implicit */unsigned long long int) var_2);
            }
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
            {
                arr_32 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1 - 1]))))) : (((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (2474375640U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1])))))));
                arr_33 [i_1] [i_1] [i_1] [i_8] = (((!(((/* implicit */_Bool) max((arr_2 [i_8] [i_3]), (((/* implicit */long long int) arr_1 [i_3]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2305843009213693952ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27292)) ? (((/* implicit */int) (unsigned char)2)) : (-1)))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_12 [i_1] [i_1] [10ULL])))));
                arr_34 [i_1] [i_3] [i_8] [i_3] = ((/* implicit */short) arr_13 [i_1] [i_1] [i_1]);
            }
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) 6685115716528741931ULL);
            arr_38 [i_1 + 1] [i_9] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) -3778753409327712470LL)) ? (((/* implicit */int) (short)-6624)) : (((/* implicit */int) var_6))))))), ((+(((long long int) 3805269075U))))));
            /* LoopSeq 3 */
            for (short i_10 = 1; i_10 < 9; i_10 += 4) 
            {
                arr_42 [i_1] [i_9] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) -1052021349)) % (-7386627810676275702LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27708))))) : ((-(((/* implicit */int) arr_16 [i_10 + 1] [i_10] [i_10 + 1] [i_10 - 1]))))));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    arr_45 [i_1] [i_10] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) min((((((/* implicit */_Bool) arr_30 [i_1] [i_9] [i_9])) ? (var_1) : (((/* implicit */int) arr_20 [i_11] [i_9] [i_9] [i_1] [i_1])))), (min((arr_40 [i_1] [i_9] [i_10] [i_11]), (1704317946))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_1] [i_9] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_2)))))))) : (min((arr_31 [i_9] [i_10 + 3] [i_11]), (((/* implicit */unsigned int) arr_14 [i_11] [i_9] [i_1 + 1]))))));
                    arr_46 [i_10] = ((/* implicit */short) min((2134453778867543506LL), (6877206547995955287LL)));
                }
                arr_47 [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))));
            }
            for (int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                var_18 |= ((/* implicit */int) ((unsigned long long int) ((_Bool) min((var_1), (((/* implicit */int) var_4))))));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    arr_55 [i_1 - 1] [i_12] [i_13] = ((/* implicit */_Bool) min((((/* implicit */int) var_9)), ((-(((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) arr_44 [i_13] [i_12] [i_9] [i_1] [i_1]))))))));
                    arr_56 [i_13] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967283U))));
                    arr_57 [i_1] [i_1] [i_12] [i_13] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_11 [i_1 - 1])))))));
                }
                var_19 *= ((/* implicit */unsigned char) var_0);
                arr_58 [i_1] [i_9] [i_1] = ((/* implicit */unsigned short) 539466724U);
            }
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                arr_61 [i_1] = ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    arr_66 [i_15] [i_14] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_62 [i_1 + 1] [i_1])))) && (((/* implicit */_Bool) (unsigned char)164))));
                    arr_67 [i_1 + 1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((var_1) + (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) (unsigned short)40205)))));
                    var_20 = ((/* implicit */signed char) var_7);
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 1552863596)) : (var_2)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) % (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)218)) ^ (var_1))))));
                }
                for (signed char i_16 = 1; i_16 < 9; i_16 += 4) 
                {
                    arr_70 [i_16] [i_16] [i_16] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11804812922177676838ULL)) ? (776623030U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18995)))))) ? (346492225U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220)))));
                    arr_71 [i_16] [i_9] [i_14] [i_16] = ((/* implicit */int) (_Bool)0);
                    arr_72 [i_1] [(signed char)6] [i_14] [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65535))));
                }
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_76 [i_17] [i_9] [i_9] [i_17] [i_9] [i_9] = ((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_3))));
                    arr_77 [i_1] [i_9] [(unsigned char)2] [i_17] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_1 - 1] [i_1] [i_1] [i_1 + 1]))));
                }
                var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) 1588796917)), (4047934043U)));
            }
            var_24 -= ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (arr_43 [i_1 + 1] [i_1])))))));
        }
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)19658));
                    arr_84 [i_19] [i_18] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_69 [i_18])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1411495078)) != (2847508901U)))), (min((8246401697112451034ULL), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 1])) * (((/* implicit */int) arr_50 [i_1 - 1] [i_1 - 1] [i_1 + 1])))))));
                    arr_85 [i_1] [i_18] [i_18] = ((/* implicit */signed char) ((_Bool) (unsigned short)24987));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 10; i_20 += 4) 
    {
        for (unsigned int i_21 = 2; i_21 < 7; i_21 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (short i_23 = 0; i_23 < 10; i_23 += 4) 
                    {
                        {
                            arr_95 [i_20] [i_21 + 3] [i_22] = ((/* implicit */unsigned char) ((int) -654568374));
                            var_26 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)1251)), (4294967295U)));
                            var_27 = ((/* implicit */unsigned short) ((signed char) (~(arr_2 [(unsigned short)7] [(unsigned short)7]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_24 = 0; i_24 < 10; i_24 += 4) 
                {
                    for (long long int i_25 = 0; i_25 < 10; i_25 += 4) 
                    {
                        for (long long int i_26 = 0; i_26 < 10; i_26 += 4) 
                        {
                            {
                                var_28 &= ((/* implicit */unsigned int) min((arr_99 [i_24] [i_21 + 2] [i_24] [i_25] [i_26]), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)-27194))) / (arr_80 [i_20] [i_21 + 3]))) != (((/* implicit */long long int) max((var_0), (var_0)))))))));
                                var_29 = ((/* implicit */_Bool) (~(409461474)));
                            }
                        } 
                    } 
                } 
                arr_104 [i_21] [i_20] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_44 [i_21] [i_21 - 1] [i_21] [i_21] [i_21]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_27 = 1; i_27 < 15; i_27 += 4) 
    {
        arr_108 [i_27] = ((/* implicit */unsigned long long int) (~((~(arr_105 [i_27] [i_27])))));
        arr_109 [i_27] = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) var_8)) : (arr_105 [i_27 + 3] [i_27])))))));
        var_30 ^= (+((+(((/* implicit */int) (unsigned char)0)))));
    }
    for (unsigned short i_28 = 0; i_28 < 21; i_28 += 4) 
    {
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min(((((-(2041024156))) + (((/* implicit */int) arr_112 [(signed char)15] [i_28])))), (((/* implicit */int) var_8)))))));
        arr_113 [i_28] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-60)) | (-847324984)))) ? (((int) arr_111 [i_28])) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)57)))));
    }
    for (unsigned long long int i_29 = 0; i_29 < 24; i_29 += 4) 
    {
        arr_117 [i_29] [i_29] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((int) arr_116 [i_29]))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_114 [i_29])) ? (arr_114 [i_29]) : (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : ((~(4294967286U)))))));
        var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (-4438922749653835542LL) : (arr_116 [i_29])));
        arr_118 [i_29] = ((/* implicit */unsigned long long int) var_2);
        /* LoopSeq 2 */
        for (unsigned int i_30 = 2; i_30 < 21; i_30 += 4) 
        {
            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_6))));
            arr_122 [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 17380886141594804043ULL)) ? (7595098102945808452LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (186421313U))))))) : (5613489185318334211ULL)));
            var_34 = ((/* implicit */long long int) ((unsigned long long int) min((0), ((~(809492690))))));
            arr_123 [5] [i_30] = ((/* implicit */_Bool) (short)7037);
        }
        for (unsigned int i_31 = 0; i_31 < 24; i_31 += 4) 
        {
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 1496436275))) ? (max((((/* implicit */int) min(((short)25759), (((/* implicit */short) arr_119 [i_31] [i_29] [(unsigned short)5]))))), ((+(((/* implicit */int) arr_115 [i_31])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_7)))))))));
            /* LoopNest 2 */
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (unsigned short i_33 = 4; i_33 < 22; i_33 += 4) 
                {
                    {
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(arr_124 [(unsigned short)17])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (arr_132 [i_33 + 1] [i_33 - 1] [i_32] [i_33] [i_33 - 4])))));
                        arr_134 [i_33 - 3] [i_31] [i_32] [i_33] [i_31] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) min((arr_114 [i_33]), (((/* implicit */unsigned int) (unsigned short)17872))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_114 [i_29])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (4294967295U) : (0U)))))));
                    }
                } 
            } 
            var_37 = (~((~(((/* implicit */int) (unsigned short)29157)))));
        }
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-64)), (2U)))) ? (min((((/* implicit */long long int) (unsigned short)24576)), (var_7))) : (((/* implicit */long long int) ((var_1) ^ (((/* implicit */int) var_3))))))))))));
    }
}
