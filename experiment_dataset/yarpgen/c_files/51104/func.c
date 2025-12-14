/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51104
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [10] = min((((long long int) var_7)), (((/* implicit */long long int) min((((/* implicit */int) max(((short)-10435), (((/* implicit */short) arr_1 [i_0]))))), (((int) (short)32767))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((short)-10435), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_0])) : ((~(arr_3 [i_0]))))) != (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                arr_14 [i_1] [i_2] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((short) (~(arr_12 [i_3] [i_3]))))), (((((/* implicit */_Bool) ((short) arr_6 [i_1]))) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) arr_9 [i_1 + 1]))))));
                arr_15 [i_1 + 1] [i_2 - 2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_3)))) * (min((arr_10 [i_1 + 1] [i_2 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_10)))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_20 [i_5] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_3]))))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-10437)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) var_0)))))))));
                            arr_21 [i_3] [i_2 - 2] [i_5] [i_3] [i_5] = ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
                arr_22 [i_1 + 1] = ((/* implicit */_Bool) var_18);
            }
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                arr_26 [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_11 [i_1 + 1]))))));
                arr_27 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((min((((/* implicit */unsigned short) var_0)), (var_13))), (((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned char) (_Bool)1)))))))) < (((/* implicit */int) min((arr_16 [i_2 - 2] [i_2 + 1] [(unsigned short)18]), (((/* implicit */unsigned short) arr_7 [i_1 + 1])))))));
                arr_28 [i_1] [i_2 - 1] [i_2] [i_6 + 1] = ((/* implicit */_Bool) ((signed char) var_10));
                arr_29 [i_1 - 1] = ((/* implicit */unsigned short) min((arr_8 [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)174)))))));
            }
            for (long long int i_7 = 3; i_7 < 16; i_7 += 1) 
            {
                arr_33 [i_2 - 1] [i_2 - 1] = ((/* implicit */short) ((((((/* implicit */int) (short)-32616)) ^ (((/* implicit */int) arr_23 [i_7 - 1] [i_2 - 1] [i_1 + 1])))) * (((/* implicit */int) ((signed char) arr_8 [i_7 - 3] [i_1])))));
                arr_34 [i_7 - 1] [i_7] [i_2] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_19 [i_1] [i_2] [i_7] [i_7 - 1] [(signed char)9] [i_7 - 1] [i_2]))))))));
                /* LoopNest 2 */
                for (short i_8 = 2; i_8 < 18; i_8 += 3) 
                {
                    for (signed char i_9 = 3; i_9 < 18; i_9 += 2) 
                    {
                        {
                            arr_41 [i_1] [i_2] [i_7] [i_8] [i_9 - 1] = ((/* implicit */unsigned int) ((10062493779664578361ULL) - (max((7714109189022429112ULL), (((/* implicit */unsigned long long int) ((var_3) << (((var_2) + (2071191669))))))))));
                            arr_42 [i_1] [i_7] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) max((var_17), (((/* implicit */unsigned char) var_16))))), (((short) arr_38 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_9 - 3] [i_2 - 1] [i_7])) || (((/* implicit */_Bool) var_10))))) != (((/* implicit */int) arr_13 [i_1] [(signed char)10] [i_8] [(short)16]))))) : (((/* implicit */int) ((short) max((121041179), (-121041184)))))));
                            arr_43 [i_1] [i_2] [12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_15) && (((/* implicit */_Bool) (unsigned short)49239)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) && (((/* implicit */_Bool) var_12))))), (min((((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_7 - 1] [i_2] [i_1] [i_8])), (var_8))))) : (((/* implicit */unsigned long long int) 1240632625809633699LL))));
                        }
                    } 
                } 
                arr_44 [i_7 - 3] [i_7] [i_2 + 1] [(signed char)6] = ((/* implicit */short) ((max((8384250294044973254ULL), (((/* implicit */unsigned long long int) (unsigned short)41198)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_32 [i_1] [i_1] [i_7 - 1])) : (((/* implicit */int) arr_9 [i_1 - 1])))))));
            }
            arr_45 [i_2] = max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)18));
            /* LoopNest 3 */
            for (long long int i_10 = 4; i_10 < 16; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            arr_55 [i_10] [i_10] [i_10] = ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */short) var_16)))))) < (min((((/* implicit */unsigned int) var_15)), (4235009183U)))))), (max(((unsigned char)239), ((unsigned char)53)))));
                            arr_56 [i_1 + 1] [i_2] [i_10] = max(((((-(var_3))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1] [i_2] [i_10] [i_10]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)24337))) ? (((((/* implicit */int) var_16)) * (((/* implicit */int) (unsigned char)180)))) : (((/* implicit */int) var_12))))));
                            arr_57 [i_2] [i_2] [i_10] [i_11] [i_12] [i_2] [i_11] |= ((/* implicit */short) min((max((2192031144U), (2102936150U))), (arr_37 [i_1] [2U] [i_1] [i_12])));
                            arr_58 [(signed char)9] [i_2] [(_Bool)1] [i_12] [(_Bool)1] [i_10] = ((/* implicit */int) ((((/* implicit */int) ((signed char) -540976444))) > (((((/* implicit */int) ((2192031144U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) - ((~(((/* implicit */int) (unsigned short)24320))))))));
                        }
                    } 
                } 
            } 
            arr_59 [i_1] [i_1] = max((((((/* implicit */_Bool) arr_30 [i_2 - 1] [i_2] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_30 [i_2 + 1] [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_30 [i_1 - 1] [i_2] [i_2 + 1] [i_2 - 1])))), (((/* implicit */int) (short)3227)));
        }
        /* vectorizable */
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
        {
            arr_63 [(_Bool)1] [i_13] = ((/* implicit */short) (~(arr_11 [i_1 - 1])));
            arr_64 [1ULL] [i_13] [i_13] = (-(((/* implicit */int) (unsigned char)107)));
            arr_65 [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)53))));
            arr_66 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_36 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
        }
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
        {
            arr_70 [i_1] [i_14] = ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) max((var_0), ((signed char)97)))), (((((/* implicit */_Bool) arr_23 [i_14] [(signed char)12] [i_1])) ? (((/* implicit */unsigned long long int) arr_48 [0] [i_1] [0])) : (18436184260123772785ULL))))));
            /* LoopSeq 1 */
            for (short i_15 = 3; i_15 < 18; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    for (unsigned int i_17 = 1; i_17 < 18; i_17 += 2) 
                    {
                        {
                            arr_77 [i_14] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) arr_36 [i_1 - 1] [i_17] [i_17 - 1] [i_16] [i_14])))))));
                            arr_78 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [(signed char)4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_74 [i_16])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
                arr_79 [i_15 - 1] [i_14] [i_14] [i_1] = ((/* implicit */short) var_16);
                arr_80 [(signed char)10] [(signed char)18] = min((((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)202)), (var_12))))))), (max((((/* implicit */unsigned int) (unsigned short)22856)), (3229907185U))));
                arr_81 [i_15] [i_15] [i_15 - 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)15133)))))));
            }
            arr_82 [i_1 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_53 [(signed char)4])))));
        }
        for (signed char i_18 = 1; i_18 < 16; i_18 += 4) 
        {
            arr_85 [i_18] [i_18] [(unsigned char)16] = ((/* implicit */short) var_15);
            arr_86 [i_1] [i_1] = ((((/* implicit */_Bool) var_2)) ? (((arr_18 [(unsigned char)3] [i_18] [i_1 + 1] [i_1 - 1] [i_1] [i_1]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (var_8))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_1 + 1] [i_18] [i_18] [i_18] [6])) >> (((/* implicit */int) (_Bool)0))))), (max((((/* implicit */unsigned int) (unsigned char)184)), (3921133341U)))))));
        }
        arr_87 [i_1] = ((/* implicit */unsigned short) (-(((var_15) ? (((16383329510770884571ULL) / (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((var_18) / (((/* implicit */int) var_12)))))))));
        arr_88 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 1])) || (((/* implicit */_Bool) var_8))))), (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_1)))))) : (((unsigned long long int) var_2))))));
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 14; i_19 += 3) 
    {
        arr_91 [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
        arr_92 [i_19] [(signed char)12] = ((((/* implicit */_Bool) var_14)) ? (4611686018427386880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
        arr_93 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_69 [i_19] [i_19] [i_19])) / (((/* implicit */int) (unsigned short)24316))));
    }
    var_19 = var_6;
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) var_12)), (min((var_11), (((/* implicit */unsigned int) var_0))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (signed char)-49)))))) : (max((((/* implicit */unsigned long long int) var_7)), (2063414562938667045ULL)))))) && ((((!(((/* implicit */_Bool) var_18)))) && (((/* implicit */_Bool) min((var_17), (var_17))))))));
}
