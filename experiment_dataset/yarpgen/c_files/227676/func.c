/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227676
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_17 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)8] [(unsigned short)8]))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            arr_5 [(short)4] [i_1 - 2] [i_1 - 2] |= ((/* implicit */short) (unsigned short)65535);
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_18 = ((/* implicit */signed char) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10ULL] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_2] [i_4]))) : (arr_14 [i_4]))))));
                        var_20 += ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) arr_1 [i_4] [i_4])))));
                        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) (unsigned short)1))));
                        arr_16 [i_0] [3LL] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535)))))));
                    }
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_3] [i_0] = (+(arr_4 [i_2] [i_1]));
                        var_22 = ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_12 [i_1 + 1] [i_0])) : (((/* implicit */int) arr_12 [i_1 - 2] [i_0])));
                    }
                    arr_20 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_3] [i_0] = ((/* implicit */unsigned short) arr_18 [i_1 - 1]);
                    var_23 ^= ((((/* implicit */int) arr_7 [8U] [i_1 - 2] [i_1])) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 4])));
                }
            }
            arr_21 [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [9])) : (((/* implicit */int) (unsigned short)34)))));
        }
        for (short i_6 = 3; i_6 < 12; i_6 += 1) 
        {
            arr_24 [i_0] [i_0] [i_6] = ((/* implicit */long long int) (+(arr_6 [i_6 + 3] [i_0] [i_0] [i_0])));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                arr_27 [i_0] [(short)1] [i_0] = ((/* implicit */int) 8618509577949875614ULL);
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 4] [i_6] [i_6] [i_0 + 4] [i_7])) ? (((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_6] [i_7] [i_0] [i_7]))) : (((/* implicit */int) ((unsigned short) (unsigned short)65511)))));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_30 [i_0 + 2] [i_0] = ((/* implicit */signed char) arr_9 [i_0 + 2] [i_0 - 1] [i_0 + 3] [(signed char)14]);
            var_25 = ((/* implicit */unsigned char) arr_11 [i_8] [i_8] [i_0] [i_8] [i_8]);
            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0 + 3] [i_0]))));
            arr_31 [i_0] = ((/* implicit */signed char) ((arr_23 [i_0 - 1] [i_8] [i_8]) % (arr_23 [i_0 - 1] [1] [i_0 - 1])));
            /* LoopSeq 4 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                arr_34 [i_0] [i_8] [i_0] = (+((+(((/* implicit */int) arr_22 [i_9])))));
                arr_35 [i_0] [i_8] [i_9] = ((/* implicit */unsigned long long int) (((+(9223372036854775807LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
            }
            for (signed char i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                arr_38 [(unsigned char)6] [i_10 - 1] [i_10] &= ((/* implicit */int) 0ULL);
                arr_39 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(arr_33 [i_8] [i_10 + 1])));
                /* LoopSeq 2 */
                for (int i_11 = 2; i_11 < 13; i_11 += 4) /* same iter space */
                {
                    arr_43 [i_11] &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)0))) ? (((((/* implicit */_Bool) arr_42 [i_11] [i_8])) ? (arr_29 [i_0] [i_10] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_10] [i_0] [11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2004075914U))))));
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_47 [i_0] [i_8] = ((/* implicit */int) ((unsigned long long int) arr_3 [i_0]));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_11]))) - (arr_14 [i_11]))))));
                        arr_48 [i_0] [i_0] [i_11] [i_11 + 1] [i_12] &= ((/* implicit */signed char) (+(arr_26 [i_0 + 3] [i_10 - 1] [i_11 - 2])));
                        arr_49 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_15 [(signed char)12] [i_10 - 1] [i_0]))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) : (18446744073709551609ULL)));
                        arr_54 [i_0] [i_8] [i_0] [i_11 - 1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_45 [i_8] [(signed char)1] [i_11] [i_11] [i_8] [i_11 + 1] [i_0]))));
                    }
                }
                for (int i_14 = 2; i_14 < 13; i_14 += 4) /* same iter space */
                {
                    arr_57 [4U] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)19)) <= (arr_46 [i_0] [i_0] [i_0] [12] [i_0] [12]))));
                    var_29 ^= ((/* implicit */_Bool) (signed char)40);
                }
                var_30 -= ((/* implicit */int) ((_Bool) (!((_Bool)0))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_28 [(unsigned char)13] [i_8])));
                var_32 += (~(((/* implicit */int) arr_51 [i_15])));
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 16; i_16 += 4) 
                {
                    arr_64 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)-108))) ? (((((/* implicit */int) (short)8)) / (arr_46 [i_0] [i_0] [i_15] [i_16] [i_16] [(signed char)8]))) : (((/* implicit */int) arr_40 [i_0 + 3] [i_8] [i_8] [i_15] [i_15]))));
                    arr_65 [i_0] [i_8] [i_8] [i_0] = ((/* implicit */unsigned int) (~(0ULL)));
                }
            }
            for (unsigned int i_17 = 4; i_17 < 13; i_17 += 2) 
            {
                arr_70 [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_32 [i_0] [i_17] [i_8] [i_0]))))));
                arr_71 [i_0] [i_0] = ((/* implicit */short) (+(((unsigned long long int) 3498556718U))));
            }
        }
        arr_72 [i_0] [8ULL] |= ((/* implicit */long long int) (+(arr_59 [i_0 - 1] [(short)12] [i_0])));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 2) 
    {
        arr_75 [i_18] [i_18] = ((/* implicit */int) arr_73 [i_18] [i_18]);
        /* LoopSeq 2 */
        for (long long int i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            var_33 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) 1533719943)) ^ (var_11))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_18] [6] [i_19]))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_76 [i_19] [i_19] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) + ((((_Bool)1) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))))))) : ((~(arr_77 [i_18])))));
            arr_79 [i_18] [i_19] = ((/* implicit */unsigned int) arr_76 [i_19] [i_19] [i_19]);
            /* LoopSeq 1 */
            for (long long int i_20 = 4; i_20 < 15; i_20 += 2) 
            {
                arr_83 [i_19] = ((/* implicit */short) min((((((/* implicit */_Bool) ((int) (signed char)111))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_74 [i_19] [i_19]))))) : (max((arr_76 [i_19] [i_19] [i_18]), (((/* implicit */long long int) arr_81 [i_18] [i_18] [i_19] [i_19])))))), (((/* implicit */long long int) ((short) (+(arr_77 [i_18])))))));
                arr_84 [i_19] [i_19] = ((/* implicit */long long int) 4163831999U);
                /* LoopSeq 3 */
                for (short i_21 = 3; i_21 < 17; i_21 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_22 = 2; i_22 < 16; i_22 += 2) 
                    {
                        arr_91 [i_18] [11] [i_19] [i_18] = ((/* implicit */signed char) ((min((((/* implicit */int) arr_88 [i_20 + 2] [i_21] [i_21 - 2] [i_21 - 2] [i_22 + 1])), ((+(((/* implicit */int) arr_90 [i_21] [i_20] [i_19] [i_18])))))) ^ (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_81 [i_20 + 1] [i_21] [i_22] [(signed char)4])) : (((/* implicit */int) arr_90 [i_20 + 1] [i_19] [i_19] [i_19]))))));
                        var_34 &= ((/* implicit */short) (((_Bool)1) ? (-9223372036854775806LL) : (((/* implicit */long long int) 2004075926U))));
                        arr_92 [i_19] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_11)))))))));
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (unsigned short)65522))))))));
                    }
                    arr_93 [i_19] [i_21] [i_20] [i_21] [(unsigned short)13] = ((/* implicit */_Bool) min((((((((/* implicit */int) arr_87 [i_18] [i_19] [i_20] [i_21 - 1])) < (((/* implicit */int) arr_81 [i_18] [i_18] [i_18] [i_18])))) ? ((~((-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */int) arr_80 [i_18] [i_20] [i_21])) >= (((/* implicit */int) (unsigned short)0))))))), (((/* implicit */int) max((arr_73 [(signed char)10] [i_20 - 3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))))))))));
                    var_36 &= ((((unsigned long long int) ((unsigned short) arr_85 [i_18] [i_18] [i_18] [i_18] [i_18]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_73 [i_20] [(short)3])) ? (((long long int) 4294967283U)) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_21 - 3] [i_19] [i_20 + 3] [16ULL])))))));
                }
                for (int i_23 = 0; i_23 < 18; i_23 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_24 = 0; i_24 < 18; i_24 += 4) 
                    {
                        arr_100 [i_18] &= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-64)) ? (arr_85 [i_18] [i_19] [i_20] [i_20] [i_23]) : (arr_97 [i_18] [i_18] [i_18]))))) ? (((16777088ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_20 + 3] [i_18] [i_20 + 3] [2LL] [i_20 - 4]))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_97 [i_24] [i_20] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
                        var_37 &= ((/* implicit */int) (_Bool)1);
                        arr_101 [i_18] [8] [i_23] [i_20] [i_24] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_88 [i_18] [i_18] [i_18] [i_18] [i_18])), (((unsigned int) arr_99 [i_24] [i_24] [i_20 - 2] [i_20 + 2] [i_20 - 1] [i_20] [i_20 - 1]))));
                        var_38 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) 1090715534753792ULL)))));
                        var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)237)) ? (2342849126U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_96 [(signed char)4] [i_19]))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_94 [i_24]))))) : (((((/* implicit */_Bool) arr_90 [i_20 - 3] [i_20 + 1] [i_20 - 2] [i_20 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_90 [i_20 - 3] [i_20 + 1] [i_20 - 2] [i_20 + 3]))) : (2290891381U)))));
                    }
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((13804841150594961425ULL) % (((/* implicit */unsigned long long int) 2004075918U))))) ? ((~(-4222563129231147064LL))) : ((~(arr_95 [i_20] [i_20] [i_20 - 1] [i_19])))));
                }
                for (signed char i_25 = 0; i_25 < 18; i_25 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_26 = 0; i_26 < 18; i_26 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) ((((arr_105 [i_19] [i_20 - 4] [i_20] [(signed char)12] [i_20 + 2]) ? (((((/* implicit */long long int) ((/* implicit */int) arr_73 [i_18] [i_25]))) / (arr_76 [i_19] [i_20] [i_19]))) : (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_18] [i_19] [i_19] [i_20 - 3]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (signed char)0)))))));
                        var_42 = ((/* implicit */signed char) min((arr_95 [i_18] [i_20] [i_25] [i_19]), (((/* implicit */long long int) (+(((/* implicit */int) arr_73 [i_20 + 3] [13ULL])))))));
                        arr_106 [i_19] [i_19] [i_26] = ((/* implicit */short) arr_85 [i_25] [i_25] [i_25] [i_25] [i_25]);
                        var_43 = ((/* implicit */unsigned long long int) (signed char)127);
                    }
                    var_44 += ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) arr_81 [i_19] [i_19] [i_19] [3LL]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_103 [i_18] [i_20])) ? (((/* implicit */int) arr_94 [i_25])) : (((/* implicit */int) (short)32764))))))) && ((!(((/* implicit */_Bool) ((unsigned long long int) arr_76 [i_20] [i_18] [i_20]))))));
                    var_45 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_98 [i_20] [i_19] [i_20] [i_25] [i_19])) ? (((/* implicit */int) arr_98 [i_18] [i_18] [i_19] [(_Bool)1] [i_25])) : (((/* implicit */int) arr_90 [i_25] [i_20 - 1] [i_19] [i_18])))) < (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) (unsigned short)30))))));
                }
                arr_107 [i_18] [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_85 [i_18] [(_Bool)1] [i_19] [i_18] [i_19])) ? (((/* implicit */int) arr_87 [i_18] [i_18] [i_19] [i_20])) : (((/* implicit */int) arr_102 [i_18] [i_19] [i_19] [i_20] [i_19])))))) ? (((/* implicit */long long int) (+((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))))))) : ((~(arr_95 [i_20 - 3] [i_20 - 2] [i_20 - 4] [i_19])))));
            }
            var_46 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23)) ? ((~(((((/* implicit */int) (short)32757)) ^ (((/* implicit */int) (short)32767)))))) : ((((-(((/* implicit */int) arr_87 [i_19] [i_18] [i_18] [i_18])))) + (((((/* implicit */int) (short)-32761)) + (var_12)))))));
        }
        for (signed char i_27 = 1; i_27 < 17; i_27 += 2) 
        {
            var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (((((~(3206807996U))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))) ? (((int) arr_96 [i_27 + 1] [i_18])) : (max((((/* implicit */int) arr_104 [i_27 - 1] [i_27 - 1])), (((((/* implicit */int) (signed char)3)) / (((/* implicit */int) arr_87 [i_27] [i_18] [i_18] [i_18])))))))))));
            var_48 -= min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_95 [i_18] [i_27 + 1] [i_18] [i_18]))))), (((unsigned int) arr_89 [i_27] [i_18] [i_27 - 1] [i_27 + 1] [i_27 + 1])));
            var_49 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32755)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_99 [i_18] [i_18] [i_18] [(_Bool)1] [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_105 [i_27] [i_27] [4] [i_27] [i_27])) : (((/* implicit */int) arr_103 [i_27] [i_27 - 1]))))) ? (((/* implicit */int) ((short) arr_103 [i_27] [i_18]))) : (arr_108 [i_27 - 1] [i_27 + 1] [i_27 - 1]))) : (((/* implicit */int) (unsigned short)2))));
        }
    }
}
