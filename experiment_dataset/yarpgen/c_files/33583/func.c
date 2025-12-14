/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33583
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
    var_15 = ((/* implicit */int) (unsigned char)106);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 8080952U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15416)))) + (((/* implicit */int) arr_0 [i_0] [i_1 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-14929))))) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (((var_4) ? (15311594570467100526ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))) : (((unsigned long long int) min((((/* implicit */unsigned int) var_2)), (arr_1 [i_0])))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (unsigned char)43))));
                        arr_14 [i_0] [i_0] [i_2] [3U] = ((/* implicit */short) arr_7 [i_3 + 2] [i_1 + 2]);
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (arr_2 [i_0] [i_0] [i_0])));
                    }
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) 1966663905U))))) <= (((/* implicit */int) min((arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2]), (arr_6 [(unsigned short)8] [i_1] [i_1 - 1]))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54999)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)100)) * (((/* implicit */int) arr_3 [i_2] [i_1 + 1] [i_2]))))) : (max((arr_2 [i_0] [i_1 - 1] [i_1 - 1]), (arr_2 [i_0] [i_1 - 1] [(unsigned short)17]))))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned short) ((min((((/* implicit */unsigned int) (signed char)-85)), (arr_1 [i_1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                }
                for (int i_4 = 3; i_4 < 20; i_4 += 1) 
                {
                    arr_18 [i_4] = ((signed char) ((((/* implicit */_Bool) arr_10 [i_1 + 1])) ? (arr_10 [i_1 + 1]) : (arr_10 [i_1 - 1])));
                    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (_Bool)1))))) < (((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)-32764)))))), (var_4)));
                }
                for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    var_22 = (+(((((/* implicit */_Bool) arr_11 [i_1 + 3] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))))))) : (((arr_12 [i_0] [i_1] [i_1 - 1] [(short)13] [i_5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(_Bool)1] [(short)22] [i_0]))))))));
                    /* LoopSeq 4 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        arr_24 [i_6] [i_6] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_8), ((short)14930)))) ? (((/* implicit */int) (unsigned char)149)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0] [i_5])) : (-1999566147))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-32743)) ? (((/* implicit */int) var_1)) : (-1999566170)))))));
                        arr_25 [(signed char)14] [(signed char)14] [i_5] [i_1 + 3] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) 6389859415498373213LL))))), (arr_8 [15ULL] [i_5] [i_5 - 1])));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_21 [i_5] [i_6]))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) arr_0 [i_7] [i_1 + 3]);
                        arr_28 [i_1 + 2] [i_1 + 2] [i_5 - 1] [i_7] [i_7] [i_0] = ((/* implicit */long long int) 11001141257436853870ULL);
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1999566147)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (signed char)-124))))) ? (arr_8 [11] [11] [i_5 - 2]) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (arr_8 [i_0] [i_1] [i_5 - 1]))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_26 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)32763)), (16518618203082358454ULL)))) ? (arr_21 [i_5 + 1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64051))))))));
                        arr_32 [i_0] [i_1] [i_5] [i_1] [i_8] = ((/* implicit */signed char) arr_31 [i_0] [i_5] [(unsigned char)1] [i_0]);
                        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1] [(short)14] [i_5] [i_8])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned long long int) (-(arr_21 [1] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) min((arr_3 [i_5] [i_5] [i_1]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 695247541)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [2LL])) : (((/* implicit */int) (short)16664))))) : (1546230846745621030LL)))));
                        arr_33 [i_0] [(unsigned char)16] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483642)) ? (arr_30 [i_0]) : (12304383034503758428ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_5] [i_5]))) : (arr_2 [i_5 - 1] [i_1 - 1] [(unsigned short)16]))) & (((/* implicit */unsigned long long int) 4272638402U))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        arr_36 [i_0] [i_0] [i_1] [i_5] [i_5] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_5 + 1])) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_5 + 1] [i_9])))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_1 + 1] [i_5] [i_1 + 1] [i_5 - 1])) / (((/* implicit */int) (signed char)-1))));
                    }
                }
                arr_37 [i_1 - 1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1])))));
            }
        } 
    } 
}
