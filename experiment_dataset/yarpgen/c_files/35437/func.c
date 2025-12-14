/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35437
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
    var_10 += ((/* implicit */int) var_4);
    var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (var_0)))) : (((var_6) / (((/* implicit */unsigned int) 1998040472))))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)31)) : (((-38278892) + (((/* implicit */int) (short)-54))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (var_0)))) ? (((/* implicit */int) ((1LL) != (((/* implicit */long long int) 2080768U))))) : (var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1081985502U)), (1LL)))) ? (((arr_3 [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_1])) : (755899086))) : (((/* implicit */int) arr_3 [i_1 - 1] [i_0]))))) >= (((((/* implicit */_Bool) -898927216)) ? (arr_0 [i_1 + 3]) : (-1LL)))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_15 |= ((/* implicit */int) ((arr_4 [i_1 + 1] [i_1 - 3] [i_1 - 4] [i_1 - 3]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)51)) ^ (((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        arr_8 [i_3] [i_2] [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) var_4);
                        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)12))))) * ((-(((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))) : (arr_4 [i_3] [(_Bool)1] [8LL] [(short)6])))))));
                        arr_9 [i_0] = ((/* implicit */unsigned short) (-(arr_4 [i_0] [i_1] [i_2] [9])));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)51)) ^ (((/* implicit */int) arr_5 [0] [0] [i_1 - 2] [i_1 - 4]))));
                        var_18 = min((min((arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 1] [i_2] [i_1 + 1]))), (((/* implicit */unsigned short) (short)-23)));
                    }
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [(short)8] [i_2] [i_1 - 1] [(short)8]))))) <= (((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 3] [i_2] [i_4])) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_4])) : (((/* implicit */int) arr_2 [i_2] [i_1 + 3] [i_2]))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 3212981793U))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */_Bool) -7523062119464050111LL);
                        var_22 -= arr_1 [i_0];
                    }
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) (short)32547);
                        arr_22 [i_0] [i_0] [i_0] [i_7] [(unsigned char)7] [i_0] = ((/* implicit */int) 2313720559U);
                    }
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1)))) ? (max((((/* implicit */unsigned long long int) 1LL)), (arr_4 [i_1 + 1] [i_1 - 3] [i_1 - 1] [i_1 - 4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((arr_24 [i_1]) > (var_9)))))))));
                        var_26 += ((/* implicit */unsigned long long int) arr_16 [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1 + 1]);
                    }
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) 1981246744U))));
                }
                for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_33 [i_0] [i_1 + 2] [i_1 + 2] = arr_4 [i_0] [i_1] [i_9] [i_10];
                        var_28 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_10] [i_1] [i_1 - 2] [i_0])))))));
                        var_29 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-52))) ^ (3212981794U)))) ? (((/* implicit */long long int) min((1981246744U), (((/* implicit */unsigned int) var_4))))) : ((-(arr_31 [i_10] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_0] [i_0])))))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (((+(1LL))) == (((/* implicit */long long int) ((/* implicit */int) (short)-52))))))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        arr_36 [i_11] [i_11] [i_11] [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_1 + 3] [i_1 + 3]) ? (var_9) : (((/* implicit */int) arr_13 [i_0] [i_1 - 3] [i_1 - 3] [(unsigned short)9]))));
                        var_31 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1] [4LL] [(unsigned char)0] [i_1])) & (((/* implicit */int) arr_17 [i_1] [(_Bool)1]))));
                        arr_37 [i_11] [7U] [i_1] [7U] [7U] [i_11] = ((/* implicit */unsigned char) (signed char)-68);
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1981246740U)) ? (((/* implicit */int) arr_29 [i_1 - 3] [i_1] [i_9] [i_11] [i_11])) : (((/* implicit */int) arr_29 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [i_0])))))));
                    }
                    var_33 += ((/* implicit */long long int) (-(((/* implicit */int) (short)31))));
                    var_34 = ((/* implicit */_Bool) ((min((1543311242461455641LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) -1702605808)) % (2313720555U)))))) << (((((/* implicit */int) max((arr_6 [i_1 - 4] [i_1 - 2] [i_1 + 3] [i_1 + 1] [i_1 + 3]), (var_8)))) - (6908)))));
                    /* LoopSeq 2 */
                    for (int i_12 = 1; i_12 < 10; i_12 += 2) /* same iter space */
                    {
                        arr_42 [i_0] [i_12] [i_9] = ((/* implicit */int) ((min((arr_7 [i_0] [i_1] [i_0] [i_9] [i_0] [i_12]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0])))) > (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_20 [i_12])) : (((/* implicit */int) arr_10 [i_12 + 1] [i_9] [i_0] [i_1 + 3] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((2313720539U) - (((/* implicit */unsigned int) var_0))))))));
                        var_35 = ((((/* implicit */int) max((arr_39 [i_12 + 2] [i_12 + 2] [i_9] [i_1 + 1]), (arr_39 [i_12 + 2] [i_12] [i_0] [i_1 - 4])))) << (((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)1] [i_9] [i_9])) ? (((/* implicit */int) arr_1 [i_9])) : (var_5))));
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_1 - 4] [i_1] [i_9] [i_9] [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_12 - 1] [i_9] [i_1 - 4] [i_0] [i_0]))) : (max((((/* implicit */unsigned int) arr_35 [i_0] [4ULL] [i_9] [i_12])), (2080768U)))))) ? ((+(((/* implicit */int) (unsigned short)16384)))) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_9] [i_12])))))));
                    }
                    for (int i_13 = 1; i_13 < 10; i_13 += 2) /* same iter space */
                    {
                        var_37 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_40 [i_1] [i_13 - 1] [4U])) ? (((/* implicit */int) ((((/* implicit */long long int) arr_32 [7U])) > (arr_31 [i_0] [i_1 + 3] [i_9] [i_13] [7ULL] [i_13])))) : (((/* implicit */int) arr_29 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1]))))));
                        var_38 = ((/* implicit */short) ((((arr_18 [i_13 + 2]) < (arr_18 [i_13 + 1]))) ? (((/* implicit */unsigned int) -1)) : (arr_16 [i_0] [i_1 + 1] [i_9] [i_13])));
                    }
                }
                for (unsigned int i_14 = 1; i_14 < 9; i_14 += 4) 
                {
                    var_39 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)65531)) >= (131071))) && (((/* implicit */_Bool) 3267696571U))))) : (((/* implicit */int) (short)-23624)));
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1] [i_1] [i_14 + 3] [i_14 + 3] [i_14])) % (((/* implicit */int) arr_14 [i_0] [i_1 - 4] [i_14 + 3] [i_14 + 1] [i_14]))))) ? (max((((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1 + 1] [i_14] [i_14] [i_14 + 1])), (max((((/* implicit */long long int) -651573062)), (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 1) 
                        {
                            {
                                var_41 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -3288368024939020660LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [1] [i_15] [i_16])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 2] [i_14 + 1]))) : (arr_16 [i_15] [i_14 - 1] [i_14 + 1] [i_1 - 4]))));
                                var_42 = ((/* implicit */_Bool) arr_25 [i_14 + 3] [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_14]);
                                var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_19 [i_14 + 1] [i_15] [i_15] [i_1 - 3]), (arr_19 [i_14 - 1] [i_15] [i_15] [i_1 - 2]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
