/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246146
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
    var_11 ^= ((short) ((((/* implicit */_Bool) var_1)) ? (max((3317960911039169601ULL), (13895724279404190672ULL))) : (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (((unsigned int) ((12057313190332365229ULL) != (10733538978858824031ULL))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [(short)8] [i_3] = ((/* implicit */short) ((int) arr_5 [i_0] [i_0 - 1]));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            var_13 &= ((arr_3 [i_0 + 1]) | (var_4));
                            arr_13 [i_0 - 3] [i_4] = ((/* implicit */long long int) ((int) var_2));
                            var_14 = (+(((/* implicit */int) arr_2 [i_0 + 4])));
                        }
                        for (unsigned int i_5 = 4; i_5 < 17; i_5 += 2) 
                        {
                            var_15 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_2 + 1] [i_0]))));
                            arr_17 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_3] [i_3] [i_2 + 4] = ((/* implicit */long long int) ((arr_0 [i_5 - 4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 268419072))))));
                            arr_18 [i_0] [i_0] [i_0 + 1] [1] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) var_3);
                        }
                        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [(short)3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1])))))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((var_3) | (var_3))))));
                            arr_22 [i_6] [i_6] [i_2] [(unsigned char)13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 262112))));
                            var_17 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_3)) ^ (arr_9 [9ULL] [i_6] [i_2 - 4] [i_2 - 2] [i_2 - 3])));
                        }
                        arr_23 [i_2 - 3] [i_2 + 1] [i_2 - 3] &= ((/* implicit */unsigned int) 65504);
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)-10829)))))))));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_19 += (unsigned char)171;
                            arr_26 [i_7] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) ((unsigned char) arr_14 [i_3] [i_0] [i_1] [i_0])));
                            var_20 *= ((/* implicit */unsigned long long int) arr_25 [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 - 3] [i_2 - 2] [i_2]);
                            arr_27 [i_0] [i_3] [i_0] = ((/* implicit */short) (-(((unsigned int) (short)10828))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */int) ((var_6) & (((/* implicit */long long int) var_2))));
                            arr_31 [i_0] [i_1] [i_1] [i_3] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((1134773681922112853ULL) & (((/* implicit */unsigned long long int) 262132))))) ? (((/* implicit */unsigned long long int) (-(268419072)))) : (arr_0 [i_0 - 3])));
                            var_22 |= ((/* implicit */unsigned char) var_8);
                            var_23 = arr_3 [i_8];
                        }
                        for (short i_9 = 2; i_9 < 17; i_9 += 3) 
                        {
                            arr_34 [i_2 + 3] [i_9] [i_2 + 3] [i_3] [i_9 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_0 - 3] [i_1] [i_2] [i_3] [i_3] [i_9]))));
                            arr_35 [i_0] [i_1] [i_1] [i_2 + 4] [i_9] [i_9] [i_9] = ((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_3]);
                            arr_36 [i_9] [i_9] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) / (12265230366803772061ULL)))) ? ((~(((/* implicit */int) (short)-3563)))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_0 + 4] [i_1] [i_2 - 1] [i_1])) : (var_0)))));
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_24 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) 262130)) ? (((/* implicit */unsigned long long int) 4148300915U)) : (12055918155187705427ULL)))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min(((~(arr_32 [i_10]))), (((/* implicit */unsigned long long int) ((short) 4148300915U))))))));
                        arr_41 [i_10] [i_2 - 4] [i_10] [i_10] [i_1] [i_0] = (~((~(((/* implicit */int) arr_24 [i_1] [i_0 - 4] [i_0] [i_0] [i_0])))));
                        arr_42 [i_10] [i_1] [i_1] [i_10] = ((/* implicit */long long int) ((unsigned long long int) arr_29 [i_2 - 1] [i_1] [i_2]));
                    }
                    for (int i_11 = 1; i_11 < 14; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */int) (-(var_6)));
                        arr_45 [i_1] [i_2] [i_11] = ((/* implicit */int) arr_2 [i_0 + 4]);
                        var_27 = ((/* implicit */unsigned long long int) ((int) arr_6 [i_1] [i_1] [i_1] [9]));
                        var_28 = ((/* implicit */short) var_5);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_12 = 2; i_12 < 16; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 2; i_13 < 15; i_13 += 1) 
                        {
                            arr_53 [(short)0] [(unsigned char)6] [i_2] [i_0] [i_0] |= ((/* implicit */int) ((unsigned int) var_2));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) 8562583842260174022ULL))));
                            var_30 ^= ((unsigned int) 6026452424609892369ULL);
                            var_31 = ((/* implicit */long long int) 146666390U);
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (-(var_6))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_14 = 1; i_14 < 15; i_14 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_12]))));
                            arr_58 [i_0 - 3] [i_0] [i_0 - 4] [i_0] [i_0] [13ULL] = ((/* implicit */short) (+(((/* implicit */int) ((8087419001111114743ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13689))))))));
                        }
                        for (int i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            arr_61 [(unsigned char)15] [i_1] [i_1] [(short)11] [i_12 + 1] [(unsigned char)15] [i_15] = ((/* implicit */unsigned char) var_0);
                            var_34 -= ((/* implicit */unsigned long long int) (-(var_7)));
                        }
                        var_35 -= ((/* implicit */short) var_5);
                        var_36 -= ((/* implicit */short) (+(((((/* implicit */_Bool) 2199023255551LL)) ? (((/* implicit */unsigned long long int) var_2)) : (var_4)))));
                    }
                    for (short i_16 = 2; i_16 < 16; i_16 += 4) /* same iter space */
                    {
                        arr_64 [i_0 - 1] [i_1] [i_1] [i_16 + 2] = ((((/* implicit */unsigned long long int) (-(var_2)))) | (min((min((arr_0 [i_0]), (arr_0 [3LL]))), (arr_15 [i_0] [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))));
                        var_37 = ((/* implicit */short) (+(min((arr_32 [i_2 - 3]), (arr_32 [i_2 + 3])))));
                        arr_65 [i_16] &= ((((((/* implicit */int) arr_19 [i_16 - 1] [i_2 - 3] [i_0 - 1] [i_16 + 2] [8LL])) == (((/* implicit */int) arr_19 [i_16 - 2] [i_2 - 2] [i_0 - 2] [i_0 - 2] [i_16 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_16 - 2] [i_2 + 3] [i_0 + 2] [i_16 - 2] [i_16]))))) : ((~(((/* implicit */int) (short)25770)))));
                    }
                    /* vectorizable */
                    for (int i_17 = 4; i_17 < 15; i_17 += 1) 
                    {
                        arr_69 [i_0] [i_0] [i_2 - 4] [i_0] = ((/* implicit */unsigned int) ((arr_57 [i_17 + 2] [i_17 - 2] [9U] [i_2 + 3] [i_2 + 4] [i_0 - 3]) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0 + 1] [(short)8])))))));
                        arr_70 [i_0] [i_0] [i_0] [i_1] [(short)6] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_2] [i_0] [i_2])) ? (arr_68 [i_0] [i_2 - 2] [i_1] [i_0] [i_0 - 2]) : (-916415994))) / ((+(262112)))));
                    }
                    /* LoopSeq 2 */
                    for (short i_18 = 2; i_18 < 17; i_18 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_0] [3] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 - 1]))))) == ((-(((/* implicit */int) arr_7 [i_2 + 3] [i_18 + 1]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_19 = 2; i_19 < 16; i_19 += 4) 
                        {
                            var_39 = ((/* implicit */unsigned int) ((8942753184084250806LL) + (((/* implicit */long long int) arr_20 [i_19] [i_19 - 2] [i_2 + 2] [2ULL] [i_0]))));
                            arr_77 [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_32 [13ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0 + 3] [11LL] [i_19 - 2]))) : (arr_9 [i_19 + 2] [i_2] [i_2] [i_1] [i_0 - 4])))));
                        }
                        for (unsigned int i_20 = 3; i_20 < 15; i_20 += 1) 
                        {
                            arr_81 [i_0 + 2] [i_18] [i_0] [i_18 + 1] [i_20 + 1] [i_20] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_30 [1U] [i_18 + 1] [1U] [i_18 + 1] [1U] [i_18 + 1]));
                            arr_82 [i_20] [i_18 - 1] [i_2] [i_1] [i_0] [i_0] &= ((/* implicit */short) (~((-(((/* implicit */int) ((((/* implicit */int) arr_25 [8] [i_1] [i_2] [i_1] [i_1] [i_20])) == (arr_78 [i_0 + 3] [9] [i_0 - 4] [5] [i_0]))))))));
                            arr_83 [8ULL] [8ULL] [i_18] [i_2 + 3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_80 [i_2] [i_2 + 1] [i_2 - 4] [i_2] [i_2] [i_2 + 1] [i_2 + 1])) ? (var_5) : (((/* implicit */long long int) arr_80 [i_2] [i_2 - 2] [i_2] [i_2 - 4] [i_2 - 4] [i_2 - 3] [i_2])))) ^ (((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1))))))));
                            var_40 = ((/* implicit */unsigned char) -2042949829);
                        }
                        arr_84 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_59 [i_18] [i_18] [i_18] [(short)2] [i_18]);
                        var_41 = ((/* implicit */int) max((var_4), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (arr_73 [i_0] [i_0]) : (var_3))) | (((/* implicit */int) (short)-7179)))))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        arr_88 [i_1] [i_1] [i_2 - 4] [i_1] [(short)6] &= ((/* implicit */short) (((+(-2954884))) >= ((-(var_7)))));
                        var_42 = ((/* implicit */int) ((long long int) -29217782));
                    }
                    arr_89 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)76))));
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_1)) - ((+((~(var_4)))))));
    var_44 = ((/* implicit */unsigned long long int) max((var_7), (var_2)));
    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (~(var_8))))));
}
