/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223399
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [(_Bool)1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((213169511579951633LL) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4))))))) : (((/* implicit */int) (unsigned char)74))));
                    var_17 ^= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_3)), (min((arr_2 [(short)0] [i_1]), (((/* implicit */unsigned long long int) (short)32151)))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2882553256U)) ? (arr_7 [i_0] [i_1] [7LL]) : (((/* implicit */int) var_13)))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) ((470796029) / (arr_7 [i_0] [(_Bool)1] [i_0])))), (((((/* implicit */_Bool) (unsigned short)0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_14 [(signed char)18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (short)(-32767 - 1)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-10300)) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) var_2)), (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned char) (signed char)127)))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min(((short)1023), (var_1))))) ? (((((/* implicit */_Bool) -470796030)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (signed char)-100)))) : ((~(((/* implicit */int) var_14)))))))));
    }
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_20 *= ((/* implicit */unsigned char) max((((long long int) max((-5651681438829879125LL), (((/* implicit */long long int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [(signed char)14] [3U])) < ((+(((/* implicit */int) var_14)))))))));
        var_21 = ((/* implicit */_Bool) max((((arr_13 [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4]))))), (((/* implicit */unsigned int) arr_15 [i_4] [6LL]))));
    }
    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) ((((15254163776087679595ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_22 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12015))) : (8613474008273357324ULL))) * (((/* implicit */unsigned long long int) var_3))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)255)), (((((/* implicit */_Bool) 8613474008273357324ULL)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) ^ (arr_17 [(unsigned short)11] [i_7]))) : (((/* implicit */unsigned long long int) 8433661988407608941LL))));
                    arr_28 [i_5] [(unsigned char)12] [(short)12] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8613474008273357316ULL)) ? (min((-6356356052926885224LL), (((/* implicit */long long int) (signed char)(-127 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15254163776087679595ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_16)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_13 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [13]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -4651107671678538577LL))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((signed char) arr_17 [i_5] [i_7])))));
                        var_26 = ((/* implicit */signed char) (((((_Bool)0) ? (arr_22 [(unsigned short)0] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))))) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7])))));
                        var_27 = ((/* implicit */_Bool) (~(-8433661988407608942LL)));
                    }
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_10 [i_5] [(_Bool)1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) arr_24 [i_5])))));
                        arr_35 [(unsigned char)10] [11U] [i_5] [10] = ((/* implicit */long long int) max((max((min((((/* implicit */unsigned long long int) (unsigned short)32738)), (10891031355540701644ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_14))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_12 = 3; i_12 < 11; i_12 += 4) 
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_40 [i_11 - 1] [i_12 + 2] [(unsigned char)2])) == (8433661988407608946LL)));
                    arr_45 [i_5] [(_Bool)1] [i_11 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_11]))))) ? (-2385189914010884488LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_12])))));
                    arr_46 [i_12 - 3] [i_11 - 1] [i_10] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_3);
                    arr_47 [(signed char)8] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_12 + 1] [i_11 - 1])) * (((/* implicit */int) arr_25 [i_11 - 1] [i_12 - 2] [(unsigned short)12]))));
                    arr_48 [(signed char)7] [i_10] = ((/* implicit */_Bool) -2385189914010884488LL);
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_31 = (~(var_6));
                    var_32 = (~(var_16));
                    var_33 ^= ((/* implicit */short) var_12);
                }
                for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((short) ((1061839294) / (((/* implicit */int) var_5))))))));
                        arr_57 [i_5] [i_5] [0] [i_5] [i_5] [i_5] [(unsigned char)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                    }
                    arr_58 [(short)0] [(short)0] [i_11 - 1] [i_14] = ((/* implicit */_Bool) ((unsigned short) ((-3071544138659096180LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-1))))));
                    arr_59 [i_11 - 1] [(signed char)9] [0LL] [(short)2] [i_11 - 1] [9ULL] = ((/* implicit */signed char) ((arr_40 [i_11 - 1] [i_14] [i_11]) / (arr_40 [i_11 - 1] [(_Bool)1] [i_11 - 1])));
                    arr_60 [i_10] = arr_16 [i_11 - 1];
                }
                var_35 = ((/* implicit */long long int) (_Bool)1);
                arr_61 [i_5] [i_5] [(_Bool)1] [(unsigned short)2] = ((/* implicit */unsigned int) ((short) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
                arr_62 [i_11] [i_10] = ((/* implicit */unsigned int) ((short) (-(arr_22 [(_Bool)1] [i_10]))));
            }
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                var_36 *= ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) arr_32 [i_5] [(signed char)4] [i_10] [12LL] [i_16] [(signed char)7]))))), (arr_37 [i_5] [i_10] [i_16]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (var_3))) >= (((/* implicit */int) (_Bool)1)))))));
                arr_66 [i_16] [3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))), (var_16)));
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_37 = ((/* implicit */short) (-(((/* implicit */int) arr_50 [i_5] [i_10] [(short)9] [i_17]))));
                        var_38 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 590648687U)) ? (((/* implicit */int) arr_50 [i_5] [(short)7] [(unsigned char)3] [i_18])) : (arr_64 [i_16] [5LL] [i_16])))));
                    }
                    var_39 = ((/* implicit */int) ((short) ((unsigned int) 98453735)));
                }
            }
            for (signed char i_19 = 2; i_19 < 11; i_19 += 3) 
            {
                arr_75 [(short)10] [i_10] [i_19] [8] = ((/* implicit */short) (_Bool)1);
                var_40 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (arr_16 [i_19 + 2])))) ? (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [(unsigned short)6] [(signed char)3] [(_Bool)1] [(short)6] [i_10] [i_19]))) : (var_7))), (max((arr_22 [(unsigned char)12] [i_10]), (arr_18 [(short)4]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_34 [i_19 - 1] [i_19 + 1] [(unsigned char)9] [i_19 - 1])))));
                arr_76 [(short)0] [2LL] [i_19] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_69 [i_5] [(unsigned char)9] [(_Bool)1] [i_10] [i_19 + 2] [i_19 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [4ULL] [i_10] [(unsigned char)3]))))))))) % (((((/* implicit */int) (short)-1)) % (max((arr_64 [i_5] [(short)6] [8]), (-502299705)))))));
            }
            arr_77 [(_Bool)1] [11LL] [(short)11] = arr_31 [i_5] [i_5] [(signed char)12] [i_10];
            /* LoopNest 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 13; i_21 += 1) 
                {
                    for (int i_22 = 4; i_22 < 12; i_22 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-120))))) < (8796093022207ULL))) ? (((/* implicit */int) min((var_10), (((/* implicit */signed char) arr_32 [i_5] [(signed char)7] [i_10] [i_20] [1LL] [(unsigned short)6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)3955)))))));
                            var_42 ^= ((/* implicit */signed char) (((!(((_Bool) 3951885853281950648LL)))) ? (3915618474556860000LL) : (((/* implicit */long long int) ((/* implicit */int) ((-7748021321908360070LL) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_23 = 0; i_23 < 13; i_23 += 2) 
        {
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_5] [i_23])) + (((/* implicit */int) ((((/* implicit */_Bool) -502299705)) && (((/* implicit */_Bool) var_4))))))))));
            var_44 = ((/* implicit */unsigned char) (_Bool)1);
        }
    }
    var_45 = ((/* implicit */_Bool) (+(((((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) var_13))))));
}
