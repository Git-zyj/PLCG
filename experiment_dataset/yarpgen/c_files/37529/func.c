/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37529
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((short) var_2));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 2]))) : (((/* implicit */long long int) (~(-2147483630))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */long long int) -588214935)), (max((((/* implicit */long long int) ((((/* implicit */int) (short)-29484)) >= (((/* implicit */int) arr_0 [i_0]))))), (arr_3 [i_0 + 1]))))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_19 += ((/* implicit */_Bool) (short)29485);
        var_20 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_12))))))));
        var_21 += ((/* implicit */unsigned short) min(((short)29459), (((/* implicit */short) (!(((/* implicit */_Bool) 3785701923526757043LL)))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) max(((-(-4019108838207163037LL))), ((~(-6729219956724040573LL)))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned char i_4 = 3; i_4 < 6; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_20 [i_2] [i_4] [i_4] [i_3] &= ((/* implicit */_Bool) 940683420);
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(arr_14 [(signed char)2] [i_3] [i_5]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_24 = (!(((((/* implicit */_Bool) arr_14 [8] [i_4 - 2] [i_2])) && (((/* implicit */_Bool) (unsigned char)76)))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3121070962U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_14 [i_2] [i_2] [i_5]) : (((/* implicit */unsigned int) -2134691785))))) : ((+((-9223372036854775807LL - 1LL)))))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_4 - 2] [i_4] [(short)8])) : (((((/* implicit */int) (short)-29492)) / (((/* implicit */int) arr_17 [i_6] [(unsigned char)4] [i_3] [(unsigned char)4]))))));
                        }
                        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4 - 2] [i_5] [i_5] [i_5])) ? (arr_9 [i_4 + 1] [i_4 + 1]) : (arr_9 [i_4 - 2] [i_4 + 1])));
                        /* LoopSeq 3 */
                        for (int i_7 = 1; i_7 < 8; i_7 += 1) 
                        {
                            arr_26 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((arr_9 [i_2] [i_2]) / (((/* implicit */long long int) arr_14 [i_2] [i_3] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 - 2] [i_4 - 3])))));
                            var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) * (var_15)))) ? (arr_9 [i_2] [i_3]) : (arr_19 [i_2] [i_4 + 4] [i_4 + 4])));
                        }
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_29 -= ((/* implicit */unsigned long long int) (~(((3121070959U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32759)))))));
                            arr_29 [i_2] [i_2] [i_2] [2ULL] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-6013)) : (((/* implicit */int) (short)-10082))))) ? (arr_19 [i_2] [i_3] [(unsigned short)6]) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) arr_14 [i_2] [i_4] [i_2]))))))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 8; i_9 += 1) 
                        {
                            arr_33 [i_9] [i_2] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((-265064087) | (((/* implicit */int) (short)29484))))) != (((-4680830442848297355LL) % (((/* implicit */long long int) -614293012))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (5275279046811803774ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)234))))) : (arr_27 [i_2] [2] [8ULL] [i_4] [i_2] [2])));
                            arr_34 [i_3] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        }
                    }
                    for (unsigned int i_10 = 3; i_10 < 9; i_10 += 2) 
                    {
                        var_31 = ((/* implicit */short) (+(arr_3 [i_4 - 2])));
                        var_32 -= ((/* implicit */int) min((arr_27 [i_10 - 3] [i_10 - 2] [i_10] [i_4 + 4] [i_4 - 2] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)22)) : (((/* implicit */int) var_4)))))));
                        var_33 = ((/* implicit */unsigned short) arr_7 [i_2] [i_4 + 1]);
                        arr_38 [i_2] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (13916417846199992972ULL) : (((/* implicit */unsigned long long int) 2038810424))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (var_8)))) : (max((10924048643072923822ULL), (((/* implicit */unsigned long long int) arr_17 [i_10 + 1] [i_10] [i_4 - 2] [i_3]))))));
                    }
                    var_34 = ((/* implicit */_Bool) var_8);
                    arr_39 [i_2] [i_3] [i_2] [i_4 + 2] = ((/* implicit */unsigned short) (+(var_17)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_42 [i_2] [(_Bool)1] [i_2] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2]))));
                        arr_43 [i_2] [i_3] [i_2] [5U] [i_11] = ((/* implicit */_Bool) (~(((long long int) (unsigned char)136))));
                    }
                    for (short i_12 = 1; i_12 < 6; i_12 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned char) var_5);
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (max(((~(((/* implicit */int) arr_32 [0LL] [(unsigned short)8] [(short)1] [8U] [i_4] [i_12] [i_12])))), (((/* implicit */int) (short)-29468)))) : (((/* implicit */int) arr_36 [i_4 + 2] [i_4 + 2] [i_12 - 1] [i_2]))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_13 = 1; i_13 < 14; i_13 += 4) 
    {
        var_37 = ((/* implicit */unsigned short) min((((long long int) arr_1 [i_13 - 1] [(_Bool)1])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_13 - 1] [18ULL])) ? (((/* implicit */int) arr_1 [i_13 - 1] [(unsigned char)8])) : (1579893907))))));
        var_38 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
        /* LoopSeq 2 */
        for (unsigned short i_14 = 2; i_14 < 14; i_14 += 3) 
        {
            var_39 *= ((/* implicit */short) (unsigned char)32);
            var_40 += ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) arr_48 [i_13 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 504207780454540006ULL)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_10)))) ? (((((/* implicit */_Bool) (unsigned short)44041)) ? (-8665347969133763715LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (min((arr_52 [0LL]), (((/* implicit */long long int) (signed char)-105))))))));
            arr_55 [i_14] [5LL] = ((/* implicit */long long int) ((5275279046811803774ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))));
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
        }
        for (short i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            arr_58 [i_15] [i_15] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 5920631886029026290ULL)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-29455))))))))) ? ((+(max((((/* implicit */unsigned long long int) var_15)), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((arr_57 [(short)14]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | ((+(1766341293238964617LL))))))));
            var_42 |= ((/* implicit */unsigned short) (_Bool)1);
        }
        /* LoopSeq 2 */
        for (unsigned int i_16 = 2; i_16 < 12; i_16 += 1) 
        {
            var_43 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) arr_51 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))))));
            var_44 = ((/* implicit */short) min(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)1))));
            var_45 = ((/* implicit */unsigned char) max((var_45), (arr_0 [i_16])));
        }
        for (long long int i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (18ULL))))));
            arr_63 [i_17] [i_17] [i_17] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)23674)), (-9223372036854775807LL)))))) ? (((((/* implicit */int) (unsigned char)186)) | (((/* implicit */int) (unsigned char)164)))) : (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (unsigned char)91))))))));
            arr_64 [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (unsigned char)170))))) ? (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (short)11043)) : (((/* implicit */int) arr_60 [i_17])))) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_4)))))) >> (((/* implicit */int) ((((/* implicit */int) arr_7 [i_13 + 1] [i_13 - 1])) != (((/* implicit */int) arr_7 [i_13 + 1] [i_13 + 1])))))));
            arr_65 [i_13] |= ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_51 [i_13 - 1])))) >> ((((~(((/* implicit */int) (signed char)-56)))) - (29))))) & (((/* implicit */int) ((signed char) arr_6 [i_13 + 1] [i_17])))));
        }
    }
}
