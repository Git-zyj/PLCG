/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245205
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) min(((~(arr_1 [i_0]))), (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (var_2))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_6 [0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1])) : (var_9)));
            var_11 = ((int) ((((/* implicit */_Bool) (unsigned char)233)) ? (var_4) : (((/* implicit */int) (unsigned short)441))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_12 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2]))))) ? (((((/* implicit */_Bool) (short)20394)) ? (((/* implicit */unsigned int) -689432727)) : (arr_7 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38343)))))));
        var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_4 [i_2] [i_2] [i_2])))));
        var_14 |= ((/* implicit */short) ((max((((3732718129539994462LL) - (-3732718129539994462LL))), (((/* implicit */long long int) 3525299324U)))) + (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1)))))));
    }
    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 4) 
    {
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 - 1])) << (((((/* implicit */int) var_2)) + (1793))))))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) (short)20394);
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((arr_9 [i_5]) >> (((var_6) + (1633615727))))) : (((/* implicit */unsigned int) -689432727)))), (((/* implicit */unsigned int) var_8))));
                        arr_20 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((((3732718129539994462LL) / (((/* implicit */long long int) 356680202U)))), (((/* implicit */long long int) var_6))));
                    }
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    for (int i_10 = 4; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)233)) >> (((((/* implicit */int) arr_30 [i_10] [i_9] [5U] [(short)5] [i_7] [i_3])) - (47612)))))))) || (((/* implicit */_Bool) arr_10 [(short)0]))));
                            arr_33 [i_8] [10] = ((/* implicit */int) (~(min((((/* implicit */unsigned int) arr_14 [i_3 + 1] [i_7] [i_8])), (4294967295U)))));
                            var_19 = ((/* implicit */int) ((short) min(((-(var_5))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)63)), (-1455204432)))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1])))) / (max((((689432727) | (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)-20394))))));
            arr_34 [(unsigned char)10] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3242)) && (((/* implicit */_Bool) 356680202U))))) != (((((/* implicit */_Bool) 865790410)) ? (((/* implicit */int) (short)-20395)) : (var_3)))))), (1191494737325804485LL)));
            arr_35 [i_7] = ((/* implicit */unsigned short) ((min((-1951847862), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [18LL] [i_7] [i_7])) || (((/* implicit */_Bool) arr_32 [i_3] [i_3] [12U] [i_7] [i_7]))))))) < (((/* implicit */int) (_Bool)0))));
        }
        arr_36 [i_3] [i_3] = arr_14 [i_3] [i_3] [i_3];
    }
    for (int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 914298440)) ? (((/* implicit */int) arr_38 [(short)10])) : (((/* implicit */int) arr_38 [(short)3]))))) | (arr_37 [(unsigned short)3] [i_11]))))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            arr_49 [i_11] [i_11] [i_13] [0LL] [i_11] [(unsigned short)8] [i_11] |= ((/* implicit */int) arr_44 [i_14] [11LL] [i_12]);
                            arr_50 [i_11] [i_12] [i_13] [i_12] [(short)5] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)19480)), ((-(((/* implicit */int) var_1))))));
                            var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((min((var_6), (((/* implicit */int) (unsigned char)22)))) / (var_4)))), (min((((/* implicit */unsigned int) (unsigned short)1450)), (arr_39 [i_11])))));
                        }
                        arr_51 [18U] [(unsigned char)2] [i_12] [i_13] [7U] [(signed char)0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_43 [i_12] [i_13] [i_12])), (arr_40 [i_13] [i_14])))) ? ((~(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) != (var_3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)20395)) : (var_3)))), (arr_37 [i_12] [i_14])))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31388)) ? (min((((var_4) ^ (((/* implicit */int) var_7)))), ((~(((/* implicit */int) arr_42 [i_11])))))) : (((((/* implicit */_Bool) -1191683075)) ? (((((/* implicit */int) (unsigned char)233)) * (((/* implicit */int) (short)-18755)))) : (((/* implicit */int) (short)31893))))));
    }
    var_24 = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (unsigned char)233)))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)13964))))))));
    /* LoopSeq 3 */
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
    {
        arr_56 [i_16] = ((/* implicit */unsigned char) (((-(arr_54 [21LL] [i_16]))) - (min((((/* implicit */int) (short)-21886)), (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_53 [i_16] [(unsigned short)7]))))))));
        var_25 = ((/* implicit */int) max((((/* implicit */long long int) (short)-3510)), (max((var_9), (((/* implicit */long long int) arr_53 [i_16] [i_16]))))));
        arr_57 [i_16] = ((long long int) ((short) (~(((/* implicit */int) (short)21886)))));
    }
    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_18 = 2; i_18 < 18; i_18 += 2) 
        {
            for (short i_19 = 2; i_19 < 21; i_19 += 4) 
            {
                for (int i_20 = 3; i_20 < 19; i_20 += 3) 
                {
                    {
                        arr_68 [i_17] [(unsigned short)21] [i_17] [i_20] = ((/* implicit */unsigned short) arr_67 [(unsigned char)1] [i_19] [i_20] [5] [i_20]);
                        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(-1LL)))) ? (((arr_61 [i_20] [(signed char)21]) ^ (1935231935))) : ((~(((/* implicit */int) arr_58 [i_17])))))) % ((+(((/* implicit */int) (unsigned char)223))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 22; i_21 += 4) 
        {
            for (short i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_71 [i_17] [i_21] [i_22]))))) ? ((-(((((/* implicit */_Bool) 2021256113U)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)1)), ((short)-20395)))), (min(((unsigned short)56132), ((unsigned short)19392))))))));
                    var_28 = ((/* implicit */int) ((((/* implicit */long long int) (+(min((((/* implicit */int) arr_63 [i_21])), (var_0)))))) * (max((((((/* implicit */_Bool) arr_64 [(short)9] [(unsigned short)8] [i_22])) ? (arr_66 [i_17] [(unsigned short)1] [11] [(unsigned char)16] [i_22] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_17] [(short)0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11005)) ? (((/* implicit */int) (short)11005)) : (((/* implicit */int) (short)-26419)))))))));
                }
            } 
        } 
        arr_73 [i_17] = ((/* implicit */unsigned char) (-(((((((/* implicit */long long int) ((/* implicit */int) (short)0))) | (var_9))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)254)))))))));
        /* LoopNest 2 */
        for (unsigned short i_23 = 4; i_23 < 21; i_23 += 3) 
        {
            for (unsigned char i_24 = 0; i_24 < 22; i_24 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_25 = 0; i_25 < 22; i_25 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_26 = 1; i_26 < 19; i_26 += 4) 
                        {
                            arr_83 [i_23] [i_24] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)3510)) <= (arr_60 [i_23 - 1] [i_26 + 2])));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                        }
                        arr_84 [i_17] [i_23] = ((/* implicit */long long int) (~((~(((((/* implicit */int) (unsigned short)5696)) | (var_0)))))));
                        /* LoopSeq 1 */
                        for (short i_27 = 1; i_27 < 19; i_27 += 3) 
                        {
                            var_30 = ((int) (unsigned char)218);
                            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (arr_67 [i_23 - 3] [i_23 - 1] [i_23] [i_23 - 2] [i_23 + 1]) : (arr_67 [i_23 - 3] [i_23 - 1] [i_23] [i_23 - 2] [i_23 + 1]))) < (((/* implicit */int) (unsigned short)17479))));
                            var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_55 [21LL] [i_27]))));
                            var_33 *= ((/* implicit */short) (unsigned short)24746);
                        }
                    }
                    for (unsigned int i_28 = 0; i_28 < 22; i_28 += 3) 
                    {
                        arr_91 [(signed char)2] [i_23] [(_Bool)1] [i_24] [i_23] = ((/* implicit */int) max((var_9), (((/* implicit */long long int) (~(var_8))))));
                        arr_92 [i_23] [i_24] [18] [i_23] [i_23] = ((/* implicit */unsigned int) (unsigned short)62725);
                        arr_93 [i_28] [i_23] [i_23] [i_23] [(short)18] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_69 [i_23 + 1])) ? (arr_69 [i_23 - 1]) : (arr_69 [i_23 - 1])))) >= (min((((/* implicit */unsigned int) (-(arr_74 [i_23] [i_24] [i_23])))), (((unsigned int) var_8))))));
                    }
                    var_34 = ((/* implicit */int) max((var_34), (((arr_70 [(short)14] [21] [16LL]) - (((/* implicit */int) ((max((-2062596281), (2025543023))) >= (var_4))))))));
                }
            } 
        } 
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)142)) || (((/* implicit */_Bool) 2080768U))));
    }
    for (unsigned short i_29 = 0; i_29 < 22; i_29 += 4) /* same iter space */
    {
        arr_96 [i_29] [i_29] = max((max((((/* implicit */int) (_Bool)0)), (arr_64 [(signed char)8] [i_29] [i_29]))), (arr_64 [i_29] [(short)21] [i_29]));
        var_36 = ((short) ((((/* implicit */_Bool) arr_65 [i_29] [i_29] [i_29] [i_29])) ? (((/* implicit */int) (short)-1)) : (arr_65 [i_29] [i_29] [i_29] [i_29])));
    }
}
