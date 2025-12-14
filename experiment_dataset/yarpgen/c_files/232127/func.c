/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232127
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
    var_14 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) (unsigned short)12932)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47056))) : (var_1)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (((((2924883460U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22156))) & (var_2))))) < (var_1))))));
            var_17 |= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))) * (0U));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_3 [(short)4])))))))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) (short)22155)))), (((/* implicit */int) arr_3 [(unsigned char)8])))))));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_16 [i_2] [(unsigned char)5] [(unsigned char)18] [(unsigned char)5] = ((/* implicit */unsigned char) (short)-22156);
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_3] [i_4])))))) ? (((((/* implicit */_Bool) var_13)) ? (1095216660480LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [17LL]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5875653422135317180LL)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) var_4)))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_2 [i_4]))));
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) var_6))));
                    arr_17 [i_2] [2U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)183))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) var_0);
            arr_20 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)22156)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
        }
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_24 = ((/* implicit */int) arr_0 [i_2] [i_6]);
            arr_23 [i_2] = ((/* implicit */long long int) (~(((0U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [16LL])))))));
        }
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(short)11] [0] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_8 [i_2] [i_7] [13ULL])));
            var_26 = ((/* implicit */unsigned char) (+(0U)));
            /* LoopSeq 3 */
            for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) 0LL);
                /* LoopSeq 2 */
                for (unsigned short i_9 = 2; i_9 < 20; i_9 += 3) 
                {
                    var_28 = ((((/* implicit */_Bool) (unsigned char)4)) ? (((((/* implicit */_Bool) (short)4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22163))));
                    var_29 |= ((/* implicit */unsigned char) (((-(var_12))) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8] [i_9 - 1])))));
                }
                for (unsigned short i_10 = 4; i_10 < 20; i_10 += 4) 
                {
                    var_30 -= (short)-22156;
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_8 - 1] [i_10 - 3] [i_8 - 1] [i_8 - 1])) * (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_5)) : (-732750498)))));
                    /* LoopSeq 3 */
                    for (short i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40046)) | (((/* implicit */int) arr_25 [i_2]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) : (2151744012579251028ULL)));
                        var_33 = ((/* implicit */long long int) 5824258127683264448ULL);
                    }
                    for (short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_34 ^= ((/* implicit */unsigned short) (~(3986560531U)));
                        arr_38 [i_12] [i_2] [i_8] [i_2] [i_2] = ((/* implicit */int) (-(((unsigned int) var_6))));
                    }
                    for (short i_13 = 1; i_13 < 20; i_13 += 2) 
                    {
                        arr_41 [i_2] [(short)10] [i_8 - 1] [i_10 - 2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [(short)5] [i_13] [i_13 - 1] [i_7] [i_7])) ? (21LL) : (arr_39 [i_7] [i_13] [i_13 + 1] [i_7] [i_7])));
                        arr_42 [i_2] [i_2] [i_13] [i_10] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-116)) && (var_10)))) << (((((/* implicit */int) arr_35 [i_7] [(unsigned char)18] [i_7])) - (204)))));
                        arr_43 [(unsigned short)17] [i_10 - 2] [i_8] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_13] [(unsigned short)15] [i_13 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8 + 1] [i_13 - 1]))) : (16295000061130300588ULL)));
                        arr_44 [17LL] [i_8] [(short)5] [(unsigned short)16] [17LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_21 [i_13 - 1] [(unsigned char)3] [i_7]))));
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    arr_47 [18LL] [i_8 - 1] [15U] [i_2] &= ((/* implicit */unsigned long long int) (short)-26654);
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_8 + 1] [i_8 - 1] [i_8 + 1] [18U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8 - 1] [i_8 + 1]))) : (var_9))))));
                }
                for (unsigned int i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    var_36 ^= ((/* implicit */unsigned short) 673418588);
                    arr_51 [i_7] [i_7] [i_7] [(unsigned char)1] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_2] [i_15] [i_2] [i_15])) ? (((/* implicit */int) (unsigned short)40046)) : (((/* implicit */int) (unsigned short)40046)))))));
                    arr_52 [i_15] = ((/* implicit */long long int) arr_1 [i_2]);
                }
                arr_53 [i_8 - 1] [i_2] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-25284))));
            }
            for (int i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                var_37 = ((/* implicit */unsigned short) var_1);
                arr_56 [i_2] [i_2] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-26667)))) | (((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [(short)12] [i_2]))))));
            }
            for (long long int i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-22485))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_17] [i_17])))));
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8632957237178214987LL)) ? (((8330212919701493928LL) & (((/* implicit */long long int) -1648822218)))) : (((((/* implicit */_Bool) (short)0)) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_7] [i_17])))))));
                var_40 = ((/* implicit */short) var_9);
            }
            arr_59 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)25284))))) - (arr_50 [14LL] [i_2] [i_2] [(signed char)7] [i_7])));
        }
        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (signed char)107))));
        var_42 -= ((((((/* implicit */_Bool) arr_6 [20LL] [(unsigned short)4])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (6305012098575047497LL))) - (((var_7) >> (((((/* implicit */int) var_5)) - (56453))))));
        arr_60 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [(unsigned char)14] [(unsigned char)3] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned short)6] [i_2] [i_2]))) : (arr_31 [(short)1] [(short)1] [(unsigned short)20] [i_2] [(short)1] [i_2])));
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 4; i_18 < 12; i_18 += 1) 
    {
        arr_65 [i_18] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)42))))));
        var_43 |= ((((/* implicit */int) arr_29 [i_18 - 4] [i_18 - 3] [2])) << (((((/* implicit */int) arr_29 [i_18 + 2] [i_18 + 1] [(unsigned char)2])) - (126))));
    }
    var_44 = ((/* implicit */unsigned long long int) var_10);
}
