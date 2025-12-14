/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29639
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 += ((/* implicit */long long int) var_8);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) var_16);
                    var_19 *= ((/* implicit */unsigned int) ((unsigned char) (~(271201839))));
                }
                var_20 = min((((((((/* implicit */int) (signed char)-86)) + (2147483647))) << (((((-271201844) + (271201849))) - (5))))), (((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))));
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((min((((/* implicit */short) arr_3 [i_3] [4U])), (var_2))), (((/* implicit */short) ((1065353216U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))) & (((((/* implicit */_Bool) ((-1670353824) - (((/* implicit */int) (unsigned short)24096))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)169))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_23 ^= (!(((/* implicit */_Bool) (~(((arr_12 [i_6] [i_5] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) arr_14 [i_1] [i_4] [i_1] [i_1])) : (var_15)))))));
                            var_24 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_4 [i_0] [i_4])))) ^ (((/* implicit */int) ((short) arr_4 [i_0] [i_4])))));
                            arr_17 [i_6] [i_4] [i_4] [i_6] [i_0] = ((int) min((max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_4])), (arr_11 [i_0] [i_4] [i_4] [i_6]))), (((/* implicit */unsigned long long int) arr_10 [i_4] [i_5] [i_4]))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (+(arr_16 [i_4] [i_4] [i_7] [i_5 - 1] [i_7])));
                            var_26 = ((/* implicit */signed char) -1670353816);
                            var_27 += ((/* implicit */unsigned short) arr_10 [13] [i_4] [i_0]);
                            var_28 = ((/* implicit */_Bool) arr_14 [i_0] [i_5 - 1] [(unsigned short)2] [i_4]);
                        }
                        var_29 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (arr_13 [i_1]))))));
                        var_30 = ((/* implicit */short) var_9);
                        arr_20 [i_4] [i_4] [i_4] [i_4] [i_1] [i_4] = ((var_13) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -1670353824))))));
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1065353216U)));
                        arr_23 [i_0] [i_4] [i_4] [i_4] [i_8] [i_8] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_8])))));
                        var_32 *= ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0]);
                        var_33 = ((/* implicit */signed char) var_10);
                        var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_16 [i_1] [i_1] [i_4] [i_4] [18ULL]), (arr_16 [i_0] [i_0] [i_4] [i_8] [i_4])))) || (((/* implicit */_Bool) max((1283292135U), (((/* implicit */unsigned int) arr_16 [i_8] [i_1] [i_4] [i_1] [i_0])))))));
                    }
                    var_35 = ((/* implicit */unsigned short) ((271201839) / (((/* implicit */int) arr_1 [i_1]))));
                    var_36 = ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [(_Bool)1] [i_4]);
                }
                for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    var_37 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_9])) + (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) (signed char)-64)))) : (((((/* implicit */int) arr_5 [i_0] [i_1] [i_9])) / (((/* implicit */int) (short)-274))))))) == (var_6)));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) (short)-5809);
                        /* LoopSeq 1 */
                        for (signed char i_11 = 3; i_11 < 21; i_11 += 3) 
                        {
                            var_39 += ((/* implicit */signed char) var_15);
                            var_40 += ((/* implicit */signed char) (~(1073741824U)));
                            var_41 = ((/* implicit */signed char) max((((/* implicit */short) ((var_6) > (((/* implicit */unsigned long long int) (~(arr_13 [i_9]))))))), (arr_26 [i_1] [i_9] [i_9])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            var_42 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((arr_12 [i_12] [i_9] [i_1] [i_0]) ? (arr_30 [i_9] [i_12]) : (((/* implicit */int) (unsigned short)28672)))))) ? (((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1670353824)) ? (((/* implicit */int) (short)-17435)) : (1670353844)))) : (9451397740772042884ULL))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)1016)) - (((/* implicit */int) (_Bool)1)))))))));
                            var_43 *= ((unsigned short) -1670353824);
                        }
                    }
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(arr_12 [i_0] [i_1] [i_9] [i_13]))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            arr_43 [i_0] [i_1] [i_9] [i_1] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_6)))));
                            var_45 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_1]))))) > (var_12))))));
                            var_46 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                        }
                        for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            arr_47 [i_9] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 16060233652185855505ULL)) ? (((/* implicit */int) (short)264)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (short)20113)) ? (var_12) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2))))))));
                            arr_48 [i_0] [i_13] [i_9] [i_9] = ((/* implicit */unsigned short) ((unsigned char) 1670353844));
                            var_47 = ((/* implicit */signed char) ((298653078U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15360)))));
                        }
                        for (short i_16 = 1; i_16 < 19; i_16 += 2) 
                        {
                            var_48 = ((/* implicit */unsigned char) (_Bool)1);
                            var_49 += ((/* implicit */int) ((_Bool) ((int) var_3)));
                            var_50 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_50 [i_0] [i_1] [i_0] [i_9] [i_16 + 1])) ? (arr_45 [i_9] [i_0] [i_13] [i_16] [i_16 + 1]) : (((/* implicit */unsigned long long int) arr_50 [i_13] [i_13] [(unsigned char)2] [i_16] [i_16 + 1]))))));
                            var_51 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0] [i_1] [i_16] [i_1] [i_9] [i_1]))) > (arr_13 [i_9])));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_17 = 3; i_17 < 21; i_17 += 2) 
                    {
                        var_52 |= ((/* implicit */short) arr_32 [i_0] [i_1] [i_9] [i_17 - 2]);
                        /* LoopSeq 3 */
                        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            var_53 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_1 [i_9]))))));
                            var_54 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_46 [(unsigned short)21] [i_17] [i_17 + 1] [i_17 + 1] [i_17 + 1])) / (((/* implicit */int) var_2))));
                        }
                        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            var_55 &= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_59 [i_19] [i_1] [i_9] [i_1] [i_0]))))));
                            var_56 = ((/* implicit */signed char) arr_58 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_19]);
                            var_57 = ((/* implicit */signed char) arr_38 [i_19] [i_9]);
                            var_58 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_2)))) >= (((/* implicit */int) var_2))));
                        }
                        for (unsigned short i_20 = 3; i_20 < 21; i_20 += 2) 
                        {
                            var_59 = (!(((/* implicit */_Bool) (unsigned short)13211)));
                            var_60 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_17] [i_1] [(unsigned short)20] [i_17] [i_17 + 1])) ? (((((/* implicit */int) (unsigned short)22131)) >> (((((/* implicit */int) arr_39 [i_20] [i_17 - 1] [i_0] [i_1] [i_0])) + (78))))) : (((/* implicit */int) arr_2 [i_20 - 3]))));
                            var_61 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-20743)) ? (-6662378629590062041LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        }
                        arr_63 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_62 [i_9] [i_17 + 1] [i_17 + 1] [i_17] [i_1])) | (((/* implicit */int) arr_28 [i_9] [i_1] [i_1]))));
                        arr_64 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_54 [i_0] [i_0] [i_17 - 3] [i_0]))));
                    }
                    var_62 += ((/* implicit */long long int) ((min((var_13), ((_Bool)1))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_9])))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-31633))) / (1836662470U)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_21 = 2; i_21 < 19; i_21 += 1) 
    {
        var_63 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) (signed char)-100)))));
        var_64 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_21 + 2] [(signed char)14] [i_21 + 2])) ? ((~(((/* implicit */int) (short)-10713)))) : (((/* implicit */int) ((unsigned short) arr_53 [i_21 + 2] [i_21] [13LL] [i_21] [i_21] [i_21 + 1] [i_21 - 2])))));
        var_65 += ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12288))) + (33554431ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-12439)))))));
        var_66 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_6 [i_21]), (arr_6 [i_21]))))));
    }
    var_67 = ((/* implicit */short) var_7);
    var_68 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) <= ((+(var_4)))));
}
