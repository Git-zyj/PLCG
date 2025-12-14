/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23148
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [10])) << (((var_12) - (585888877U))))))));
                                arr_11 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) min(((~(((((/* implicit */_Bool) arr_0 [(unsigned char)4] [i_1])) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383))))))), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) var_12))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)49153))))))) > (max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_2] [i_1] [i_0])), (max((((/* implicit */unsigned long long int) 4294967275U)), (var_19)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 9314176110745031819ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))) : (9ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)65529), (((/* implicit */unsigned short) var_1))))))))));
                    var_22 = ((short) ((short) arr_4 [i_2] [i_1] [7LL] [(short)5]));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) arr_9 [i_2] [i_1] [i_2] [i_5] [i_2]);
                        arr_16 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(max(((+(((/* implicit */int) (unsigned short)25268)))), (((((/* implicit */_Bool) 7052107096859190006LL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_1))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_19);
                        arr_20 [i_0] [i_1] [6] [i_6] = ((/* implicit */long long int) (-(((unsigned int) arr_14 [i_6 + 1] [i_6 + 1]))));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), ((short)-24905)));
                            var_25 &= ((/* implicit */long long int) arr_15 [i_7]);
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                            var_27 += ((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((((/* implicit */_Bool) 1081737720U)) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_17 [i_6])) | (((/* implicit */int) var_1))))))));
                            arr_27 [i_0] [i_1] [i_2] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (+(var_17))))) ? ((+(((((/* implicit */_Bool) arr_23 [i_0] [i_2])) ? (2ULL) : (12620852713251289004ULL))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 268245859807170083ULL)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (unsigned short)49123)))))))));
                        }
                        var_28 *= ((/* implicit */short) (+(((/* implicit */int) ((short) arr_5 [i_0] [i_6 + 1] [i_1] [(unsigned char)10])))));
                    }
                    arr_28 [i_0] [(short)6] [i_2] |= ((/* implicit */short) ((((((/* implicit */int) (unsigned char)251)) % (((/* implicit */int) (unsigned short)32766)))) % (((((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_0] [i_1])) | (((/* implicit */int) (unsigned short)16403))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        {
                            arr_41 [i_12] [(_Bool)1] [i_10] [i_9] = ((_Bool) var_13);
                            var_29 = ((/* implicit */unsigned char) min((((arr_30 [i_9]) << (((((((/* implicit */_Bool) 3213229576U)) ? (2314325051U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49153))))) - (2314325001U))))), (((((/* implicit */_Bool) arr_36 [i_11] [i_10] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((((/* implicit */unsigned long long int) (unsigned char)3)), (18ULL)))))));
                            /* LoopSeq 2 */
                            for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                            {
                                var_30 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 4294967262U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9]))) : (var_4))))));
                                arr_44 [i_10] [i_13] = arr_35 [i_11] [i_10];
                            }
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                arr_47 [i_9] [i_10] [i_11] [i_12] [(_Bool)1] = ((/* implicit */_Bool) (short)-31153);
                                var_31 |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */unsigned long long int) arr_43 [i_11] [i_12] [i_14])) : (18446744073709551573ULL)))) ? (((((/* implicit */_Bool) arr_30 [i_9])) ? (1081737713U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_14] [i_12] [i_9]))))) : (((((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_9] [i_9])) ? (arr_36 [i_9] [i_9] [i_11] [i_12]) : (((/* implicit */unsigned int) -1050140293)))))));
                            }
                        }
                    } 
                } 
                var_32 |= ((/* implicit */_Bool) ((short) min((408344624U), (((/* implicit */unsigned int) var_3)))));
                arr_48 [i_10] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_34 [i_10] [i_10]) : (((/* implicit */int) ((short) 18446744073709551591ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((1081737720U), (((/* implicit */unsigned int) (unsigned short)16413))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)7))))), (arr_33 [i_10])))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) (-(min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_2)) + (((/* implicit */int) var_16))))))));
}
