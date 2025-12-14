/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245148
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)112))))), (18446744073709551615ULL)));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        var_12 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8))))));
        /* LoopSeq 1 */
        for (short i_3 = 3; i_3 < 8; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                var_13 = arr_2 [i_4 - 1] [i_4 - 1] [i_4 + 2];
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */int) (signed char)31)), (((((/* implicit */_Bool) arr_9 [i_4] [i_3])) ? ((+(((/* implicit */int) arr_3 [8U])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)31)) >= (((/* implicit */int) (_Bool)1))))))))))));
            }
            for (short i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_15 = ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))) == (arr_12 [i_3] [i_2 + 4] [i_2 + 4]))))))) * ((-(((unsigned int) (unsigned char)255)))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(2021938060)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3 + 4] [i_2 + 4])) ^ (((/* implicit */int) arr_1 [i_3 + 4] [i_2 + 2]))))) : (((long long int) min((((/* implicit */long long int) arr_7 [i_6])), (-7224407491891876273LL))))));
                            var_17 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((unsigned char) var_6))), (arr_14 [i_2 + 2]))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1214669694U)))) ? (((/* implicit */int) arr_6 [i_5 + 1] [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) 2021938072)) && (((/* implicit */_Bool) arr_1 [i_5] [i_5]))))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_15 [i_2 + 4] [i_2 - 1] [i_3 + 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5 + 2]))) : (arr_17 [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 - 1]))), ((-(3256945031U)))));
                arr_19 [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) var_5);
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_24 [i_2] [i_9] [i_5] [i_8] [i_3] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4441619780325466286LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-449)))))) ? (min((((/* implicit */unsigned long long int) 1073741823U)), (var_8))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_2 + 3] [i_3 + 4]))))))), (((/* implicit */unsigned long long int) 2021938068)));
                            var_19 |= ((/* implicit */signed char) arr_18 [i_3 + 1] [i_8] [i_5 + 1] [i_3] [i_3 + 1] [i_2]);
                            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) > (1099243192320LL))))));
                        }
                    } 
                } 
            }
            for (int i_10 = 4; i_10 < 10; i_10 += 4) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_3 - 2])) ? (((/* implicit */int) arr_26 [i_2 + 3])) : (((/* implicit */int) arr_26 [i_3 - 3]))));
                    arr_30 [i_3] [i_3] [i_11 - 2] = ((/* implicit */short) (+(((/* implicit */int) (short)-20))));
                }
                for (unsigned int i_12 = 1; i_12 < 10; i_12 += 2) /* same iter space */
                {
                    var_22 *= ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_25 [i_10] [i_12])) || (((/* implicit */_Bool) arr_18 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_31 [i_2 + 1] [i_2 + 1] [i_10] [i_12])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_3 + 2] [i_2 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))) / (min((((((/* implicit */_Bool) (unsigned char)144)) ? (arr_25 [i_2] [i_3 - 3]) : (((/* implicit */unsigned long long int) 1403478315U)))), (((/* implicit */unsigned long long int) 127U))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_12] [i_10] [i_3] [i_2 + 2] [i_2])) ? ((-(((arr_17 [i_2] [i_3] [i_10] [i_12]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)31))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (short)-1))))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147479552)) ? (2467489729U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)224)))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (max((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)27)), ((short)4)))), (min((((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_12]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)112)))))))))));
                }
                for (unsigned int i_13 = 1; i_13 < 10; i_13 += 2) /* same iter space */
                {
                    arr_37 [i_3] = ((/* implicit */unsigned int) (short)224);
                    var_26 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2]);
                }
                for (int i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(var_2))))));
                    var_28 = ((/* implicit */unsigned char) (unsigned short)65535);
                    var_29 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_33 [i_2 + 3] [i_3 - 1] [i_10]))));
                    arr_41 [i_10] [i_10] [i_3] [i_10] = ((/* implicit */signed char) (((+(arr_15 [i_2] [i_3 + 3] [i_10] [i_3]))) | ((-(1749556465048585444ULL)))));
                    var_30 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)17)) | (((/* implicit */int) (unsigned char)112))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)3))))) : (max((arr_15 [i_2 + 1] [i_2] [i_10] [i_3]), (((/* implicit */unsigned long long int) -1LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2] [i_10 + 1])) : (((/* implicit */int) arr_11 [i_2 + 3] [i_2] [i_10 + 1])))))));
                }
                var_31 = ((unsigned long long int) ((max((0ULL), (((/* implicit */unsigned long long int) 211106232532992LL)))) & (((/* implicit */unsigned long long int) ((645252812151903993LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-32246))))))));
                var_32 = ((/* implicit */_Bool) (+(((unsigned long long int) max((((/* implicit */long long int) arr_28 [i_2] [i_2] [i_2] [i_3] [i_10 - 3] [i_10])), (arr_12 [i_3] [i_3] [i_3]))))));
                var_33 = ((/* implicit */int) (+(max((((long long int) arr_5 [i_10 - 4] [i_2 - 1])), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65529))))))));
            }
            var_34 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (var_9))))))) != (((unsigned int) (-9223372036854775807LL - 1LL)))));
            var_35 += ((/* implicit */signed char) max((58720256U), (4236247040U)));
        }
        var_36 = ((/* implicit */_Bool) var_6);
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_2 + 4] [i_2] [i_2])) ? (arr_17 [i_2] [i_2 + 1] [i_2] [i_2]) : (arr_17 [i_2] [i_2 + 4] [i_2] [i_2])))) ? (arr_17 [i_2] [i_2 - 1] [i_2] [i_2]) : ((-(arr_17 [i_2] [i_2 + 4] [i_2] [i_2])))));
    }
    var_38 += ((/* implicit */unsigned int) (+(var_8)));
}
