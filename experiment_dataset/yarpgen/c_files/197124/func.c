/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197124
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
    var_20 = var_16;
    var_21 = ((/* implicit */unsigned short) (-((+(min((358182151), (((/* implicit */int) (unsigned short)64353))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_17);
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 8472709068154217884LL)) && (((/* implicit */_Bool) min((((/* implicit */int) ((short) var_5))), (((67108863) + (-131072))))))));
        arr_5 [i_0] = ((/* implicit */long long int) (~(arr_2 [i_0])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_8 [i_1] [i_1] [i_1] = min((((((((/* implicit */_Bool) (short)22385)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_16)))) | (((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) (unsigned char)98)));
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                arr_11 [i_2] &= ((/* implicit */int) (-(0U)));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            arr_17 [i_3] [i_2] [i_3] &= max((((((/* implicit */_Bool) min((-1260195671), (995019067)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) arr_9 [i_0]))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4398046511103LL)) ? (6929971012469211355ULL) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) (short)12690)) : (((/* implicit */int) var_4)))))))));
                            arr_19 [i_1] [i_4] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */int) 2513120993547564624LL);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_5 = 3; i_5 < 19; i_5 += 4) 
                {
                    arr_23 [i_2] [i_1] [i_5] [i_5] &= ((/* implicit */unsigned int) var_12);
                    arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)46566)) == (arr_15 [i_0] [i_1] [i_1] [i_2] [i_1])));
                }
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        arr_32 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_2] [i_0]) < (((/* implicit */int) var_12)))))) ^ (min((arr_14 [i_0] [i_0] [i_0] [i_2] [i_6] [i_7]), (((/* implicit */unsigned int) (unsigned char)93))))));
                        arr_33 [i_0] [i_1] [i_2] [i_1] [i_1] [i_7] = ((/* implicit */long long int) -1773537328);
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        arr_38 [i_2] [i_2] |= ((/* implicit */signed char) (short)7461);
                        arr_39 [i_8] [i_1] [i_2] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)254)) ? (1615320725U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                    }
                    arr_40 [i_0] [i_1] [i_1] [i_2] [i_6] [i_2] = min((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1])) * (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_6] [i_1])) ? (((/* implicit */int) var_5)) : (var_3)))))), ((~((~(arr_28 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_6]))))));
                    arr_41 [i_2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_1] [i_2] [i_6])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))) ? (((long long int) arr_34 [i_0] [i_1])) : (((/* implicit */long long int) 2300192184U))));
                }
                arr_42 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) 4294967290U);
            }
            for (unsigned char i_9 = 1; i_9 < 19; i_9 += 1) 
            {
                arr_45 [i_0] = ((/* implicit */long long int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) 1897094043U))))))), (arr_35 [i_1] [i_9 - 1] [i_9 + 1] [i_9] [i_9] [i_9 - 1])));
                arr_46 [i_0] [i_1] [i_9] = ((/* implicit */unsigned int) (~((~(arr_21 [i_1] [i_1] [i_9] [i_1])))));
                arr_47 [i_0] [i_1] [i_0] = ((/* implicit */short) (unsigned short)65535);
                arr_48 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_13))) << (((((((/* implicit */_Bool) (unsigned short)14102)) ? (3524253428U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))))) - (3524253425U)))))) : (min((((2299475944140286704ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15612))))), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_1] [i_1] [i_9]))))));
            }
            for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_17);
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    arr_56 [i_0] [i_11] = ((/* implicit */unsigned short) ((((var_7) | (((/* implicit */int) var_16)))) > (((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_0] [i_1])) ? (arr_30 [i_0] [i_1] [i_0] [i_11] [i_1]) : (-355628882)))));
                    arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_53 [i_11] [i_1] [i_10] [i_11] [i_1]);
                }
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                arr_60 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) var_11);
                /* LoopSeq 2 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    arr_63 [i_0] [i_1] [i_1] [i_13] = ((/* implicit */unsigned int) arr_35 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
                    arr_64 [i_0] [i_1] [i_12] [i_0] = ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_5)), (arr_31 [i_0] [i_1] [i_0] [i_12] [i_13])))))) ? (((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_13] [i_1] [i_12] [i_13])))))))) : ((~(((((/* implicit */unsigned int) -260202973)) - (var_15))))));
                }
                /* vectorizable */
                for (unsigned int i_14 = 3; i_14 < 20; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        arr_70 [i_0] [i_0] [i_12] [i_1] [i_1] [i_12] [i_15] &= ((/* implicit */signed char) var_6);
                        arr_71 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((var_13) | (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))));
                        arr_72 [i_0] [i_0] [i_0] [i_0] [i_15] [i_0] [i_0] &= ((/* implicit */unsigned char) (short)-1904);
                    }
                    arr_73 [i_0] [i_1] [i_12] = (~(arr_25 [i_1] [i_14 - 2]));
                }
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 19; i_16 += 3) 
                {
                    for (unsigned int i_17 = 1; i_17 < 20; i_17 += 2) 
                    {
                        {
                            arr_81 [i_0] [i_0] [i_16 - 2] [i_16 - 2] [i_17] = ((/* implicit */unsigned int) (short)1);
                            arr_82 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) 18446744073709551615ULL);
                            arr_83 [i_16 + 2] [i_16] [i_12] [i_16] [i_17] [i_1] = ((/* implicit */unsigned char) (~(min((((var_6) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))))), (((/* implicit */long long int) var_9))))));
                            arr_84 [i_0] [i_1] [i_0] [i_17 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((arr_16 [i_0] [i_16 + 2] [i_12] [i_1] [i_0]), (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_15))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) - (((((/* implicit */_Bool) 8740996714213509748ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_17)))))));
                        }
                    } 
                } 
                arr_85 [i_1] [i_0] [i_1] [i_12] = ((((/* implicit */_Bool) (~(var_15)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)255))))))))));
                arr_86 [i_12] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned int) max((((/* implicit */unsigned short) ((short) arr_7 [i_0] [i_1]))), (((unsigned short) 11275700018536274008ULL)))));
            }
            arr_87 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((4106829412U) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))))) & (((int) ((((/* implicit */int) (short)4253)) - (((/* implicit */int) (unsigned short)65535)))))));
        }
    }
    for (unsigned int i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
    {
        arr_91 [i_18] = min((((/* implicit */unsigned long long int) ((int) var_0))), (((min((((/* implicit */unsigned long long int) arr_7 [i_18] [i_18])), (arr_2 [i_18]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5260670645470217931LL)) ? (var_17) : (((/* implicit */long long int) arr_35 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))))));
        arr_92 [i_18] = ((/* implicit */int) arr_9 [i_18]);
        /* LoopSeq 1 */
        for (int i_19 = 0; i_19 < 21; i_19 += 3) 
        {
            arr_95 [i_18] [i_19] = ((/* implicit */short) 1907026791);
            arr_96 [i_18] [i_18] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) == (532764248U)))) * ((~(((/* implicit */int) (unsigned char)47))))));
            arr_97 [i_18] &= arr_54 [i_18] [i_19] [i_19] [i_19];
            arr_98 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65531)) && (((/* implicit */_Bool) 2130706432U))))) % (((int) 4294967295U))));
            arr_99 [i_18] [i_18] [i_18] &= ((/* implicit */unsigned int) (((((~(arr_30 [i_18] [i_18] [i_18] [i_18] [i_19]))) + (2147483647))) << (((((((/* implicit */int) (unsigned short)43920)) << (0U))) - (43920)))));
        }
        arr_100 [i_18] [i_18] = ((/* implicit */unsigned short) var_16);
    }
    for (int i_20 = 0; i_20 < 13; i_20 += 1) 
    {
        arr_104 [i_20] [12] = ((/* implicit */int) var_6);
        arr_105 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)89)))) ? (((((arr_75 [i_20] [i_20] [i_20] [i_20]) + (2147483647))) << (((((/* implicit */int) (unsigned char)66)) - (66))))) : (arr_0 [i_20])))) && ((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14328)) / (((/* implicit */int) (short)-25403)))))))));
    }
    var_22 = (+(var_2));
    var_23 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_13))) == (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)243)) : (362354547)))))) : (1034567449U)));
}
