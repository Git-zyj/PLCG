/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243219
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-6149))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_4] [i_1] = ((/* implicit */unsigned char) var_6);
                                var_11 = ((/* implicit */unsigned int) min((var_11), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */short) var_3)), (var_10)))), (arr_2 [i_2 - 2])))) ? (min((min((0U), (var_9))), (((unsigned int) (short)-6152)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) (short)1429)) : (((/* implicit */int) (short)255)))))))));
                                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1])))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) (signed char)-106);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned long long int) arr_15 [i_5])) : (var_7))) : (((/* implicit */unsigned long long int) min((arr_17 [i_5] [i_6 - 2]), (1623218161U))))));
                arr_18 [15U] [i_5] [15U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (6496071952520065349ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((min((arr_21 [(short)20] [(short)20] [i_8]), (((/* implicit */unsigned int) arr_19 [i_7] [i_8])))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_8]))) != (arr_21 [i_8] [i_7] [i_7])))))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    arr_27 [i_7] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            {
                                arr_34 [(short)14] [4ULL] [i_9] [4ULL] [(signed char)19] = ((/* implicit */signed char) var_6);
                                arr_35 [i_7] [i_8] [i_9] [(unsigned char)20] [i_11] = ((/* implicit */long long int) var_0);
                                var_16 = ((/* implicit */short) ((((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                var_17 = min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_3))))) : (((unsigned int) var_1)))), (((/* implicit */unsigned int) ((unsigned char) arr_21 [i_11] [i_9] [i_7]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) var_9);
                    arr_36 [i_7] [i_7] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_29 [i_7] [i_7] [i_9] [(unsigned char)3])) & (((/* implicit */int) arr_29 [i_7] [i_7] [i_7] [i_7])))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_29 [(unsigned char)4] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) ((unsigned int) var_8))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            {
                                arr_42 [15LL] [i_8] [(short)7] [i_12] [15LL] [i_13] |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (1623218161U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_21 [i_7] [i_7] [i_9]))))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) (signed char)-92))))) ? ((-(((/* implicit */int) arr_23 [i_7] [i_12])))) : (((/* implicit */int) arr_23 [i_7] [i_12])))))));
                                var_20 ^= ((/* implicit */short) (+((~(((/* implicit */int) (unsigned char)161))))));
                                arr_43 [i_13] [(short)18] [i_12] [i_9] [i_9] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) arr_30 [20U] [i_8] [i_8] [i_7] [i_13])))) : ((-(((/* implicit */int) var_1))))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_22 [18U] [i_7] [i_7]))) ? (((unsigned int) arr_22 [i_7] [i_8] [i_7])) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_22 [i_7] [i_9] [i_13]) == (arr_22 [i_7] [i_9] [i_12]))))))))));
                            }
                        } 
                    } 
                }
                for (short i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        arr_48 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) var_6);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_38 [0LL] [i_14])))) ? (arr_25 [i_7] [i_14] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) || ((!((!(((/* implicit */_Bool) 5699313566787648894ULL))))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_2))));
                    }
                    for (long long int i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        var_24 += var_6;
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_7))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 2) /* same iter space */
                    {
                        arr_55 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19748)) ? (((/* implicit */int) arr_23 [i_7] [i_17])) : (((/* implicit */int) arr_23 [(unsigned char)4] [i_8])))))));
                        var_26 = ((/* implicit */signed char) var_5);
                    }
                    for (signed char i_18 = 0; i_18 < 22; i_18 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_19 = 2; i_19 < 19; i_19 += 3) 
                        {
                            var_27 = ((short) arr_59 [i_7] [i_8] [i_14] [i_19 - 2]);
                            arr_64 [i_7] [16U] [(short)15] [i_18] [i_19] [i_18] = ((/* implicit */unsigned char) var_9);
                        }
                        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_63 [i_20]), (((/* implicit */short) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 1623218179U))))))) : (arr_52 [i_7] [i_8]))))));
                            var_29 = ((/* implicit */unsigned int) (signed char)116);
                        }
                        for (unsigned int i_21 = 0; i_21 < 22; i_21 += 2) 
                        {
                            arr_71 [i_21] [i_7] [i_7] = ((/* implicit */short) (+(((((/* implicit */_Bool) 1028203875U)) ? (2671749134U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)23334)) ^ (((/* implicit */int) (short)32751)))))))));
                            var_30 = ((/* implicit */unsigned int) var_8);
                            arr_72 [(short)20] [i_8] [2U] [i_8] = ((/* implicit */unsigned char) (~(4294967295U)));
                        }
                        var_31 = ((/* implicit */unsigned int) (unsigned char)240);
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((arr_68 [i_7] [i_8] [i_14] [i_18] [i_18] [i_14] [i_14]), (var_5)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) >= (min((0U), (max((1623218139U), (1871435377U)))))));
                    }
                    arr_73 [i_7] [i_7] [i_14] [i_14] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_2))))) * (((((/* implicit */_Bool) arr_52 [i_7] [i_8])) ? (1623218162U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) min((arr_24 [i_7] [2U] [i_8] [3ULL]), (((/* implicit */short) arr_49 [i_14] [i_7] [i_7] [i_7])))))));
                }
            }
        } 
    } 
}
