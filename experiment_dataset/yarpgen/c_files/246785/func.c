/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246785
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) * (max((799631060U), (((/* implicit */unsigned int) (unsigned char)61))))))), (((unsigned long long int) (unsigned char)78)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_0 [i_0]) - (arr_0 [i_0])))))))));
        arr_5 [(unsigned char)7] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))) * (max((-8834209504181744770LL), (((/* implicit */long long int) 799631083U)))))), (arr_0 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 4; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_7 [i_1])) >> (((arr_9 [i_1] [(unsigned char)21] [(unsigned char)3]) + (6677746603169171309LL)))))))));
            arr_12 [i_1] [(unsigned short)21] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2])) ? (((/* implicit */int) arr_6 [i_2 - 3] [16ULL])) : (((/* implicit */int) arr_6 [i_2 - 1] [(_Bool)1])))) << ((((+(((/* implicit */int) arr_6 [i_2 - 3] [i_2 - 3])))) - (42306)))));
            var_17 = ((/* implicit */unsigned int) (~(max((((/* implicit */int) (unsigned char)74)), (((((/* implicit */_Bool) -4616306174698209182LL)) ? (((/* implicit */int) (short)-5248)) : (((/* implicit */int) (unsigned char)194))))))));
            var_18 = ((/* implicit */unsigned char) max((((unsigned int) arr_11 [i_1])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1])) & (((/* implicit */int) arr_8 [i_1])))))));
            var_19 = ((/* implicit */signed char) 4198370190U);
        }
        for (unsigned short i_3 = 4; i_3 < 22; i_3 += 2) /* same iter space */
        {
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) ((unsigned short) 10935391445113840512ULL))) == (((/* implicit */int) max(((short)15389), (((/* implicit */short) arr_14 [i_1] [(unsigned short)7]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [3ULL])) + (((/* implicit */int) var_10))))) ? (1398993479) : ((-(((/* implicit */int) (unsigned char)194))))))) : ((~(18446744073709551615ULL)))));
            var_20 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (~(arr_11 [i_3])))) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) var_4)) : (arr_11 [i_3]))) : (((/* implicit */int) (short)20542)))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned short) min((arr_15 [i_1] [i_4]), (arr_15 [i_1] [i_4]))));
            arr_20 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
            arr_21 [(unsigned short)6] [(short)16] |= ((/* implicit */unsigned char) min((((/* implicit */int) var_13)), (((((/* implicit */int) arr_14 [i_1] [i_1])) % (((/* implicit */int) (unsigned short)65535))))));
        }
        var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_1])), (var_4)))) * (((/* implicit */int) ((((/* implicit */int) arr_17 [(_Bool)1])) > (((/* implicit */int) var_4)))))));
        var_22 = ((/* implicit */unsigned int) max((((int) arr_8 [(signed char)14])), ((+(((/* implicit */int) arr_13 [i_1]))))));
    }
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        arr_26 [i_5] [i_5] = (~((-((+(((/* implicit */int) (unsigned short)65535)))))));
        arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) max((((min((arr_14 [i_5] [15LL]), (var_0))) ? ((~(((/* implicit */int) arr_25 [i_5])))) : (((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])))))), (((/* implicit */int) (unsigned char)248))));
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 12; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 3; i_7 < 12; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 4; i_9 < 13; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            {
                                arr_39 [8ULL] [(unsigned short)8] [i_7 + 1] [(unsigned char)2] [i_9 + 1] [0] [i_10] &= ((/* implicit */unsigned int) ((((-2987832798264125082LL) % (((/* implicit */long long int) ((/* implicit */int) (short)4889))))) * (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                                var_23 += ((/* implicit */unsigned int) (unsigned char)243);
                                var_24 -= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_6 + 1] [(unsigned short)0] [i_8] [0LL] [i_10] [(_Bool)1] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17276))) != (-4045243994404399782LL)))) : (((/* implicit */int) arr_7 [i_7 - 3])));
                                var_25 = ((/* implicit */long long int) (-(((/* implicit */int) (short)12017))));
                            }
                        } 
                    } 
                    arr_40 [i_6] [i_7 + 2] [i_6] = ((/* implicit */int) ((unsigned short) arr_15 [i_6 + 1] [i_6 - 1]));
                    arr_41 [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) -1239316047);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((arr_15 [i_6 + 2] [i_11]) != (((/* implicit */int) (short)-22277))));
                            arr_51 [(_Bool)1] [0] [12LL] [i_6] [i_14] = (i_6 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) (unsigned short)52970)) >> (((((((/* implicit */_Bool) -1253778039)) ? (arr_29 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_13]))))) - (9107054017825900849ULL)))))) : (((/* implicit */short) ((((/* implicit */int) (unsigned short)52970)) >> (((((((((/* implicit */_Bool) -1253778039)) ? (arr_29 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_13]))))) - (9107054017825900849ULL))) - (13203353831612415737ULL))))));
                        }
                    } 
                } 
            } 
            arr_52 [i_6] [i_11] = ((/* implicit */unsigned short) -762835612102212103LL);
        }
        arr_53 [i_6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 0)) ? (arr_29 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(signed char)14])))))));
    }
    var_27 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(var_8)))), (((((/* implicit */_Bool) 11760085818580339238ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (175470048227001664ULL)))));
}
