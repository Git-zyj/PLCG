/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40343
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 - 2] [i_0] = ((/* implicit */signed char) (unsigned short)0);
                arr_6 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (signed char)-27)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)233))))) : (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) var_5)) : (var_11)))));
                arr_7 [i_0] [i_0] [4LL] = ((/* implicit */long long int) var_2);
                arr_8 [i_0] [i_1 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) < (((/* implicit */int) ((((/* implicit */int) var_18)) < (((/* implicit */int) (unsigned char)233)))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */_Bool) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_13 [(unsigned char)18] [i_2] [i_3] = ((/* implicit */signed char) ((var_14) ? (((((/* implicit */_Bool) var_18)) ? (var_9) : (((/* implicit */int) var_0)))) : ((~((((_Bool)1) ? (((/* implicit */int) (signed char)26)) : (var_12)))))));
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                arr_16 [i_2 - 1] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) var_0);
                arr_17 [i_4] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 9015479587462265834LL)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) (unsigned short)20462))))) % (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                arr_18 [(short)4] [i_3] [(short)4] = ((/* implicit */long long int) var_4);
                arr_19 [(unsigned short)16] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)45093)) % (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (unsigned short)65227))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)1096))) % (212873845U)))));
                arr_20 [i_2] [(_Bool)1] = ((/* implicit */_Bool) (unsigned char)80);
            }
            for (short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_27 [i_2] [i_3] [i_5] [i_6] [i_7] = (((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)308)))))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) var_8))))) : (var_15));
                            arr_28 [i_2 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)33807))))) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))) < ((-(((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                arr_29 [i_2 + 2] [i_3] [i_5] = ((/* implicit */_Bool) var_2);
            }
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                arr_33 [i_8] = ((/* implicit */long long int) var_15);
                arr_34 [i_2] [i_3] [i_3] [i_8] = ((/* implicit */int) (signed char)-29);
                arr_35 [i_8] [i_8] [i_8] [i_2] = ((/* implicit */short) var_3);
            }
            arr_36 [i_2] [i_3] = (-(((/* implicit */int) (unsigned short)59281)));
            /* LoopNest 2 */
            for (long long int i_9 = 3; i_9 < 20; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_41 [i_2 + 1] [i_3] = ((/* implicit */unsigned short) ((var_17) % (((/* implicit */unsigned long long int) (-(4294967295U))))));
                        arr_42 [i_9] [i_9] [i_9] &= var_5;
                        arr_43 [i_2] [i_2] [i_3] [(short)19] [i_3] = ((/* implicit */unsigned short) ((var_9) < ((-(((/* implicit */int) var_3))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            arr_48 [i_2 + 2] [15LL] [i_9] [i_9] [i_10] [i_9] [i_9] = (~(var_15));
                            arr_49 [i_10] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65227)) : (((/* implicit */int) (unsigned short)65522))));
                        }
                    }
                } 
            } 
            arr_50 [(unsigned char)18] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) / (6900428784053527087LL)));
        }
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                {
                    arr_57 [i_13] = ((/* implicit */signed char) var_17);
                    arr_58 [i_2] [i_12] [i_13] = ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_13))))) < (((((/* implicit */_Bool) (signed char)28)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_16)))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_64 [17LL] [i_12] [i_13] [i_14] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-30782))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)63)) / (((/* implicit */int) var_14))))) < (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) : (var_5))))))) : ((~(var_15)))));
                                arr_65 [i_2] [i_2] [i_13] [i_14] [i_2] [i_2] = ((/* implicit */short) ((((var_11) % (((/* implicit */unsigned long long int) -9)))) % ((~(4173390387770713010ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 3; i_17 < 19; i_17 += 1) 
                        {
                            {
                                arr_71 [i_16] [i_17] [i_16] [i_2] [i_2] [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18))));
                                arr_72 [i_17] [i_16] [i_13] [i_16] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30781)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) -361639051565383340LL)))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7))))));
                                arr_73 [i_2] [i_12] [i_13] [0ULL] [i_2] [i_17] &= ((/* implicit */unsigned short) 12171681118568252235ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 21; i_18 += 4) 
        {
            for (long long int i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                {
                    arr_78 [i_2] [i_2] [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2803150689741288410LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-68))))))))) && (((/* implicit */_Bool) -2147483646))));
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        arr_81 [i_20] [i_18] [i_18] [i_2 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) < (var_5))))));
                        arr_82 [i_2 + 1] [i_18] [i_19] [i_20] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521))) / (3746566895U)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_21 = 1; i_21 < 17; i_21 += 1) 
                        {
                            arr_86 [(_Bool)1] [i_20] [i_19] [i_18] [i_2] = ((/* implicit */unsigned int) ((var_1) && (((/* implicit */_Bool) var_17))));
                            arr_87 [i_2] [i_18] [i_21] [i_20] [(unsigned short)9] [i_21] = ((/* implicit */signed char) (unsigned short)53776);
                            arr_88 [i_2] [i_19] [i_18] [i_20] = ((/* implicit */unsigned short) (-(2008530014863233634LL)));
                        }
                        arr_89 [i_2] [i_18] [i_18] [i_20] = ((((/* implicit */_Bool) ((((var_15) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
                        arr_90 [(signed char)1] [(signed char)1] [(signed char)0] [i_20] [i_19] = ((/* implicit */unsigned short) (short)-27485);
                    }
                    arr_91 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2] = ((/* implicit */unsigned short) (+((~(-6592884772088021330LL)))));
                    arr_92 [i_18] = ((/* implicit */unsigned long long int) (short)3453);
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 4; i_22 < 18; i_22 += 3) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                arr_98 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -332145529)) && (((/* implicit */_Bool) 2305702271725338624ULL)))))));
                                arr_99 [i_18] [i_19] [i_22 + 2] &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)71)))) ? (var_17) : (var_17)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
