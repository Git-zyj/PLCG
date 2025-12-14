/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191776
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
    var_18 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (var_17)))) ? (max((((/* implicit */long long int) var_8)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [(short)0]) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((arr_2 [(unsigned char)10]) < (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_0]))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                    {
                        var_20 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) - (((/* implicit */int) ((signed char) arr_10 [i_2] [i_2] [i_3])))))) ? ((((-(0ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 15152104227567317784ULL)) && (((/* implicit */_Bool) (unsigned short)14)))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_2))))));
                        var_21 = ((/* implicit */unsigned char) arr_2 [i_0]);
                        var_22 = (unsigned char)255;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) >= (arr_10 [i_0] [i_1] [i_0])));
                        arr_18 [(short)0] [i_1] [(short)0] [i_0] = ((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((int) arr_19 [i_1] [i_2] [i_5]))) : (4503599627370494LL)))) ? (((((/* implicit */int) arr_15 [i_2 - 1] [i_1] [i_2 - 1] [i_0] [i_6 + 2] [17U])) << ((((-(arr_20 [i_0] [i_0] [i_0]))) + (1100896022))))) : (((((/* implicit */_Bool) ((var_1) & (var_0)))) ? (((/* implicit */int) ((15152104227567317769ULL) >= (((/* implicit */unsigned long long int) 2))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)26922)), (var_13))))))));
                                var_24 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) (short)511)))), ((!(arr_23 [i_0] [i_2] [i_2] [(_Bool)1] [i_2]))))))) > (max((max((((/* implicit */unsigned int) 10)), (var_14))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) -7)) > (var_14))))))));
                                arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_6] = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))) >> (((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_0]))) ? (((((var_8) + (2147483647))) >> (((((/* implicit */int) (unsigned char)246)) - (218))))) : ((-(((/* implicit */int) (unsigned char)3)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_0))));
        var_26 = var_16;
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_27 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned char) var_3)), ((unsigned char)243))), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) > (223158311U)))))))) + (((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (arr_3 [i_7])))) : (arr_1 [2])))));
        arr_28 [i_7] [8LL] = ((/* implicit */unsigned short) var_10);
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((unsigned char) 16776960))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)16] [(unsigned short)16]))) : (arr_19 [i_7] [i_7] [i_7]))))) >> (((max((((/* implicit */unsigned long long int) (-(var_1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (arr_19 [i_7] [i_7] [i_7]))))) - (3949453341180140344ULL))))))));
        /* LoopSeq 2 */
        for (signed char i_8 = 4; i_8 < 14; i_8 += 1) 
        {
            arr_31 [i_7] [i_7] [i_8] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) + (430676463U))) << (((((/* implicit */int) var_10)) - (4135)))));
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                var_29 = ((/* implicit */short) (+(4071808963U)));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((((((long long int) (short)8128)) < (((/* implicit */long long int) arr_35 [i_8] [i_9] [i_10] [i_7])))), (var_5)));
                            var_31 = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) var_15))))))));
                            var_32 -= ((/* implicit */unsigned int) max((max((var_10), (((/* implicit */short) arr_13 [8U] [i_8] [i_8] [i_8])))), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((/* implicit */int) var_12))))))))));
                        }
                    } 
                } 
            }
            for (long long int i_12 = 1; i_12 < 13; i_12 += 4) 
            {
                arr_42 [i_12] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_16))))), (((unsigned long long int) ((var_8) | (((/* implicit */int) var_12)))))));
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) max((((/* implicit */long long int) var_9)), ((-(arr_34 [(unsigned char)8] [i_8] [i_8] [i_8] [i_8] [i_8 + 1]))))))));
                var_34 = ((/* implicit */short) (-(((/* implicit */int) max((var_15), (var_16))))));
            }
            var_35 ^= max((((unsigned int) arr_12 [i_8] [i_8] [i_8 - 2])), (((/* implicit */unsigned int) arr_0 [i_7] [i_8])));
        }
        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            arr_45 [i_7] [i_7] = ((/* implicit */unsigned int) max((((_Bool) arr_25 [i_7] [i_7])), (((var_8) != (((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned char)243))))))));
            arr_46 [i_7] [i_7] = ((/* implicit */signed char) var_12);
            var_36 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_17)) ? (arr_38 [i_7] [(unsigned short)11] [(unsigned short)5]) : (((/* implicit */unsigned long long int) var_1)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_8)) < (var_1))))))) ? (((((/* implicit */_Bool) 510062838U)) ? (1240952337U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7902))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12)))));
            /* LoopSeq 4 */
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                arr_49 [i_7] [i_7] [i_14] [i_7] = ((/* implicit */short) var_3);
                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_48 [i_7] [(_Bool)1] [i_13] [i_7])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_7] [i_7] [i_7])))))) % (arr_10 [i_14] [i_13] [i_13]))))));
            }
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                arr_52 [i_7] [(unsigned short)12] [i_15] |= ((/* implicit */int) arr_35 [i_7] [i_13] [i_13] [(_Bool)1]);
                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-22879)) > (((/* implicit */int) arr_15 [i_7] [i_7] [i_13] [i_13] [i_13] [i_7]))));
                arr_53 [i_7] [i_13] [i_7] = ((/* implicit */short) ((signed char) (unsigned short)33507));
            }
            for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                arr_56 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_7] [i_16] [i_16] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3725106579955734161ULL)))))) : (arr_50 [i_7])))) || (((/* implicit */_Bool) var_16))));
                var_39 = ((/* implicit */unsigned int) (short)255);
            }
            for (unsigned short i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                arr_61 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > ((-(((/* implicit */int) var_15)))))))) == (2097151ULL)));
                arr_62 [10U] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_13] [i_13] [i_13])) ? (arr_3 [i_7]) : (((/* implicit */unsigned int) arr_26 [i_17])))))));
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    for (unsigned int i_19 = 0; i_19 < 17; i_19 += 3) 
                    {
                        {
                            arr_71 [i_7] [i_7] [i_17] [(unsigned short)16] [i_18] [i_19] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)192)) ? (arr_10 [i_7] [i_7] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7] [i_7]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned int) (!(var_7)))), (var_9)))));
                            arr_72 [i_7] [i_7] [i_13] [i_7] [i_7] [i_18] [i_7] = ((/* implicit */unsigned long long int) arr_70 [i_7]);
                            arr_73 [i_7] [i_7] [i_17] [i_7] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) arr_64 [i_7] [i_13]))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_50 [i_7]) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) max((arr_65 [i_7] [(_Bool)1] [i_7]), (var_8))))));
                        }
                    } 
                } 
            }
            var_40 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 163417644)) ? (-2) : (((/* implicit */int) (unsigned char)245))));
        }
    }
    var_41 = ((/* implicit */int) var_9);
    var_42 -= ((/* implicit */unsigned int) ((short) max((((((/* implicit */_Bool) (unsigned char)158)) ? (var_11) : (((/* implicit */int) var_15)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17533))))))));
}
