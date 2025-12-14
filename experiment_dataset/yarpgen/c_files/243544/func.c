/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243544
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
    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            arr_5 [12ULL] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_1 - 1]))));
            arr_6 [i_0] = ((/* implicit */unsigned char) (-((+(-6725350271129512219LL)))));
            var_17 -= ((/* implicit */unsigned long long int) (unsigned char)85);
            var_18 ^= ((/* implicit */unsigned int) (unsigned short)65524);
        }
        for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            arr_11 [i_2 + 1] = ((/* implicit */unsigned long long int) arr_8 [i_0 - 3] [i_0]);
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [i_0 - 4])))) == (((/* implicit */int) arr_3 [i_0 - 2]))));
            arr_13 [(unsigned short)1] [(unsigned short)1] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_0])) == (arr_10 [i_2]))))));
        }
        for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((arr_16 [i_3] [i_3 - 1] [i_3 - 2]) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3 - 2] [i_3]))) + (var_13))))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65533)))))));
            var_21 -= ((/* implicit */int) (unsigned short)65533);
            var_22 = ((/* implicit */short) (-(arr_14 [i_3 - 2] [i_3 - 1] [i_0 + 3])));
            var_23 = ((/* implicit */short) arr_14 [(unsigned short)8] [i_3] [i_3]);
        }
        var_24 = ((/* implicit */unsigned long long int) ((short) ((2299766610604081923ULL) == (16146977463105469671ULL))));
        arr_17 [i_0] = ((/* implicit */unsigned int) ((arr_14 [i_0] [i_0 - 2] [i_0 - 3]) ^ (arr_14 [i_0] [i_0] [i_0 + 1])));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            arr_23 [i_4] [i_4] [i_4 - 1] = ((/* implicit */unsigned long long int) 288160007407534080LL);
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_4])) == (((/* implicit */int) var_4))))) * (((/* implicit */int) ((16146977463105469689ULL) == (((/* implicit */unsigned long long int) 14U)))))));
            arr_24 [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_4 - 1]))));
            var_26 *= ((/* implicit */long long int) (unsigned short)2);
            var_27 = ((/* implicit */unsigned long long int) ((0LL) == ((+(var_14)))));
        }
        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 2; i_7 < 9; i_7 += 2) 
            {
                arr_29 [i_4] [i_4 - 1] [i_4] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_4 - 1] [i_4]))));
                /* LoopSeq 4 */
                for (signed char i_8 = 3; i_8 < 8; i_8 += 3) 
                {
                    var_28 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18037))) == (16146977463105469661ULL)))) & (((arr_22 [i_7]) ? (((/* implicit */int) arr_3 [(unsigned char)0])) : (((/* implicit */int) (unsigned short)65521))))));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((short) arr_0 [i_8 - 1])))));
                    var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)192))));
                    arr_32 [i_4] [i_4 - 1] [i_7] [i_7] [8] [i_8] |= ((/* implicit */short) ((((/* implicit */int) (unsigned short)18048)) == (((/* implicit */int) arr_27 [i_8] [i_8 - 3] [i_7] [i_8 - 3]))));
                }
                for (unsigned long long int i_9 = 2; i_9 < 6; i_9 += 4) 
                {
                    arr_35 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4 - 1])) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) var_5)))))));
                    var_31 -= ((/* implicit */long long int) (+(0ULL)));
                    arr_36 [i_4 - 1] [i_6] [i_4 - 1] [i_7] &= ((/* implicit */unsigned char) ((16146977463105469677ULL) & (((/* implicit */unsigned long long int) -288160007407534080LL))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_11 = 2; i_11 < 7; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65533)) ? (arr_37 [i_11 + 3] [i_6 - 2] [i_7 - 1]) : (arr_37 [i_11 - 1] [i_6 - 2] [i_7 + 1])));
                        var_33 = ((/* implicit */unsigned int) -872447635149928575LL);
                        arr_44 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) * (1673081594U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_11])))));
                    }
                    for (unsigned char i_12 = 2; i_12 < 9; i_12 += 4) 
                    {
                        arr_47 [i_6 + 1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_1 [i_7 - 1])))) && (((((/* implicit */_Bool) arr_26 [i_4] [i_7 - 1] [i_4])) || (((/* implicit */_Bool) (unsigned short)65416))))));
                        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                        arr_48 [i_4] = (((~(var_13))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526))));
                        var_35 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)4623))))) * ((-(((/* implicit */int) var_3))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 3) 
                    {
                        arr_53 [i_6 - 2] [i_4] [i_10] [i_13 + 2] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((arr_45 [i_4 - 1] [i_6] [i_4 - 1]) == (((/* implicit */unsigned long long int) -288160007407534093LL)))))));
                        arr_54 [i_4] [i_10] [i_7] [i_6 - 2] [4ULL] [i_6 - 2] [i_4] = (unsigned short)65534;
                    }
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        var_36 &= ((/* implicit */long long int) ((((/* implicit */_Bool) -674238714)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-25501)) > (arr_43 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_7 - 1]))))));
                    }
                    arr_57 [i_4] = ((/* implicit */unsigned short) arr_50 [i_4] [i_6 + 1]);
                    var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_4])) << (((674238726) - (674238709)))));
                }
                for (unsigned char i_15 = 1; i_15 < 9; i_15 += 1) 
                {
                    arr_60 [i_4 - 1] [i_6] [i_7] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_6] [i_7])) ? (((/* implicit */int) arr_19 [i_4])) : (arr_46 [i_4] [i_4] [8] [i_6] [i_6] [i_7] [i_15 + 1]))) == (((/* implicit */int) (unsigned short)8192))));
                    arr_61 [i_4] [(unsigned short)6] [i_4] [i_7] [i_15] [i_4] = (((-(((/* implicit */int) (unsigned short)65533)))) == ((+(((/* implicit */int) (short)-1)))));
                }
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_4 - 1])) ? (arr_18 [i_4 - 1]) : (arr_18 [i_4 - 1])));
                    arr_65 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 32767)) ? (32757) : (((/* implicit */int) (unsigned short)65529))));
                    var_40 = ((/* implicit */unsigned short) (~(arr_31 [i_6] [i_6] [7LL] [i_4] [i_6 - 2])));
                    /* LoopSeq 4 */
                    for (unsigned char i_17 = 1; i_17 < 8; i_17 += 3) 
                    {
                        var_41 = ((/* implicit */short) (~(((((/* implicit */int) (signed char)12)) >> (((var_1) - (2165688038U)))))));
                        arr_68 [i_4] [i_4] [(short)6] = arr_46 [i_4] [i_6 - 2] [i_6 - 2] [6LL] [i_4] [i_6 - 2] [i_4];
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_49 [i_4] [4ULL] [(unsigned char)3] [i_16] [i_17] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) == (arr_43 [(signed char)6] [(short)2] [i_7] [i_6 + 1] [i_4])))) : (((/* implicit */int) ((signed char) (unsigned short)28634)))));
                        var_43 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)22))));
                    }
                    for (short i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        var_44 = ((/* implicit */int) arr_25 [i_4] [i_4]);
                        arr_71 [i_4] [i_4] [i_4] [(short)6] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)20626))));
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 7; i_19 += 4) 
                    {
                        arr_75 [i_4] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) arr_51 [i_16] [i_6] [i_6] [i_4])))));
                        arr_76 [i_4] [i_16] [i_4] [i_6 - 1] [i_4] = ((/* implicit */unsigned short) ((-3644746638237340037LL) & (((/* implicit */long long int) -674238695))));
                    }
                    for (unsigned short i_20 = 3; i_20 < 9; i_20 += 3) 
                    {
                        var_45 -= (+(arr_58 [i_20 - 2] [i_7 - 1] [i_6 - 1] [i_4 - 1]));
                        arr_79 [i_20 + 1] [i_16] [i_4] [i_7] [i_4] [i_4] [i_4] = ((((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_4] [i_4] [i_7] [i_7] [3U] [i_20]))))) == ((~(arr_45 [i_4] [i_4] [i_4]))));
                        arr_80 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_7 + 1])) * (((/* implicit */int) (unsigned short)36902))));
                    }
                    arr_81 [i_6] [i_16] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)15037))));
                }
            }
            arr_82 [i_4] [i_6] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)20045))));
        }
        var_46 = ((((/* implicit */_Bool) arr_33 [i_4 - 1] [i_4] [i_4] [i_4])) ? ((~(((/* implicit */int) (unsigned short)18103)))) : (arr_46 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_4]));
        arr_83 [i_4] = ((/* implicit */unsigned int) var_5);
        /* LoopSeq 1 */
        for (long long int i_21 = 2; i_21 < 7; i_21 += 4) 
        {
            var_47 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)7168)) == (((/* implicit */int) (unsigned char)224)))))));
            var_48 ^= ((/* implicit */signed char) var_2);
        }
        /* LoopSeq 1 */
        for (long long int i_22 = 2; i_22 < 9; i_22 += 3) 
        {
            var_49 *= ((/* implicit */unsigned char) var_4);
            arr_88 [i_4 - 1] [i_22 - 1] [i_4] = ((/* implicit */unsigned short) arr_66 [i_4] [i_4 - 1] [i_4 - 1] [i_22] [i_22]);
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_22 - 2])) ? (arr_18 [i_22 - 2]) : (arr_18 [i_22 + 1])));
        }
    }
}
