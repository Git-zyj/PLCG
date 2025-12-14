/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28574
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((long long int) arr_0 [i_0] [i_0]);
        arr_3 [(unsigned short)22] = ((/* implicit */_Bool) min((((((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0]))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_7)))))), ((~((-(((/* implicit */int) (signed char)5))))))));
        var_11 = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_14 [8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (-9187450296249173289LL) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [(unsigned short)4]))) : (9187450296249173288LL)))));
                        var_12 *= (-(-9187450296249173321LL));
                        var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-3))));
                        var_14 = ((/* implicit */signed char) (-(14688166021449191897ULL)));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */signed char) var_3);
    }
    var_16 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (long long int i_5 = 3; i_5 < 21; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 23; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_32 [i_6] [i_5] = ((/* implicit */signed char) ((10678185111023594471ULL) | (max((7768558962685957125ULL), (((/* implicit */unsigned long long int) 9187450296249173279LL))))));
                                arr_33 [0] [i_5] [i_7] = ((/* implicit */signed char) ((unsigned int) (!(var_10))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) arr_18 [i_5]);
                    var_18 = ((/* implicit */unsigned int) max((max((arr_27 [i_7] [i_6] [(signed char)1] [i_5 + 2]), (arr_27 [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_5 + 1]))), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                }
                arr_34 [i_6] [i_6] [i_5] = ((((/* implicit */_Bool) -5338877423547312315LL)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (10678185111023594491ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5] [i_5]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_9)) : (arr_10 [15LL] [i_6] [i_5 + 1]))))) : ((-(var_2))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_27 [(unsigned char)8] [i_5] [i_5 + 3] [(unsigned char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13688))) : (18446744073709551614ULL))), (((/* implicit */unsigned long long int) max((arr_27 [20LL] [20LL] [i_5 + 1] [(short)4]), (-1404130173244020895LL)))))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 22; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        {
                            arr_42 [(signed char)0] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [8U] [8U] [i_10 + 1] [i_5 - 1])) : (((/* implicit */int) arr_13 [(_Bool)1] [(signed char)12] [i_10 + 1] [i_5 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_5 - 1] [i_10] [i_10 - 1] [i_5 - 3]), ((unsigned char)225))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))) + (4294967279U))));
                            /* LoopSeq 2 */
                            for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                            {
                                arr_45 [i_11] [i_5] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) var_9)))));
                                var_20 -= ((/* implicit */short) var_6);
                                var_21 = ((/* implicit */_Bool) var_6);
                            }
                            for (unsigned int i_13 = 1; i_13 < 23; i_13 += 1) 
                            {
                                arr_48 [i_5 + 2] [i_5] [i_5 + 3] [i_5] [i_5] = ((/* implicit */unsigned char) (-(min((10678185111023594487ULL), (((/* implicit */unsigned long long int) (signed char)127))))));
                                arr_49 [i_5] [i_5] [i_5 - 2] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)1023))));
                            }
                            var_22 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) var_2)))));
                            arr_50 [i_5] [i_6] [i_6] [i_6] [i_5] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_7 [i_6]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (4294967288U) : (((/* implicit */unsigned int) var_9))))) : (min((10678185111023594490ULL), (((/* implicit */unsigned long long int) (unsigned short)35589)))))));
                            arr_51 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((short) (-(((/* implicit */int) arr_18 [i_5])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_14 = 2; i_14 < 15; i_14 += 2) 
    {
        var_23 ^= ((/* implicit */unsigned long long int) (short)32755);
        arr_54 [5LL] = ((/* implicit */int) ((unsigned short) (+(var_5))));
    }
    /* vectorizable */
    for (long long int i_15 = 4; i_15 < 24; i_15 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_59 [i_15] [(short)15] [i_16] = ((/* implicit */long long int) 4294967266U);
            arr_60 [i_15] [(signed char)23] [(signed char)23] = ((/* implicit */signed char) (short)32755);
        }
        for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            arr_64 [i_15] [i_17] = ((/* implicit */signed char) ((unsigned short) ((short) var_10)));
            arr_65 [i_15 - 2] [i_15 - 2] [i_15 - 2] = ((/* implicit */short) ((_Bool) (_Bool)1));
            arr_66 [i_15] = ((/* implicit */int) -2173275268052665571LL);
        }
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            for (short i_19 = 0; i_19 < 25; i_19 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 25; i_20 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_77 [i_21] [i_21] [i_19] [i_21] [i_15] = (unsigned short)17190;
                            arr_78 [i_21] [i_15] [i_21] [i_21] [i_18 + 1] [i_15] = ((/* implicit */short) ((signed char) ((unsigned char) 7768558962685957125ULL)));
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                        {
                            arr_81 [23ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_15 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_10 [i_18 + 1] [i_15 - 2] [i_15 - 2])));
                            arr_82 [i_15 - 1] [i_18 + 1] [i_19] [i_15 - 1] [i_15 - 1] = ((/* implicit */unsigned int) 7768558962685957142ULL);
                            var_24 = ((/* implicit */short) 65528ULL);
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_5))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (unsigned short)24580))));
                        }
                        var_27 = ((/* implicit */int) ((arr_55 [i_15 - 2] [i_15 - 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4))))));
                    }
                    arr_83 [i_18 + 1] [i_18 + 1] = ((/* implicit */unsigned short) (signed char)-3);
                    arr_84 [3LL] [i_18 + 1] [i_15 - 3] = (-(arr_67 [i_15 - 4] [i_18 + 1]));
                }
            } 
        } 
    }
    for (unsigned int i_23 = 4; i_23 < 9; i_23 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)2)) / (((/* implicit */int) (short)13683))));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 10; i_24 += 3) 
        {
            for (int i_25 = 0; i_25 < 10; i_25 += 4) 
            {
                {
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (short)1023))));
                    arr_93 [i_25] [i_25] [i_25] [i_23] = ((/* implicit */signed char) var_2);
                    arr_94 [i_23] [i_23] = ((/* implicit */unsigned long long int) var_7);
                    var_30 = ((/* implicit */_Bool) min((var_30), (((((/* implicit */_Bool) ((signed char) arr_29 [i_25]))) && (arr_90 [i_25] [i_23 - 3])))));
                }
            } 
        } 
        var_31 = ((((unsigned long long int) var_7)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13690))));
    }
}
