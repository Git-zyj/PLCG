/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195656
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2550685611U)) || (((/* implicit */_Bool) (signed char)40)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_2] [i_2] [i_0] [i_3])) % (((/* implicit */int) (signed char)35)))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-23404))))));
                        var_13 = ((((/* implicit */_Bool) var_8)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (2075190843U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_16 [i_4] |= arr_12 [i_4];
        var_14 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4]))) : (arr_5 [i_4])))), (((2661409099446577777ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))))));
        var_15 = ((/* implicit */unsigned char) (+(min((max((((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [i_4] [i_4])), (15785334974262973838ULL))), ((-(var_10)))))));
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2012081895U)) ? (((/* implicit */unsigned long long int) var_9)) : (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1256667282U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [(signed char)0])))))) : (((var_10) ^ (15785334974262973841ULL)))))) ? (((15785334974262973838ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_5]))) : (0U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_21 [8] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (min((((((/* implicit */_Bool) (short)-22371)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) : (arr_3 [i_5] [i_5]))), (((/* implicit */unsigned int) ((_Bool) (short)-12073)))))));
    }
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_11 [12])) ? (15785334974262973831ULL) : (((/* implicit */unsigned long long int) var_6)))))))));
        var_17 = (signed char)55;
        var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_22 [i_6])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (3557242486U) : (2282885398U)))) : (arr_6 [i_6] [i_6] [i_6])))));
        /* LoopNest 2 */
        for (long long int i_7 = 4; i_7 < 12; i_7 += 1) 
        {
            for (signed char i_8 = 4; i_8 < 11; i_8 += 2) 
            {
                {
                    var_19 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_27 [i_8] [i_7] [i_8]), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [(_Bool)1] [i_8] [i_7]))) : (((((/* implicit */unsigned long long int) 9223372036854775807LL)) + (arr_27 [i_6] [i_6] [i_8])))))) ? (2661409099446577777ULL) : (((((/* implicit */_Bool) (((_Bool)0) ? (12561793190305746147ULL) : (3927912672090442338ULL)))) ? (max((5763242305725010581ULL), (((/* implicit */unsigned long long int) var_0)))) : (10506256238160550521ULL))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 12; i_10 += 1) 
                        {
                            {
                                arr_33 [i_6] = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)5392)), (3589740051849172897LL)));
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 3038300014U)) / (15785334974262973839ULL))) * (((/* implicit */unsigned long long int) (-(var_0))))))) ? (((((/* implicit */_Bool) ((int) arr_28 [i_6] [i_8] [i_9] [i_6]))) ? (((/* implicit */int) (short)-12073)) : (((/* implicit */int) (unsigned char)144)))) : (max((((((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_9] [i_9] [i_7] [i_9] [i_6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned char)0))))));
                                arr_34 [i_7] [(unsigned char)0] [i_6] [i_6] = ((((/* implicit */_Bool) (unsigned char)176)) ? (((unsigned long long int) 7940487835549001113ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 7940487835549001095ULL)) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (((/* implicit */int) (unsigned char)170))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            {
                                arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((arr_8 [i_11] [i_6] [i_11 + 1]) ? (((/* implicit */int) var_8)) : (arr_38 [i_11 + 1] [i_8 - 1] [5ULL] [i_11] [7ULL] [i_8 - 1] [i_8 - 1]))) > ((~(((/* implicit */int) arr_23 [i_7 - 4] [i_8 - 2]))))));
                                var_21 = ((/* implicit */short) (signed char)29);
                                arr_40 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (((unsigned long long int) (unsigned char)161)))));
                            }
                        } 
                    } 
                    arr_41 [i_6] [i_6] [i_7] [(signed char)6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_27 [i_6] [i_8 - 2] [i_6])) ? (15785334974262973841ULL) : (arr_27 [i_6] [i_8 - 2] [i_6]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211)))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (int i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned int) arr_18 [i_13]))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2078602479)) ? (((/* implicit */int) var_3)) : (-14)))))), (((/* implicit */unsigned int) ((int) var_1))))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10506256238160550521ULL)) ? (arr_6 [i_13] [i_13] [i_13]) : (arr_6 [i_13] [i_13] [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0LL)))) : (((((/* implicit */_Bool) arr_6 [i_13] [i_13] [i_13])) ? (arr_6 [i_13] [i_13] [i_13]) : (arr_6 [i_13] [i_13] [i_13]))))))));
    }
    for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        arr_48 [i_14] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((int) (unsigned char)142))))), (max((arr_12 [i_14]), (((/* implicit */unsigned long long int) arr_30 [i_14] [i_14]))))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_30 [i_14] [i_14]), (((/* implicit */unsigned int) arr_15 [i_14]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2661409099446577777ULL)) ? (((/* implicit */long long int) 2391971606U)) : (3589740051849172898LL)))) : (((arr_27 [i_14] [i_14] [i_14]) - (((/* implicit */unsigned long long int) -2078602496))))));
        arr_49 [i_14] = ((/* implicit */short) min((((((/* implicit */_Bool) 15785334974262973831ULL)) ? (((/* implicit */int) (short)19139)) : (((/* implicit */int) arr_35 [i_14] [i_14] [i_14] [(_Bool)1] [i_14] [i_14])))), (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) arr_35 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) : (318058303)))));
        /* LoopSeq 4 */
        for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            arr_53 [6LL] = ((/* implicit */unsigned int) (((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19139)))));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-19139))))) || (((/* implicit */_Bool) max((((/* implicit */int) ((signed char) -2078602473))), (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)22050)))))))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_14])))))))) ? ((-(12645869908829937336ULL))) : ((-(18446744073709551604ULL))))))));
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)19139)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (short)25038))));
        }
        for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (max((((((/* implicit */_Bool) arr_27 [i_14] [i_16] [i_14])) ? (((/* implicit */unsigned long long int) -2078602514)) : (0ULL))), (min((10506256238160550543ULL), (arr_27 [i_14] [i_14] [i_14])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                var_29 = ((/* implicit */_Bool) (((((-(2078602500))) + (2147483647))) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_14] [i_17] [i_17])) : (((/* implicit */int) var_4))))));
                arr_58 [i_14] [i_14] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_42 [i_16] [i_16])))) > ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65530)) : (2078602483)))));
                arr_59 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15785334974262973823ULL)) ? (arr_45 [i_16] [i_14]) : (arr_45 [i_14] [i_16])));
            }
            for (signed char i_18 = 4; i_18 < 7; i_18 += 4) 
            {
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_43 [i_14]))))))) ^ (((((/* implicit */_Bool) (~(7368592515029267645LL)))) ? (min((((/* implicit */unsigned int) arr_45 [i_14] [i_18])), (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-19139)) / (((/* implicit */int) (short)-19148))))))))))));
                arr_62 [i_14] [i_16] [i_18 - 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_18 + 4] [i_16])) ? (arr_45 [i_14] [i_16]) : (((/* implicit */int) (unsigned char)168))))) && (((/* implicit */_Bool) ((signed char) (short)21670))));
                arr_63 [i_14] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2661409099446577777ULL))) ^ (((((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_14] [i_16] [i_14] [i_14] [i_16])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) & (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15700647145898634127ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (-2419954112238647318LL))))))));
            }
            var_31 = (((-(((/* implicit */int) (signed char)-95)))) + (min(((-(((/* implicit */int) (_Bool)1)))), (2147483640))));
            /* LoopNest 2 */
            for (int i_19 = 2; i_19 < 10; i_19 += 1) 
            {
                for (signed char i_20 = 2; i_20 < 9; i_20 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_19 + 1] [i_19 - 2] [i_19 + 1] [i_20 - 2] [i_20])) ? (((-2078602471) % ((-(((/* implicit */int) (unsigned char)56)))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_33 = ((((/* implicit */_Bool) (unsigned char)208)) ? ((~(726764325))) : ((~(((((/* implicit */int) var_3)) ^ (((/* implicit */int) (short)-10787)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_21 = 3; i_21 < 9; i_21 += 1) /* same iter space */
        {
            arr_73 [i_14] [i_14] [i_21] = ((/* implicit */int) (_Bool)1);
            var_34 -= ((long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_65 [i_14] [i_14] [i_21] [i_21])))) | (((/* implicit */int) min((((/* implicit */unsigned char) arr_61 [i_14])), ((unsigned char)58))))));
            arr_74 [i_14] [i_14] [i_14] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)57896)))));
        }
        for (unsigned char i_22 = 3; i_22 < 9; i_22 += 1) /* same iter space */
        {
            arr_78 [i_14] [i_14] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_22 - 3] [i_22] [i_22] [i_22 - 3] [(signed char)10]))) | (var_2)))) ? (((/* implicit */int) arr_36 [i_22] [i_22] [i_22 - 3] [i_22 - 3] [6LL])) : (((((/* implicit */_Bool) -519333786)) ? (((/* implicit */int) (unsigned short)7646)) : (((/* implicit */int) (unsigned short)57890))))));
            arr_79 [i_14] [i_14] [i_22] = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) 1795532596297032587ULL)) ? (((/* implicit */unsigned int) arr_25 [i_14] [4LL] [i_22])) : (var_9)))))));
            arr_80 [i_14] [i_22 + 2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 2078602474)), (((unsigned long long int) arr_10 [i_14] [i_22 - 1] [i_22 + 1] [i_22 + 2]))));
            arr_81 [i_14] = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2746096927810917489ULL)))) | (((18031093318834212272ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57890)))))))));
            var_35 |= ((/* implicit */signed char) ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (15700647145898634127ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        }
        arr_82 [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1563432390)) ? (71421093U) : (min((var_9), (((/* implicit */unsigned int) (_Bool)1))))))) ? ((+(arr_70 [i_14]))) : (((((/* implicit */_Bool) (unsigned char)132)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))) : (var_10))) : (((/* implicit */unsigned long long int) (-(-1)))))));
    }
    var_36 += var_0;
}
