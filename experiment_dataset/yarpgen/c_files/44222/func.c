/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44222
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_1))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) var_9);
                            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                            arr_13 [i_0] [i_2] [13] [i_4] = ((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [(_Bool)1] [i_3] [i_0]) + (arr_9 [i_0] [(unsigned char)20] [4U] [i_3] [i_2])));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1)))))));
            var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [i_5]))));
            /* LoopNest 3 */
            for (short i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                            var_20 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_6] [i_0] [i_8] [i_8]);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_9 = 1; i_9 < 24; i_9 += 2) 
        {
            arr_30 [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) (unsigned short)30476);
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((unsigned int) var_7)) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
        }
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            arr_34 [i_0] = ((/* implicit */_Bool) (unsigned short)33405);
            var_22 = ((/* implicit */unsigned long long int) (unsigned char)57);
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)35052))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [24U] [i_10] [(unsigned char)18]))))))))));
            arr_35 [i_0] [i_10] = ((/* implicit */unsigned int) ((arr_5 [i_0] [i_0] [i_0]) >= (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10]))));
        }
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    {
                        var_24 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) var_6)) + (13421))))))));
                        var_25 = ((/* implicit */long long int) arr_37 [i_0] [i_11]);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        var_26 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_14] [i_14] [2U] [i_14] [i_14] [i_14]))) >= (arr_23 [i_14] [i_14] [i_14] [i_14]))))));
        var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_7)) * (((/* implicit */int) var_8))))))));
        var_28 = ((/* implicit */unsigned short) max((((_Bool) var_9)), (((((/* implicit */int) var_9)) == (((/* implicit */int) var_4))))));
        var_29 *= ((/* implicit */_Bool) max((((/* implicit */int) min((arr_6 [i_14] [i_14] [i_14]), (arr_6 [i_14] [i_14] [i_14])))), (var_1)));
        arr_49 [i_14] [i_14] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), (var_6))));
    }
    var_30 -= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
    {
        for (short i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            {
                                arr_64 [i_15] [i_16] [i_17] [i_15] [(unsigned short)2] [i_15] [(_Bool)1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_56 [i_15] [i_19])) ? (((/* implicit */int) arr_56 [i_15] [i_16])) : (((/* implicit */int) arr_56 [i_15] [(signed char)8])))), (((/* implicit */int) min((((/* implicit */short) arr_56 [i_15] [i_18])), ((short)23801))))));
                                arr_65 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) ((unsigned short) arr_18 [i_15] [i_16] [i_18]))))), (((/* implicit */int) ((unsigned char) max((arr_8 [i_15] [i_15] [i_17] [i_15] [i_15] [i_15]), (((/* implicit */unsigned char) arr_52 [i_15]))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_12)))) || (((/* implicit */_Bool) min((var_6), (((/* implicit */short) (unsigned char)154)))))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_16] [i_16] [i_15])) || (var_4))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        arr_68 [i_20] [(short)11] [i_17] [i_15] [i_16] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_11)))) / (((/* implicit */int) min((max((var_11), (var_6))), (((/* implicit */short) ((unsigned char) -9223372036854775794LL))))))));
                        arr_69 [i_15] [4] [i_17] [i_20] |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_15] [i_17] [i_16] [i_17] [i_20])) >= (((/* implicit */int) (unsigned char)154))))) | (((/* implicit */int) max((arr_6 [i_15] [i_17] [i_20]), (((/* implicit */short) arr_0 [i_17]))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 0; i_21 < 13; i_21 += 3) 
                        {
                            var_32 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_24 [i_16] [i_16] [i_17] [i_16] [i_16]) ? (arr_5 [i_15] [i_17] [i_20]) : (((/* implicit */int) var_8)))))));
                            var_33 = ((/* implicit */short) (((((~(((/* implicit */int) arr_60 [i_15] [i_15] [(_Bool)1] [i_17] [1U] [i_17])))) % ((-(((/* implicit */int) var_11)))))) & (((/* implicit */int) var_13))));
                            var_34 -= ((/* implicit */short) arr_48 [i_20]);
                        }
                        /* vectorizable */
                        for (unsigned short i_22 = 2; i_22 < 9; i_22 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_1)) * (arr_10 [i_15] [i_15] [i_20] [i_20])))) ? (((/* implicit */int) (unsigned char)0)) : ((((_Bool)0) ? (((/* implicit */int) arr_43 [i_15] [i_16] [i_16] [i_20] [i_22])) : (((/* implicit */int) arr_63 [11U] [11U] [i_15] [i_20] [11U] [i_20] [i_20]))))));
                            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))))));
                        }
                        var_37 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35042))) >= (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 13; i_23 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_24 = 0; i_24 < 13; i_24 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned short) var_1);
                            arr_82 [5LL] [i_16] [i_17] [i_15] [i_24] = ((((((/* implicit */_Bool) (unsigned short)30487)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)232)))) <= (((/* implicit */int) var_13)));
                            var_39 = ((/* implicit */unsigned char) ((unsigned long long int) arr_16 [i_15] [i_15]));
                        }
                        for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((unsigned short) arr_57 [i_15] [i_25] [i_23])))))))));
                            var_41 = ((/* implicit */unsigned short) var_9);
                        }
                        arr_86 [i_15] [i_15] [i_17] = ((/* implicit */_Bool) (unsigned char)251);
                        var_42 = ((/* implicit */unsigned char) max((((unsigned short) arr_24 [i_15] [i_16] [i_15] [i_23] [i_23])), (((/* implicit */unsigned short) ((short) arr_16 [i_17] [i_15])))));
                    }
                    var_43 &= ((/* implicit */unsigned int) ((unsigned char) var_4));
                }
                arr_87 [i_15] [i_16] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_75 [i_15] [i_15] [i_15] [i_15] [i_15] [i_16] [i_16]), (arr_47 [(short)15] [i_16]))))))) ? (((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_83 [i_15] [i_15] [i_15] [i_15])))) << (((((/* implicit */int) var_0)) - (69))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_15] [(short)21])) * (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) arr_58 [i_16] [i_16] [i_15] [i_16])) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_3)))))))));
                var_44 = ((/* implicit */unsigned char) min((var_44), (((unsigned char) min((((/* implicit */short) arr_8 [i_16] [i_16] [i_15] [i_15] [(_Bool)1] [i_15])), (var_7))))));
                var_45 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_7))) * ((-(((/* implicit */int) var_9))))))), (((arr_45 [i_16]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_15] [i_16] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2899358689U))))))));
                var_46 = ((((arr_39 [(_Bool)1]) ? (((/* implicit */int) arr_39 [22U])) : (((/* implicit */int) arr_52 [8ULL])))) * (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_8)))));
            }
        } 
    } 
}
