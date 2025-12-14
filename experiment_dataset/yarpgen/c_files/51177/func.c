/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51177
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) ((unsigned char) (short)-3698))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (arr_2 [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))))) : (((((/* implicit */_Bool) (signed char)107)) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_2 - 1])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_1] [(short)2] [(short)2] [11ULL] [(short)2] = ((/* implicit */unsigned long long int) arr_9 [i_0] [(unsigned short)6] [(unsigned short)6] [i_2] [i_2 - 2] [i_3] [i_4]);
                                var_15 = ((/* implicit */long long int) min((((int) arr_12 [i_1 + 1] [i_2 + 2] [i_2 + 2] [i_3] [i_4] [i_1])), (((/* implicit */int) ((min((((/* implicit */long long int) (signed char)-101)), (arr_10 [i_0] [i_3]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)3] [i_1]))))))));
                                arr_14 [1U] [i_3] [i_3] [i_3] [i_3] [i_3] [5LL] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-126)), ((unsigned char)4)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_0] [2ULL]) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) arr_9 [i_0] [(short)8] [(short)1] [11LL] [11LL] [i_0] [i_2])))))) : ((+(4294967292U)))))) / (var_3))))));
                        arr_17 [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_4 [i_1])), ((+(((/* implicit */int) (_Bool)1))))));
                        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) ((var_4) ? (((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((/* implicit */int) var_8)) - (54)))))) ? (-1LL) : (arr_6 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((-8193556598124680689LL) == (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-108)) + (2147483647))) >> (((18446744073709551614ULL) - (18446744073709551583ULL))))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_21 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2]))) != (((((/* implicit */_Bool) 5706445152828297261ULL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) + (18446744073709551615ULL));
                        arr_22 [i_0] [1U] [(unsigned char)4] [(unsigned char)7] [i_6] |= (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4030))) : (arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6]))));
                        var_18 = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_2] [i_0] [i_0]))) - (var_1)))));
                    }
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_2] [i_2] [(_Bool)1] [i_2 + 3]))));
                        arr_28 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)2901)) == (((/* implicit */int) (signed char)107))))) > (((/* implicit */int) arr_16 [4ULL] [i_0] [i_1 + 1] [i_2 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_23 [i_1 - 1]), ((short)-18575))))) : (((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [(short)9] [i_7])) + (2147483647))) >> (((2147483647) - (2147483627)))))) ? (-2671968711546776863LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0])))))));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_26 [i_0] [i_1]);
                        var_19 += ((/* implicit */unsigned char) (signed char)56);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_33 [i_0] [(_Bool)1] [i_1] [i_2] [i_8] [i_8])), (var_3)))), (max((((/* implicit */unsigned long long int) arr_30 [i_0] [(short)2] [i_1] [i_8] [i_0])), (var_7)))))));
                        var_21 ^= ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)0)), ((-2147483647 - 1))))) < (arr_10 [(unsigned char)10] [(unsigned char)10])));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        arr_36 [(short)9] = ((/* implicit */short) var_12);
        var_22 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65531))));
        arr_37 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_9] [i_9] [(signed char)12] [(signed char)2])) - (((/* implicit */int) arr_0 [(short)3]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) * (12740298920881254360ULL))) : (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        arr_41 [i_10] [i_10] = ((/* implicit */unsigned char) arr_40 [i_10]);
        arr_42 [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */int) (signed char)-125)) + (((/* implicit */int) (unsigned char)155))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        arr_45 [i_11] [(short)12] = ((/* implicit */unsigned short) (+(var_1)));
        arr_46 [i_11] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_11] [i_11])) ? (((/* implicit */int) arr_43 [i_11] [i_11])) : (((/* implicit */int) arr_43 [i_11] [11LL]))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_11] [i_11])))))));
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            arr_49 [(unsigned char)23] [i_11] = ((/* implicit */unsigned long long int) arr_48 [i_11] [(unsigned char)2] [i_12]);
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_47 [i_12] [(short)21] [i_12])) : (((/* implicit */int) arr_47 [i_12] [i_12] [i_11])))))));
        }
    }
    var_25 = (~(var_12));
}
