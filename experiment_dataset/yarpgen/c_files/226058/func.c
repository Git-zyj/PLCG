/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226058
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_10 -= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)10] [i_1])))) ? (((int) arr_0 [i_1])) : ((-(((/* implicit */int) ((signed char) arr_0 [i_1])))))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) << (((((/* implicit */int) arr_2 [3LL])) - (110)))))) ? (((/* implicit */long long int) ((112) * (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) 1190957883)) : (var_1))))), (288225978105200640LL)));
            var_11 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((short) (unsigned char)245)))))), (max((((unsigned long long int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)1])) ? (((/* implicit */int) arr_6 [i_0] [(signed char)14] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))))));
            var_12 -= ((/* implicit */long long int) min((max((((unsigned int) (unsigned char)131)), (((/* implicit */unsigned int) arr_5 [i_1 - 3] [i_1] [i_1])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) ((short) arr_5 [(unsigned short)15] [i_2 - 2] [i_2]));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                var_14 = ((/* implicit */unsigned long long int) -1190957883);
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2])))))));
                arr_16 [i_0] [i_0] [11ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3])) ? (arr_14 [i_0] [i_2 + 1] [i_3 - 2]) : (((((/* implicit */_Bool) arr_11 [i_3 - 2])) ? (((/* implicit */int) arr_4 [(unsigned char)1] [14LL] [i_3])) : (1190957868)))));
            }
            var_16 = (-(arr_1 [i_2 - 1] [i_2 - 2]));
        }
        /* LoopSeq 2 */
        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            var_17 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) (signed char)86)) : (arr_14 [i_4 + 1] [i_4 + 1] [i_4 - 1]))) ^ (((int) max((-1190957883), (arr_14 [i_0] [(_Bool)1] [5ULL]))))));
            var_18 = (~(((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)4] [i_4 - 1])) ? (arr_1 [i_4] [i_4]) : (((arr_14 [i_0] [i_0] [i_0]) / (arr_8 [i_4]))))));
            arr_19 [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0]);
            arr_20 [i_0] [i_0] = ((/* implicit */_Bool) arr_17 [(unsigned short)14] [i_4]);
            var_19 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
        }
        for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 3; i_7 < 15; i_7 += 4) 
                {
                    var_20 -= (~(((long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))));
                    var_21 = ((/* implicit */unsigned char) ((long long int) ((long long int) ((((/* implicit */int) (short)124)) | (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                    var_22 = ((/* implicit */unsigned char) var_7);
                    var_23 = ((/* implicit */short) (~(min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_4)))))))));
                    var_24 = ((/* implicit */short) 4148049654368044357ULL);
                }
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? (arr_14 [i_5] [4LL] [i_5]) : (-372804037)))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((((/* implicit */int) arr_13 [i_8] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_5]))))))) * (((((/* implicit */_Bool) (-(arr_21 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)29318)) : (arr_24 [i_6] [7] [7])))) : (((((/* implicit */_Bool) (short)32767)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)18)))))))));
                    var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_0]) | (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6])))))) : (arr_23 [i_0])));
                }
                /* LoopSeq 2 */
                for (unsigned int i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 4; i_10 < 15; i_10 += 4) 
                    {
                        arr_38 [6LL] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */int) arr_29 [i_0])) - (((/* implicit */int) ((unsigned char) (signed char)127)))))));
                        var_27 = arr_14 [i_9] [i_9] [i_9];
                        var_28 = ((/* implicit */long long int) (+(((/* implicit */int) arr_27 [i_9] [i_9 + 1] [i_9 - 1] [13] [i_9 - 1] [i_9 + 1]))));
                        var_29 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_0] [i_0] [14ULL] [i_0] [(unsigned short)6] [(unsigned short)1] [i_10]))))), (((((/* implicit */long long int) arr_8 [i_0])) / (2061584302080LL)))))), (((((unsigned long long int) var_9)) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_37 [i_0] [i_5] [i_9]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12603)))))))))));
                    }
                    var_30 = ((((/* implicit */_Bool) ((unsigned short) arr_15 [7ULL] [i_9 + 1] [i_9 - 1] [i_9]))) ? (((/* implicit */int) (short)-20181)) : ((+(((/* implicit */int) ((_Bool) arr_32 [i_0] [i_5]))))));
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) 2062048508))), (var_6)))) ? (max(((~(7877943113389526723LL))), (((/* implicit */long long int) (~(arr_17 [i_0] [i_0])))))) : (arr_22 [(_Bool)1]))))));
                    var_32 = ((/* implicit */unsigned long long int) 61890820);
                    var_33 = ((/* implicit */signed char) ((_Bool) arr_11 [13LL]));
                    arr_42 [i_0] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_5 [i_11] [i_5] [i_0])) * (((((/* implicit */_Bool) var_4)) ? (arr_17 [7ULL] [(unsigned short)7]) : (-896354926))))));
                }
                /* LoopSeq 3 */
                for (int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    arr_45 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) arr_10 [i_0]))), ((-(arr_30 [i_0] [i_5] [i_6] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_12]))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_22 [i_0]))));
                    var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))));
                    var_35 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_31 [i_0] [i_0] [i_5] [(short)4] [i_12]))));
                }
                /* vectorizable */
                for (signed char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    var_36 -= ((/* implicit */_Bool) ((signed char) 402653184));
                    arr_48 [i_13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) var_1)) < (6516795222508965107ULL)))));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */int) (short)12633)) ^ (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (signed char)-57))))));
                }
                for (unsigned short i_14 = 1; i_14 < 14; i_14 += 1) 
                {
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */short) arr_9 [i_0])), (arr_0 [i_0])))), (((unsigned int) arr_35 [i_0] [i_0]))))) ? (((/* implicit */int) arr_13 [(unsigned short)15] [(unsigned short)15] [i_0] [(unsigned short)15])) : (((/* implicit */int) var_9))));
                    var_39 -= ((/* implicit */unsigned char) max((((int) ((unsigned char) arr_30 [(signed char)4] [i_5] [(signed char)4] [i_5]))), (((int) (signed char)-87))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_54 [i_0] [i_15] = (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_15] [i_0] [i_0] [i_5])), (arr_46 [i_0] [9ULL] [i_14] [9ULL])))) ? (var_0) : (100773606))));
                        arr_55 [(signed char)4] [i_0] [i_5] [(short)14] [(signed char)14] = ((/* implicit */long long int) max((min((((((/* implicit */int) arr_27 [i_0] [i_0] [i_6] [i_6] [i_14] [7ULL])) - (((/* implicit */int) (_Bool)1)))), (((int) arr_24 [i_0] [i_5] [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [5LL])))))));
                    }
                    var_40 -= ((/* implicit */signed char) arr_43 [i_0] [i_6] [i_14]);
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_59 [2] [i_5] [i_0] [i_14] [i_16] = ((/* implicit */signed char) arr_43 [i_5] [1ULL] [i_14]);
                        var_41 -= ((/* implicit */int) (signed char)117);
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    var_42 -= ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_62 [i_0] [(short)6] [i_0] [i_0])))));
                    arr_63 [i_0] [i_5] [i_6] [i_0] [i_17] = ((/* implicit */int) ((unsigned long long int) var_6));
                }
            }
            for (unsigned int i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                var_43 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((arr_43 [2ULL] [2ULL] [2ULL]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) arr_44 [13ULL] [(unsigned char)13] [i_0] [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) (_Bool)0))))))));
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((int) arr_33 [i_18] [i_19] [i_19] [i_19] [i_19])))));
                            var_45 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_18])) : (((/* implicit */int) arr_9 [i_20])))) != (((((/* implicit */int) arr_9 [i_0])) * (((/* implicit */int) arr_2 [i_20]))))));
                            arr_71 [i_0] [i_5] [i_0] [i_0] [i_20] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (1040199745) : (((/* implicit */int) arr_64 [i_5] [i_5]))))) | (min((arr_39 [(unsigned char)14]), (((/* implicit */long long int) arr_4 [i_0] [(signed char)8] [i_19])))))));
                        }
                    } 
                } 
            }
            for (long long int i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                var_46 = ((/* implicit */signed char) arr_25 [i_21] [i_0] [i_0]);
                var_47 -= ((/* implicit */int) min((min((max((arr_35 [i_21] [i_21]), (arr_67 [i_21] [i_0] [i_21] [(signed char)14]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_21])) == (arr_66 [i_21] [4] [i_21] [i_21])))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2147483640)))))));
                /* LoopSeq 3 */
                for (short i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    var_48 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))) < (((((/* implicit */_Bool) arr_69 [i_21] [i_21] [i_21] [i_21] [i_21] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_21] [(unsigned char)0]))))) : ((~(-2147483645)))))));
                    var_49 -= ((/* implicit */unsigned short) arr_13 [i_22] [4LL] [i_21] [8LL]);
                }
                for (int i_23 = 2; i_23 < 12; i_23 += 4) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned int) 6281209824742203960ULL);
                    var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) arr_41 [10LL] [i_5] [i_23] [i_5]))));
                }
                for (int i_24 = 2; i_24 < 12; i_24 += 4) /* same iter space */
                {
                    arr_84 [i_0] [i_5] [(unsigned char)8] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_83 [(short)10] [i_0] [i_0]), (arr_83 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (((arr_83 [(unsigned short)8] [i_0] [i_21]) / (arr_83 [i_0] [i_0] [i_21])))));
                    var_52 -= ((/* implicit */signed char) ((long long int) ((unsigned int) min((((/* implicit */unsigned long long int) arr_83 [i_0] [i_24] [i_21])), (14298694419341507286ULL)))));
                    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) 3131171375U))));
                }
                var_54 = ((unsigned long long int) ((((/* implicit */_Bool) min((3220194515481088743ULL), (((/* implicit */unsigned long long int) arr_52 [i_0] [i_0] [i_5] [11LL] [i_21]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(_Bool)1])) && (((/* implicit */_Bool) 3131171394U))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) < (4294967295U))))));
                var_55 = ((/* implicit */unsigned long long int) min((var_55), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_5]))));
            }
            var_56 -= (!(((((/* implicit */_Bool) arr_41 [i_5] [i_5] [12ULL] [i_5])) || (((/* implicit */_Bool) max((-896354926), (((/* implicit */int) var_5))))))));
        }
        arr_85 [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])), (2305843009213693951ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_5 [i_0] [i_0] [i_0])))))));
        var_57 -= ((/* implicit */unsigned char) max((arr_65 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_0) : (((/* implicit */int) arr_80 [i_0] [i_0] [i_0] [i_0])))))))));
    }
    var_58 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_8))))) / (((long long int) (+(((/* implicit */int) var_9)))))));
}
