/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48391
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
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_2 [i_0]))))) + (((int) arr_2 [i_0])))));
        var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) var_0))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)128))));
                                arr_15 [i_0] [i_4] [i_4] [i_3] [i_4] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) + (arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4])) + (((/* implicit */int) arr_13 [i_4]))))) ? ((+(((/* implicit */int) arr_2 [i_3])))) : (((/* implicit */int) arr_11 [10]))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (arr_8 [i_0] [i_1] [i_1] [i_2])))));
                }
            } 
        } 
        var_13 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_14 [(unsigned char)20] [i_0 + 1] [4] [i_0 + 1] [(_Bool)1] [i_0] [(unsigned char)20]))))) ? (((arr_13 [(unsigned short)10]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [1ULL] [19]))))) : (((/* implicit */unsigned long long int) ((arr_6 [22U] [i_0]) & (arr_6 [i_0] [i_0])))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_2)) * (arr_8 [i_5] [i_5] [i_5] [i_5]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [0LL])))));
        arr_21 [(unsigned short)2] = ((/* implicit */_Bool) ((((unsigned long long int) (unsigned char)248)) + (((/* implicit */unsigned long long int) var_2))));
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 8; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                {
                    arr_28 [(unsigned short)2] [0] = ((/* implicit */short) var_9);
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)49791)) : (((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_7 - 1])) ^ (((/* implicit */int) arr_22 [i_7 + 2])))))));
                    var_15 = min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)69)), ((unsigned short)0)))), (min((((arr_0 [i_6] [i_8]) << (((((/* implicit */int) var_7)) - (91))))), (((/* implicit */unsigned int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))))))));
                    var_16 = ((/* implicit */unsigned short) ((arr_18 [i_6]) ? (((/* implicit */int) min((var_0), (((/* implicit */signed char) arr_13 [i_6]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_2)) : (var_3)))) == (max((((/* implicit */unsigned long long int) arr_14 [i_6] [i_7] [i_7 + 1] [i_7] [i_8] [i_7] [22LL])), (var_6))))))));
                }
            } 
        } 
        arr_29 [(_Bool)1] = ((arr_7 [i_6] [i_6] [i_6] [i_6]) & (18446744073709551615ULL));
    }
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
    {
        var_17 *= ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((arr_10 [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */int) var_0)) : (arr_9 [i_9]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_9] [i_9])) : (((/* implicit */int) var_7))))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned int i_11 = 1; i_11 < 10; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 2; i_13 < 7; i_13 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) 18446744073709551615ULL)));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (arr_7 [i_11 - 1] [i_11] [(signed char)7] [i_11 + 1])))) ? (((((/* implicit */_Bool) arr_2 [i_9])) ? (max((var_9), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)15745)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (18446744073709551615ULL)))) || (((/* implicit */_Bool) var_6)))))))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_8 [i_9] [i_11] [i_9] [i_13 - 2])))) ? (((arr_8 [i_9] [i_9] [i_9] [i_13]) + (arr_8 [(short)7] [i_10] [(unsigned char)6] [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_9] [i_10] [i_11 + 1] [i_12])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        arr_46 [i_9] [i_11 + 1] [i_10] [i_14] [i_11 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_11] [(unsigned char)13] [(unsigned char)13] [i_11 + 1] [i_11 + 1] [i_11 + 1]))) != (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22)))))));
                        var_22 = ((/* implicit */long long int) var_6);
                    }
                    for (short i_15 = 2; i_15 < 10; i_15 += 4) 
                    {
                        arr_50 [i_9] [i_10] [i_9] [(unsigned char)7] [i_15] = var_2;
                        var_23 = ((/* implicit */long long int) arr_2 [i_9]);
                    }
                }
            } 
        } 
        var_24 = min((((/* implicit */unsigned long long int) max((((long long int) 930532644344979362ULL)), (((/* implicit */long long int) (unsigned short)60860))))), (1822324889627092322ULL));
    }
    /* LoopNest 3 */
    for (int i_16 = 1; i_16 < 16; i_16 += 3) 
    {
        for (int i_17 = 0; i_17 < 19; i_17 += 2) 
        {
            for (unsigned char i_18 = 0; i_18 < 19; i_18 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (unsigned char i_20 = 1; i_20 < 15; i_20 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (arr_62 [i_16] [(unsigned short)9] [i_18])));
                                arr_64 [(_Bool)1] [(_Bool)1] [i_18] [i_19] [i_19] = ((/* implicit */int) ((((min((var_6), (((/* implicit */unsigned long long int) arr_59 [14ULL])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)211)) != (((/* implicit */int) (signed char)-97)))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)0))))))));
                                var_26 = ((/* implicit */unsigned int) max((min((((((/* implicit */int) var_4)) + (arr_5 [i_20 + 1] [i_19]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (930532644344979353ULL)))))), (((/* implicit */int) ((unsigned char) max((var_8), (((/* implicit */unsigned long long int) var_1))))))));
                                arr_65 [i_16] [i_16] [i_19] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(var_3)))) ? (max((var_6), (((/* implicit */unsigned long long int) arr_54 [i_17] [i_17] [i_16])))) : (((/* implicit */unsigned long long int) var_2)))), (min((arr_61 [i_20 + 4] [i_20] [i_19] [i_20] [8]), (((/* implicit */unsigned long long int) ((arr_63 [i_19] [i_19]) * (((/* implicit */unsigned int) arr_6 [i_17] [(signed char)21])))))))));
                            }
                        } 
                    } 
                    arr_66 [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_55 [i_16] [i_17])) != (max((16ULL), (((/* implicit */unsigned long long int) 4294967295U))))))) < (((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */int) var_0)), (arr_9 [(_Bool)1]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))) < (10122100908247932422ULL))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) (unsigned short)127)) ? (272007638U) : (8381779U)))))) : (var_6)));
    var_28 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (signed char i_21 = 2; i_21 < 17; i_21 += 1) 
    {
        for (signed char i_22 = 0; i_22 < 19; i_22 += 4) 
        {
            {
                arr_72 [i_22] = ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_22] [2U] [i_22] [i_21]))) : (var_3))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))))));
                var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-1)))))) : (arr_61 [i_21 - 1] [i_22] [i_22] [i_21 - 1] [i_22]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) >= (max((((/* implicit */unsigned long long int) (unsigned short)65516)), (8580477393927489010ULL)))))))));
            }
        } 
    } 
}
