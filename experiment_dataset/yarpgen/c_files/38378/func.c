/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38378
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)0)))))) : (((arr_0 [i_0 - 1]) >> (((2204209832U) - (2204209819U)))))));
        arr_5 [(unsigned char)10] = ((/* implicit */_Bool) (~((-(1322906786238025820ULL)))));
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_13 [i_1] = ((/* implicit */short) var_10);
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(arr_3 [i_2])));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                arr_18 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)0)), (383859036U)));
                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (var_9) : (((/* implicit */int) var_2))))))), (arr_3 [i_3])));
                arr_20 [i_3] [i_1] [i_1] [7ULL] = ((/* implicit */unsigned long long int) ((int) 6926339603365780276ULL));
            }
        }
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 14; i_4 += 1) 
        {
            arr_24 [(unsigned short)10] |= ((/* implicit */int) max((1125899906842623ULL), (((/* implicit */unsigned long long int) 6185060668760859658LL))));
            arr_25 [i_1] [i_4] = ((/* implicit */unsigned short) max((((unsigned int) ((6185060668760859658LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) min((arr_6 [12]), ((unsigned short)15360)))) ? (2238102290U) : (815306372U)))));
            arr_26 [i_1] [13U] [13U] = ((/* implicit */unsigned int) (~(arr_0 [(signed char)15])));
            arr_27 [i_1] [i_1] = ((/* implicit */unsigned int) var_3);
        }
        arr_28 [i_1] = ((/* implicit */_Bool) max((max((arr_1 [i_1 - 2]), (((var_10) >> (((885038865U) - (885038821U))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-41))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(unsigned short)8] [i_1]))) : (((unsigned long long int) arr_21 [14LL] [14LL]))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_33 [i_5] [i_5] = ((/* implicit */unsigned int) ((5331383455230718646ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))));
        arr_34 [i_5] = ((/* implicit */unsigned int) ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-93)))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_39 [i_6] = ((/* implicit */unsigned int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6])))));
        /* LoopSeq 2 */
        for (long long int i_7 = 4; i_7 < 14; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                arr_46 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) 4227012843U);
                /* LoopNest 2 */
                for (long long int i_9 = 4; i_9 < 13; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            arr_51 [i_6] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned short)29209)) - (29201))))))));
                            arr_52 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_30 [i_7 - 2])) + (((3514687160558505896ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33882)))))));
                            arr_53 [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((1125899906842623ULL) != (1125899906842623ULL)));
                            arr_54 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8 + 2] [i_6]))) % (var_11)));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        {
                            arr_62 [i_6] [i_6] [i_6] [i_7] [i_7] [(unsigned char)6] [i_7] &= ((/* implicit */unsigned short) (~(((7478727108865447353ULL) % (((/* implicit */unsigned long long int) -1503862061))))));
                            arr_63 [i_6] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_43 [i_6]))));
                            arr_64 [i_6] [i_13] [i_12] [i_11] [i_7 - 3] [i_6] [i_6] = ((int) arr_40 [i_6] [i_11] [i_12]);
                        }
                    } 
                } 
                arr_65 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (arr_40 [i_6] [i_6] [i_7 - 4])));
                /* LoopNest 2 */
                for (unsigned char i_14 = 1; i_14 < 14; i_14 += 3) 
                {
                    for (short i_15 = 1; i_15 < 11; i_15 += 2) 
                    {
                        {
                            arr_73 [i_6] [i_6] [i_11] [i_14] [i_14] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_74 [i_6] [i_11] [i_6] [i_14] [i_6] = ((/* implicit */int) ((long long int) ((unsigned char) var_0)));
                            arr_75 [i_6] [i_7] [i_7] = var_6;
                        }
                    } 
                } 
                arr_76 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) 3409118043U)) + (arr_2 [i_6] [i_11])));
            }
            for (short i_16 = 0; i_16 < 15; i_16 += 4) 
            {
                arr_79 [i_6] [i_6] [i_6] = ((/* implicit */signed char) (_Bool)1);
                arr_80 [i_6] [i_7] [i_6] = ((/* implicit */long long int) ((int) arr_59 [(unsigned short)2] [(unsigned short)2] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 2]));
            }
        }
        for (unsigned char i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_18 = 1; i_18 < 12; i_18 += 1) 
            {
                for (unsigned int i_19 = 0; i_19 < 15; i_19 += 3) 
                {
                    for (short i_20 = 1; i_20 < 12; i_20 += 3) 
                    {
                        {
                            arr_91 [11LL] [11LL] [11LL] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_58 [i_6] [11ULL] [i_6] [i_6] [i_20 + 1])) : (var_9)));
                            arr_92 [i_6] [i_6] [14] [14] [14] [10U] = ((((/* implicit */unsigned long long int) arr_30 [i_18 + 1])) >= (((((/* implicit */_Bool) arr_81 [10ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [(short)7] [i_20] [i_18] [(unsigned char)4]))) : (12777185458863604569ULL))));
                            arr_93 [i_6] [i_17] [4U] [i_17] [i_17] = ((/* implicit */unsigned int) arr_59 [i_17] [i_20] [i_19] [i_6] [i_17] [i_6]);
                        }
                    } 
                } 
            } 
            arr_94 [i_6] [i_6] [2ULL] = ((((/* implicit */_Bool) 9452333508611744419ULL)) ? (((/* implicit */int) (unsigned char)248)) : (1966915247));
        }
    }
    for (short i_21 = 0; i_21 < 11; i_21 += 1) 
    {
        arr_98 [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [(short)14])) ^ (var_9)))) ? (((((/* implicit */_Bool) arr_61 [i_21] [i_21] [12] [(signed char)12] [(unsigned short)4] [i_21] [(signed char)6])) ? (2721167793U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_21] [i_21] [8U] [(unsigned short)8] [8U] [i_21] [i_21])) ? (((/* implicit */int) arr_61 [i_21] [(signed char)4] [14] [i_21] [(signed char)0] [6ULL] [i_21])) : (((/* implicit */int) (_Bool)1)))))));
        arr_99 [i_21] = ((/* implicit */unsigned short) arr_78 [i_21] [7] [7]);
        arr_100 [i_21] [i_21] = ((/* implicit */unsigned short) arr_11 [4] [4] [(unsigned char)8]);
    }
}
