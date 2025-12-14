/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230115
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
    var_19 = var_11;
    var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) var_16)) : (var_1))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (((((/* implicit */_Bool) 3597952733U)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) - (3708152127U)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((arr_3 [i_0] [i_0]) | (((/* implicit */int) var_0)))), (((/* implicit */int) var_12))));
        var_21 = min((((/* implicit */int) min((min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned short) ((_Bool) (unsigned char)231)))))), (((arr_1 [i_0]) | (((/* implicit */int) var_2)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [2U])))))));
        var_23 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
            var_25 = ((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_1]) | (((/* implicit */long long int) arr_5 [i_1]))));
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_8 [i_4]))));
                var_27 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_1])));
                var_28 = ((/* implicit */int) arr_15 [i_1] [i_3] [i_3]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_3 [11LL] [i_3]))) + (2147483647))) << (((18446744073709551615ULL) - (18446744073709551615ULL)))));
                            var_30 = ((/* implicit */signed char) (!(var_8)));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_1]) ? (var_11) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_19 [i_1] [i_3] [i_4] [i_1] [i_3] [i_1])) : (arr_1 [i_1])));
            }
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned int) ((var_7) + (((/* implicit */unsigned long long int) arr_5 [i_1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 1; i_9 < 12; i_9 += 1) 
                    {
                        var_33 |= ((/* implicit */int) arr_11 [12ULL] [12ULL] [i_8]);
                        arr_28 [i_1] [5LL] [i_1] [i_8] [5LL] [i_3] [11] = ((/* implicit */unsigned char) (!(((1936413502U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97)))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_24 [i_1])))));
                        arr_33 [i_1] [i_1] [i_7] [(unsigned char)10] [i_1] [i_1] = ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) ((arr_24 [i_1]) != (((/* implicit */int) arr_25 [i_1] [i_1]))))) : (((/* implicit */int) arr_30 [i_3] [(short)0] [8] [i_1] [8] [i_3])));
                        var_35 = ((/* implicit */int) ((long long int) (signed char)-1));
                        arr_34 [i_1] [i_7] [i_1] = ((((/* implicit */_Bool) var_13)) ? (arr_16 [i_1] [11ULL] [i_8] [i_8]) : (arr_9 [i_1] [i_3] [i_7]));
                    }
                    var_36 = ((/* implicit */signed char) ((int) arr_9 [i_1] [i_3] [i_8]));
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) arr_9 [12] [i_3] [i_3]))));
                    var_38 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2066240354U)) ? (((/* implicit */int) ((_Bool) -2139335828))) : (945498670)));
                    arr_35 [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_3] [15LL] [i_8]))) - (var_13)))) ? (((/* implicit */int) ((unsigned short) (unsigned char)11))) : (((/* implicit */int) ((short) -1388776280)))));
                }
                arr_36 [i_1] [i_3] [i_1] [i_1] = ((((/* implicit */_Bool) arr_25 [i_1] [i_1])) ? (((/* implicit */int) arr_23 [i_1] [i_1] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_23 [i_1] [i_1] [7U] [i_1])));
                arr_37 [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_4)) ? (arr_32 [i_1] [i_3] [i_3] [(unsigned short)13] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
            }
            for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
            {
                var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_11]))));
                /* LoopSeq 3 */
                for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_1] [i_3] [i_11] [i_12]))));
                    var_41 = ((/* implicit */unsigned char) (unsigned short)33052);
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 1; i_13 < 15; i_13 += 2) /* same iter space */
                    {
                        var_42 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((arr_44 [i_13] [(signed char)9] [i_12] [i_12] [i_13] [(unsigned short)3]) - (11775443664448000515ULL)))));
                        arr_45 [i_13] [i_1] [i_11] [(unsigned short)2] [i_1] = ((/* implicit */unsigned int) (((_Bool)0) ? (945498680) : (2033920344)));
                        arr_46 [i_1] [i_1] = ((/* implicit */signed char) var_15);
                    }
                    for (unsigned char i_14 = 1; i_14 < 15; i_14 += 2) /* same iter space */
                    {
                        var_43 ^= ((/* implicit */int) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_11])))));
                        var_44 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 3702763430U)) ? (((/* implicit */int) arr_19 [i_14] [i_3] [i_11] [i_12] [i_12] [i_11])) : (arr_20 [i_1] [i_3] [4LL] [i_12] [i_3])))));
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_8 [i_1]))));
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3702763426U)) ? (arr_32 [i_14 - 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))))))));
                        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) (unsigned char)24))));
                    }
                }
                for (signed char i_15 = 4; i_15 < 15; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)10069))));
                        arr_54 [i_15] [i_1] [i_11] = ((/* implicit */_Bool) arr_48 [i_15 - 4] [i_3] [i_11]);
                    }
                    var_49 = ((/* implicit */int) ((((var_7) << (((arr_17 [i_1] [i_3] [i_15] [i_15]) - (1302497977U))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-5424)) > (-1397101272)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
                    {
                        arr_57 [i_1] [i_11] [i_17] [i_15] [i_3] [10U] &= ((/* implicit */short) ((((/* implicit */_Bool) 415773210U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (2228726958U)));
                        var_50 = ((/* implicit */long long int) ((int) arr_22 [i_15 - 2] [i_15 - 4] [i_15 - 3] [i_15 - 2]));
                        var_51 += ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_15] [i_17])))))) : (((arr_18 [i_1] [i_1] [i_1] [9]) | (arr_32 [i_15] [i_15] [i_15] [i_15 + 1] [2ULL])))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned short) var_0);
                        var_53 = ((((2228726958U) < (((/* implicit */unsigned int) 945498654)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) arr_50 [i_15 - 4] [i_15 - 4] [i_1] [i_15 - 1] [i_15 - 3])));
                    }
                    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
                    {
                        arr_64 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 415773210U))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_1] [i_3])) : (arr_24 [i_11]))) : (((/* implicit */int) var_10))));
                        var_54 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                        var_55 = ((/* implicit */int) ((unsigned char) arr_55 [i_1] [i_3] [i_11] [i_11] [i_1] [i_19] [i_19]));
                        var_56 = ((/* implicit */unsigned short) ((int) 415773220U));
                        var_57 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_56 [i_1] [i_3] [(unsigned short)10] [i_15] [i_19] [i_19]))));
                    }
                    var_58 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_47 [i_15 - 4] [(unsigned short)2] [i_15 - 1] [i_15 - 2] [i_15]))));
                }
                for (int i_20 = 1; i_20 < 14; i_20 += 4) 
                {
                    var_59 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_44 [i_20 + 1] [i_20 + 2] [5U] [i_20 + 2] [i_20 + 2] [i_20]))));
                    var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 415773210U)) ? (2145132042U) : (((((/* implicit */_Bool) -945498660)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) : (592203885U)))));
                }
            }
            var_61 = ((/* implicit */int) ((long long int) arr_51 [i_1] [i_1] [i_1]));
            var_62 = ((/* implicit */unsigned int) arr_53 [i_1] [i_3]);
            var_63 = ((/* implicit */unsigned char) ((arr_26 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3]) - (((/* implicit */unsigned int) var_11))));
        }
        arr_68 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_61 [i_1]))));
    }
}
