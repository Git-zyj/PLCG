/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36919
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
    var_19 = ((/* implicit */long long int) max(((-(((/* implicit */int) ((_Bool) var_8))))), ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) max((var_8), ((signed char)127)))) : (((/* implicit */int) var_8))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) var_2);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-127))));
            var_23 = ((/* implicit */unsigned int) (~(arr_1 [i_2 + 3])));
        }
        arr_8 [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_1] [i_1] [i_1]) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
        var_24 = ((/* implicit */unsigned short) var_8);
        var_25 &= ((/* implicit */unsigned int) ((arr_1 [i_1]) % (((/* implicit */unsigned long long int) var_15))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) ((((17482605963938670473ULL) == (var_0))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_9 [i_3]) > (arr_9 [i_4]))))));
            arr_14 [i_3] [i_3] [i_4] |= ((/* implicit */unsigned short) (signed char)0);
        }
        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            arr_19 [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)212)))))));
            var_27 ^= ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_17))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)216)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) >> (((var_11) - (12693213894841290723ULL)))))) && (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (unsigned char)16))))))))));
        }
        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            var_28 ^= ((/* implicit */short) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) | (var_3))) ^ (((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))))))));
            var_29 = ((/* implicit */unsigned short) max((var_29), ((unsigned short)0)));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) min(((-(arr_1 [i_3]))), (((/* implicit */unsigned long long int) max((arr_10 [i_3]), (arr_10 [i_3])))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_7])) || ((_Bool)0)));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_9 [i_7])));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            var_33 = ((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (unsigned short)17947)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            arr_34 [i_7] [i_7] [i_9] [i_7] [i_7] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-6123))));
                            var_34 = ((/* implicit */short) (~(((/* implicit */int) (!(arr_10 [i_9]))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned char) arr_3 [i_7]);
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9 + 1] [i_9 - 1] [(unsigned short)9] [i_9 - 1] [i_9 + 1] [i_9 + 1]))) / (arr_32 [i_9 - 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1])));
                var_37 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_9 + 1]));
            }
            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                arr_37 [i_7] [i_12] [i_12] [(short)11] = ((/* implicit */unsigned short) arr_4 [i_7]);
                var_38 = ((/* implicit */short) var_0);
                /* LoopSeq 4 */
                for (signed char i_13 = 3; i_13 < 13; i_13 += 4) 
                {
                    var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                    var_40 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_13 - 2])) ? (var_3) : (((/* implicit */unsigned long long int) var_6))))));
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((((/* implicit */_Bool) arr_21 [i_13 + 1] [i_13 - 2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    var_42 -= ((/* implicit */unsigned int) ((_Bool) var_14));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((-(var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_13 + 1])) ? (var_7) : (arr_16 [i_13 - 1])));
                    }
                }
                for (unsigned short i_15 = 1; i_15 < 11; i_15 += 4) 
                {
                    arr_45 [i_12] [i_12] [i_8] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [(short)13] [(short)13] [i_15 + 2] [i_15 + 3] [i_15 + 3] [i_15 + 3])) ? (((/* implicit */unsigned long long int) arr_28 [i_7] [i_12] [i_12])) : (((((/* implicit */_Bool) var_8)) ? (13237537276233815288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46)))))));
                    var_45 = ((arr_38 [i_15] [i_15 + 3] [i_12] [i_12] [i_15 + 3] [i_8]) + (((/* implicit */unsigned long long int) arr_44 [i_15] [i_15 + 3] [(unsigned char)3] [i_15 + 2] [i_15 - 1] [i_8])));
                    /* LoopSeq 3 */
                    for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        var_46 += ((((/* implicit */_Bool) arr_13 [i_15 - 1] [i_15 + 3] [i_15 + 3])) ? (563768580U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_15 + 1] [i_15 + 2] [i_15 + 2]))));
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_15 - 1] [i_15 + 3] [i_15 + 3])) % (((/* implicit */int) var_16))));
                        arr_48 [i_7] [12LL] [i_12] [i_12] [12LL] [i_7] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_15 - 1]))));
                    }
                    for (unsigned short i_17 = 3; i_17 < 12; i_17 += 3) /* same iter space */
                    {
                        arr_53 [i_7] [i_12] [i_12] [i_15] [i_17 - 2] = ((/* implicit */unsigned short) arr_29 [i_17 - 1] [i_7] [i_7]);
                        var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)206)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (short)16769)) : (((/* implicit */int) arr_42 [i_15] [i_8] [i_15 - 1] [i_8] [i_15])))))));
                    }
                    for (unsigned short i_18 = 3; i_18 < 12; i_18 += 3) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_15 + 2] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_18 + 2]))) + ((-(var_4))))))));
                        var_50 ^= ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) - (arr_55 [i_15 + 1] [i_15 + 1] [(unsigned short)10] [i_7] [i_15 + 1]));
                    }
                }
                for (short i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)61))));
                    var_52 = ((/* implicit */_Bool) (+(var_11)));
                }
                for (signed char i_20 = 1; i_20 < 13; i_20 += 3) 
                {
                    var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) ((short) arr_42 [i_7] [i_20 + 1] [i_7] [i_8] [i_8])))));
                    arr_62 [i_20 + 1] [i_12] [i_20] [i_12] [i_12] [i_7] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) arr_17 [i_7] [(unsigned short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_8])))));
                }
                var_54 = arr_56 [0U] [i_12];
                arr_63 [i_12] [i_8] [i_12] = ((/* implicit */unsigned long long int) var_10);
            }
        }
    }
}
