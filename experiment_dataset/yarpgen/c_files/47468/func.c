/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47468
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44767)) % (((/* implicit */int) (unsigned char)54))))), ((~(var_13))))))))));
        arr_2 [i_0] = var_10;
        var_16 = ((/* implicit */long long int) arr_0 [i_0] [22ULL]);
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(arr_0 [i_0] [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (_Bool)1)), (arr_1 [4LL]))) % (arr_1 [i_1])))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)1))))) * (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (17763297502430556345ULL)))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 545357767376896LL)) ? (max((((/* implicit */unsigned long long int) arr_8 [i_1] [i_2])), ((+(4593277448376513096ULL))))) : (((/* implicit */unsigned long long int) min((arr_1 [i_1]), (arr_1 [i_2]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_19 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_1]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_3] [18] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_2] [i_1] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1]))) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [(_Bool)1] [(unsigned short)10])) != (((/* implicit */int) (unsigned short)21613))))) : (((/* implicit */int) arr_16 [i_5 - 2] [i_5 - 1] [i_5] [i_5] [i_5 + 2] [(_Bool)1]))));
                        arr_21 [15] [i_2] [i_3] [i_4] [i_1] [(unsigned char)13] = ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))));
                        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_5 + 1] [i_4])) ? (((arr_11 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_4] [i_3]))))) : (((/* implicit */long long int) arr_18 [i_5 - 2] [i_5] [i_5] [i_5 - 2] [i_5]))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        arr_25 [i_1] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) arr_3 [i_1] [i_6]);
                        arr_26 [i_1] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) / (arr_24 [i_6 + 1] [i_6 - 1] [(unsigned char)0] [i_6] [i_6 + 4] [i_6 - 2])));
                        arr_27 [i_1] [i_1] = arr_17 [i_1] [i_2] [i_3] [i_4] [i_6] [i_1] [i_6 + 3];
                        var_21 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1794641516)) ? (3733927571596204047ULL) : (((/* implicit */unsigned long long int) -276556431)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [(short)13] [6ULL] [i_6])))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (13853466625333038539ULL))))));
                        arr_31 [(signed char)0] [(signed char)0] [i_3] [i_4] [i_1] [(signed char)5] = (i_1 % 2 == 0) ? (((arr_18 [i_1] [i_4] [i_3] [i_2] [i_1]) >> (((((/* implicit */int) arr_15 [i_1] [i_7 - 2])) - (5619))))) : (((((arr_18 [i_1] [i_4] [i_3] [i_2] [i_1]) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_1] [i_7 - 2])) - (5619)))));
                    }
                }
                arr_32 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_14 [i_1] [i_2] [i_2] [i_3])))), (((/* implicit */int) arr_29 [i_1] [i_2] [i_2] [i_3]))))) | (min((((/* implicit */unsigned long long int) (+(var_10)))), ((~(var_5)))))));
                var_23 ^= ((/* implicit */short) arr_18 [i_1] [i_1] [i_2] [i_3] [18LL]);
            }
        }
        for (short i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            var_24 = min((((/* implicit */unsigned long long int) ((signed char) arr_30 [i_8 + 1] [i_1] [i_8 + 2] [i_8 + 1] [i_8 + 1]))), ((~((~(arr_5 [i_1] [i_8]))))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_1] [(_Bool)1] [i_1] [i_1]))))) >= (((arr_34 [(_Bool)1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_24 [i_8] [i_8] [i_1] [i_1] [18] [(unsigned char)19]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((arr_11 [i_1]) < (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_8] [i_8]))))))))))))));
        }
        var_26 = ((/* implicit */signed char) arr_17 [i_1] [i_1] [i_1] [i_1] [(unsigned char)11] [i_1] [i_1]);
    }
    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43923)) ? ((-(1211960099U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_9])) ? (arr_6 [i_9]) : (arr_6 [i_9]))))));
        arr_37 [i_9] = ((/* implicit */unsigned int) ((4609434218613702656LL) % (((/* implicit */long long int) ((int) (+(5632706315448879352ULL)))))));
        arr_38 [5ULL] = ((/* implicit */signed char) ((((min((arr_10 [i_9] [(signed char)14] [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_29 [14ULL] [i_9] [i_9] [i_9])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32767))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_30 [i_9] [12U] [i_9] [(unsigned short)2] [i_9]) & (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) arr_33 [i_9] [i_9] [i_9])) : ((~(((/* implicit */int) (_Bool)1)))))))));
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))), (((arr_24 [i_9] [i_9] [11LL] [i_9] [i_9] [i_9]) ^ (arr_24 [i_9] [(_Bool)1] [i_9] [i_9] [i_9] [i_9]))))))));
        var_29 = ((/* implicit */_Bool) max((min((var_2), (((/* implicit */int) ((((/* implicit */_Bool) 3663452584U)) && (((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9] [i_9] [(_Bool)1]))))))), (((((((/* implicit */int) arr_35 [i_9])) & (((/* implicit */int) arr_34 [i_9] [i_9])))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) > (arr_1 [i_9]))))))));
    }
    var_30 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (unsigned short i_10 = 2; i_10 < 15; i_10 += 3) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            {
                var_31 = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_34 [i_10] [10LL])))));
                var_32 = ((((/* implicit */_Bool) min((arr_41 [i_10 + 1] [i_11]), (arr_41 [i_10 - 1] [14])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (max((((/* implicit */unsigned int) (_Bool)1)), (var_1)))))) : (arr_11 [i_10]));
                var_33 *= ((/* implicit */signed char) var_10);
                var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) - (var_5)))))) ? (((unsigned int) arr_16 [i_10 - 2] [i_10 - 2] [i_10 - 2] [i_10] [i_10] [i_11])) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-40)), (var_4))))));
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_49 [i_10] [i_11] [i_10] = ((/* implicit */int) ((((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_10 - 1] [i_10 + 2] [i_10] [i_10]))) ^ (arr_42 [i_10]))) : ((~(2164680002920483838LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_33 [12] [i_11] [i_12])))));
                    arr_50 [i_10] [i_11] [i_10] = ((/* implicit */signed char) ((((arr_1 [i_10 - 1]) ^ (arr_1 [i_10 + 1]))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [16U] [i_11])) ? (var_4) : (((/* implicit */int) (short)12754)))))))));
                }
                for (unsigned int i_13 = 1; i_13 < 14; i_13 += 4) 
                {
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_23 [i_13 + 3] [i_13] [i_11] [i_10 - 2]), (arr_23 [i_10] [i_11] [i_13 - 1] [i_13 + 3])))) ? (((/* implicit */int) min(((unsigned short)43923), (arr_23 [i_10] [i_10] [i_10] [i_10])))) : (((((/* implicit */_Bool) arr_8 [i_10] [i_11])) ? (((/* implicit */int) arr_8 [(short)11] [i_11])) : (((/* implicit */int) arr_23 [i_10] [i_10] [i_10 - 2] [i_10])))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 1) 
                        {
                            {
                                arr_62 [i_10 + 2] [i_14] = ((/* implicit */unsigned short) max((min(((+(4294967295U))), (((/* implicit */unsigned int) ((((-276556419) + (2147483647))) << (((var_13) - (10533281796511205604ULL)))))))), (((/* implicit */unsigned int) (+(arr_18 [(short)4] [i_10 + 1] [i_10] [i_10] [i_14]))))));
                                arr_63 [i_15] [i_14] [i_13] [i_14] [i_10] = ((/* implicit */long long int) (((+(((/* implicit */int) min((((/* implicit */unsigned char) arr_44 [i_10] [i_10] [i_13])), (arr_16 [i_10] [i_10] [i_13] [i_13] [i_14] [i_15 + 1])))))) / ((+((+(((/* implicit */int) arr_61 [i_14]))))))));
                                arr_64 [i_14] [i_13 - 1] [(unsigned char)3] [i_14] = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) max((arr_54 [i_10 + 1] [i_13] [i_13]), (((/* implicit */unsigned short) (unsigned char)180))))) <= (var_8)))), (((unsigned short) ((((/* implicit */_Bool) arr_23 [i_15] [i_14] [i_11] [16])) ? (((/* implicit */int) arr_13 [i_10] [15LL] [i_13] [i_15])) : (((/* implicit */int) arr_54 [i_10 - 1] [i_10 - 1] [i_10 - 1])))))));
                            }
                        } 
                    } 
                }
                for (signed char i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    arr_69 [i_10] [i_16] = ((/* implicit */signed char) (+((+(arr_42 [i_16])))));
                    arr_70 [i_16] [i_11] [i_16] [i_11] = ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)127)), ((short)32743))))) - ((+(arr_17 [i_10] [i_10 + 2] [i_16] [i_10 - 2] [i_16] [i_10 - 2] [i_11]))));
                    arr_71 [i_16] [i_11] [i_11] [i_16] = ((/* implicit */int) arr_66 [i_10] [i_16]);
                }
            }
        } 
    } 
}
