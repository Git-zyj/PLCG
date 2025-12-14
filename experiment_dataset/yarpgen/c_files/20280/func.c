/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20280
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) var_13);
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9284)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (short)-9288))))), (((1099511627712ULL) - (((/* implicit */unsigned long long int) -5989685005489977273LL))))));
                    var_17 = ((/* implicit */unsigned long long int) (signed char)-66);
                    var_18 |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])))) || (((/* implicit */_Bool) min(((unsigned short)41180), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_2])))))));
                }
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_19 ^= max((((((/* implicit */int) (unsigned char)121)) | (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) max((arr_1 [i_3] [i_1]), (arr_8 [i_3] [i_1] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((((var_1) == (((/* implicit */int) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_16)))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) (((+((-(2302206068233810733ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_19 [8ULL] [i_4] [i_3] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (short)28187)))) >= (min((((/* implicit */unsigned long long int) (short)-9284)), (var_12)))))))));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_6 [i_4] [(unsigned short)2] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (var_7)))))))) : (13758085044931771569ULL)));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            arr_24 [i_1] [i_4] [i_3] [i_1] [i_1] |= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) max((((/* implicit */short) var_15)), ((short)-1244)))))), ((+(((/* implicit */int) arr_3 [i_4] [i_3] [i_1]))))));
                            var_23 = ((/* implicit */_Bool) var_12);
                            arr_25 [i_3] [(_Bool)1] [i_4] [(_Bool)1] [7] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5989685005489977262LL)) ? (((arr_4 [i_6 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7))))))));
                            var_24 |= ((/* implicit */unsigned char) max((11517808927572533958ULL), (((/* implicit */unsigned long long int) min((arr_22 [i_0] [i_1] [i_3] [i_0]), (arr_22 [i_1] [i_3] [i_1] [i_1]))))));
                        }
                        arr_26 [i_3] [i_4] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((var_11) == (arr_21 [i_0] [i_0] [i_0] [i_1] [i_1] [i_3] [i_4]))))))));
                    }
                    var_25 = ((/* implicit */unsigned short) (-(min((arr_23 [i_3] [i_1] [9LL] [i_0] [i_0]), (((/* implicit */int) var_16))))));
                    var_26 = ((/* implicit */short) max((((int) -5989685005489977273LL)), (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                }
                arr_27 [i_0] [10ULL] = ((/* implicit */unsigned short) max((((unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_1])), (((/* implicit */unsigned long long int) max((arr_13 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) var_16)))))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4878)) ? (var_4) : (max((17191870440908767857ULL), (((/* implicit */unsigned long long int) 1679448147))))));
                    var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (max((var_11), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)25189)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (unsigned short)24356))));
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((short) max((arr_22 [i_0] [i_1] [i_1] [i_7]), (((/* implicit */unsigned short) (unsigned char)65))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        for (long long int i_9 = 3; i_9 < 12; i_9 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_38 [i_8] [i_9 + 2])))) > (((/* implicit */int) max((((/* implicit */short) var_2)), ((short)27547))))));
                arr_39 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18062)) ? (((/* implicit */int) arr_35 [i_8] [i_8] [i_9])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((var_6), (((/* implicit */short) arr_35 [i_8] [i_9 + 2] [i_9]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)8)) >= (-1277663028))))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            arr_45 [i_8] [i_8] [i_10] [i_8] = ((/* implicit */short) ((((/* implicit */int) var_5)) <= (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-25189)) : (((/* implicit */int) var_13)))) & (((/* implicit */int) arr_40 [i_8] [(_Bool)1] [(_Bool)1] [i_10]))))));
                            var_31 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_37 [i_8])), (max((((/* implicit */unsigned long long int) var_14)), (4727618292446104548ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)9197)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 425148427U))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (var_1))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 1738509100U)), (min((((/* implicit */long long int) 1124479215U)), (var_10))))))));
                var_33 = ((/* implicit */long long int) (((-(425148427U))) / (((/* implicit */unsigned int) ((/* implicit */int) min((arr_40 [i_8] [i_8] [i_9] [i_9 - 1]), (arr_40 [i_8] [i_9] [i_9] [i_9 + 2])))))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                arr_51 [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((arr_49 [i_12] [i_13]) >> (((/* implicit */int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) (short)29188)), (var_12))))))));
                var_35 = var_10;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    for (long long int i_15 = 1; i_15 < 18; i_15 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) min((var_36), (((((((/* implicit */_Bool) ((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) || (((/* implicit */_Bool) ((((-644723368) + (2147483647))) >> (((15492659841107015610ULL) - (15492659841107015603ULL)))))))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)21), (((/* implicit */unsigned char) (signed char)-7))))))))));
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [4LL] [i_14] [i_13] [4LL]))) : (5339735327450985000ULL)))) || (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_56 [(_Bool)1] [i_14] [(_Bool)1])), (arr_49 [(short)14] [(short)14])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_53 [18LL])) : (((/* implicit */int) var_16))))))))))));
                            var_38 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_13))))) << ((((+(var_4))) - (6760794330910065503ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
