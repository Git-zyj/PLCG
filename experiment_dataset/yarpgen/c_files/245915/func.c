/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245915
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 2233785415175766016ULL);
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [(signed char)5] [(signed char)10] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-93)) & (((/* implicit */int) (signed char)97))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) 140737488355324LL))) + ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (140737488355325LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_19 [(signed char)8] [i_4] = ((/* implicit */unsigned int) arr_15 [i_4] [i_4]);
        var_20 -= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (arr_17 [5ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_5] [i_5])) : (((/* implicit */int) arr_21 [i_5] [i_5]))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    arr_28 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_21 [i_6] [i_7])) % (((/* implicit */int) var_15))))));
                    arr_29 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6]))))) : (((/* implicit */int) arr_20 [i_6] [i_5]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_8 = 3; i_8 < 22; i_8 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) arr_26 [i_5] [i_8]);
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                var_23 |= ((/* implicit */unsigned short) arr_25 [i_5] [i_9] [i_9]);
                /* LoopNest 2 */
                for (short i_10 = 4; i_10 < 22; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_39 [i_11] [i_8] [i_10 + 1] [17U] [i_9] [i_8] [i_5] = ((/* implicit */_Bool) arr_27 [i_8] [i_8]);
                            arr_40 [(unsigned char)2] [i_8] [i_5] = ((/* implicit */int) (-(arr_32 [i_8])));
                            var_24 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) -140737488355346LL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        {
                            arr_45 [i_13] [i_8] [i_9] [i_8] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_44 [i_5] [i_8]))) % (((((/* implicit */int) (short)32758)) + (((/* implicit */int) arr_35 [i_5] [i_5] [(unsigned char)9] [i_5]))))));
                            arr_46 [i_5] [i_8] [i_8] [i_12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) ((arr_30 [i_8 + 3] [i_8]) <= (arr_30 [i_8 - 3] [i_8])));
                            arr_47 [i_5] [i_9] [i_9] [i_8] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_5] [i_8 - 2] [(unsigned short)12] [i_8] [i_9] [i_12] [15ULL]))))) ? (((/* implicit */int) arr_25 [i_5] [i_8] [i_9])) : (((/* implicit */int) (unsigned char)157)));
                        }
                    } 
                } 
            }
            var_25 = (~(((((/* implicit */unsigned int) ((/* implicit */int) var_15))) % (2807784181U))));
        }
        var_26 = ((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (arr_36 [i_5] [17LL] [i_5] [2LL] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_5] [i_5]))));
    }
    /* LoopNest 3 */
    for (short i_14 = 0; i_14 < 13; i_14 += 4) 
    {
        for (long long int i_15 = 2; i_15 < 10; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 13; i_18 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-6469178938244150583LL)))));
                                var_28 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((arr_30 [i_17] [i_17]), (var_3)))) ? (((/* implicit */int) (unsigned char)139)) : (((((/* implicit */int) (unsigned short)26431)) << (((((/* implicit */int) arr_31 [i_14] [i_15] [i_16])) - (55895)))))))));
                                var_29 |= ((/* implicit */int) 1500820052U);
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 992)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31491))) & (var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) arr_16 [i_16])) ? (16891377043367498366ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_18] [i_17] [i_16] [i_16] [i_15] [14LL] [i_14])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 1) 
                    {
                        for (signed char i_20 = 2; i_20 < 12; i_20 += 2) 
                        {
                            {
                                arr_69 [i_19] [i_20 - 2] = ((/* implicit */int) arr_60 [i_16] [i_15 - 2] [i_14]);
                                arr_70 [i_14] [i_16] [i_19] [i_20 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252)))))))) != ((((+(((/* implicit */int) (unsigned char)3)))) + (((/* implicit */int) arr_58 [i_14] [i_15 - 2] [i_16]))))));
                                var_31 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_15 - 2] [i_20])))))));
                                var_32 = ((/* implicit */unsigned short) arr_67 [i_14]);
                            }
                        } 
                    } 
                    var_33 ^= ((/* implicit */unsigned short) arr_42 [(signed char)16] [i_15]);
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 13; i_22 += 2) 
                        {
                            {
                                arr_76 [8LL] [i_15] [(unsigned char)12] [i_15] [i_15 + 2] = ((/* implicit */unsigned short) (-(max((arr_56 [i_15 + 2] [i_21 + 1] [i_21]), (((/* implicit */unsigned int) var_2))))));
                                var_34 = ((/* implicit */unsigned int) (unsigned short)26431);
                                arr_77 [i_22] [i_21 + 1] [i_16] [i_15] [i_15] [i_14] = ((/* implicit */long long int) (signed char)97);
                                arr_78 [i_22] = ((/* implicit */unsigned long long int) arr_48 [i_15 - 2]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_23 = 1; i_23 < 12; i_23 += 1) 
                    {
                        var_35 = ((/* implicit */int) arr_60 [i_14] [(unsigned char)4] [i_23 + 1]);
                        var_36 = ((/* implicit */short) (+(((/* implicit */int) arr_55 [i_16] [i_15 - 2] [i_16] [i_23 - 1]))));
                    }
                    for (int i_24 = 0; i_24 < 13; i_24 += 3) 
                    {
                        var_37 |= ((/* implicit */unsigned long long int) arr_83 [i_14] [i_15 + 3]);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned short) var_2);
                            arr_88 [i_15] = var_0;
                            var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9151559469253067985LL))));
                        }
                        for (long long int i_26 = 0; i_26 < 13; i_26 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((var_0) << (((2807784181U) - (2807784157U)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_89 [i_26] [i_24] [(short)0] [(unsigned char)4] [11LL] [i_14]))))) : (var_18)));
                            var_41 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_36 [i_26] [i_24] [i_16] [i_15] [i_14])) ? (arr_83 [i_24] [(signed char)8]) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_85 [i_14] [i_15 + 2] [i_16] [i_24] [i_24] [i_26]))))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_58 [i_14] [i_16] [(_Bool)1]))))) || (((arr_66 [11LL] [i_15] [i_16] [(signed char)11] [(_Bool)1] [i_26]) < (((/* implicit */unsigned int) var_11))))))))));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)26431))))))))));
                            arr_91 [i_14] [i_14] [i_15] [i_16] [i_24] [3LL] [i_26] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) arr_51 [i_14] [i_15 + 1] [i_15 - 1])))))));
                            var_43 *= ((/* implicit */_Bool) arr_89 [i_26] [i_24] [i_16] [i_15] [i_14] [i_14]);
                        }
                        for (unsigned long long int i_27 = 2; i_27 < 11; i_27 += 4) 
                        {
                            arr_96 [(_Bool)1] [i_15 + 1] [i_16] [i_24] [i_27] = ((/* implicit */long long int) var_9);
                            var_44 ^= ((/* implicit */long long int) (~(((((((/* implicit */_Bool) arr_58 [8ULL] [i_15] [i_14])) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (short)(-32767 - 1))))) & (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned char)139)))))))));
                        }
                        for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 2) 
                        {
                            var_45 = ((/* implicit */unsigned short) -4906961537976500592LL);
                            arr_100 [i_14] = ((/* implicit */long long int) (~(((((/* implicit */int) ((unsigned char) var_18))) << (((140737488355346LL) - (140737488355332LL)))))));
                            var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_15 + 3] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 - 2] [i_15 - 2] [i_15 + 3])))))));
                            var_47 = ((/* implicit */unsigned char) var_15);
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            var_48 = (~(((long long int) (_Bool)1)));
                            arr_104 [i_29] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-75))))) ? ((((~(((/* implicit */int) arr_75 [i_14] [i_14] [i_14] [(signed char)1] [i_14])))) * (((/* implicit */int) (signed char)32)))) : (((/* implicit */int) ((signed char) arr_59 [i_14] [i_14] [i_14] [i_15 + 2] [i_15 - 2] [i_15 + 3])))));
                            var_49 = ((/* implicit */long long int) var_14);
                            arr_105 [i_14] [(unsigned char)3] [i_29] [i_16] [i_24] [(signed char)3] [i_29] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_41 [i_15 + 3] [i_15] [i_15 - 1] [i_15] [i_15 - 1])), ((-(((/* implicit */int) arr_41 [i_15 + 1] [i_15 + 1] [(short)1] [i_15] [i_15 + 3]))))));
                        }
                        for (int i_30 = 1; i_30 < 12; i_30 += 2) /* same iter space */
                        {
                            arr_109 [i_30] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26431)) << (((((/* implicit */int) (short)32767)) - (32764)))));
                            arr_110 [i_14] [i_15 - 1] [i_30] [i_24] [i_30] = (!(((/* implicit */_Bool) ((var_2) ? ((-(((/* implicit */int) arr_85 [i_14] [i_14] [i_14] [i_14] [(_Bool)1] [i_14])))) : (((((/* implicit */_Bool) 140737488355345LL)) ? (((/* implicit */int) (unsigned short)39122)) : (((/* implicit */int) (short)-32751))))))));
                            arr_111 [i_14] [i_30] [1] [i_24] [i_30] = max((((/* implicit */long long int) (-(((/* implicit */int) arr_81 [i_30 + 1] [i_15 - 1] [i_15] [i_14]))))), (arr_30 [i_14] [i_30]));
                            var_50 *= ((/* implicit */long long int) ((arr_65 [i_14]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : ((-(((/* implicit */int) (signed char)-54)))))))));
                        }
                        for (int i_31 = 1; i_31 < 12; i_31 += 2) /* same iter space */
                        {
                            arr_114 [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-39))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1344795362)) - (-140737488355336LL)))) : (((var_18) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_113 [i_14] [i_16] [9LL])))))))));
                            var_51 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_14] [i_15 + 2] [i_31 + 1] [i_31] [i_31]))))), (var_11)));
                        }
                        var_52 = ((/* implicit */long long int) ((arr_41 [i_14] [i_15] [i_16] [(signed char)10] [i_24]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_26 [i_15 + 1] [18])));
                        var_53 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_38 [i_24] [i_24] [i_24] [i_16] [i_15] [i_14] [i_14]))));
                    }
                    for (signed char i_32 = 0; i_32 < 13; i_32 += 2) 
                    {
                        arr_117 [i_32] [i_16] [9ULL] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)107)) << (((((-7795123073876080981LL) + (7795123073876081007LL))) - (24LL)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7795123073876080980LL)) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)26410))))) : (((((/* implicit */unsigned int) arr_64 [i_14] [3LL] [(signed char)7] [i_32] [i_32])) & (arr_17 [i_15])))))) : (140737488355345LL)));
                        arr_118 [i_32] [(unsigned short)9] [i_15] [3ULL] = ((/* implicit */unsigned int) (~(arr_36 [(_Bool)1] [i_15 + 2] [i_15] [(unsigned short)20] [i_32])));
                    }
                }
            } 
        } 
    } 
}
