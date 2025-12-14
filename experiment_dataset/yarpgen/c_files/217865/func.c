/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217865
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))) : (var_10))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) | ((~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0)))))))));
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((-9223372036854775806LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-558))))))) | (var_0))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                arr_6 [i_2] [i_1] [i_0] = (((-(((/* implicit */int) var_1)))) > (((/* implicit */int) (unsigned short)65527)));
                var_16 |= var_9;
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_3] [i_2 - 1] [i_3])) ? (((/* implicit */int) arr_5 [i_3] [i_1] [i_2])) : (((((/* implicit */_Bool) arr_3 [i_2] [(unsigned char)8] [i_2])) ? (((/* implicit */int) arr_1 [11ULL])) : (arr_2 [8LL])))));
                    var_18 = ((/* implicit */unsigned char) -480291493277388781LL);
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_7 [i_1] [i_0] [i_2] [i_2 + 2]);
                }
                for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_19 -= ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_4 [i_2] [i_2])))));
                        arr_14 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2523605094U)) % (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)9] [i_1] [5ULL] [i_1])))))));
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_20 ^= ((/* implicit */unsigned char) var_8);
                        var_21 = ((/* implicit */int) ((((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)55117)))))));
                        var_22 *= ((/* implicit */signed char) ((arr_7 [i_6] [i_2 + 2] [i_4 + 1] [(_Bool)1]) ? (((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_4 + 1] [9ULL]))));
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_23 |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)8] [i_2])))) ? (((/* implicit */int) arr_17 [i_4] [(_Bool)1] [i_2] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_1 [i_7]))));
                        arr_20 [4] [i_1] [i_2] = ((/* implicit */unsigned char) ((((unsigned long long int) (_Bool)1)) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [0LL] [(_Bool)1] [i_7])))))));
                        arr_21 [i_0] [i_1] [6] [10U] [i_4] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) + (var_2)))) || (((/* implicit */_Bool) var_3)));
                        var_24 *= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [(_Bool)0])) ? (((/* implicit */unsigned long long int) -480291493277388790LL)) : (var_0))));
                    }
                    var_25 = ((/* implicit */unsigned char) arr_11 [8U] [3ULL] [(_Bool)1] [i_4]);
                }
            }
            arr_22 [i_1] = ((/* implicit */int) ((_Bool) ((short) var_11)));
        }
        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
        var_27 *= ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)9] [i_0] [(unsigned char)4]))))));
        var_28 = ((/* implicit */signed char) ((var_13) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
    }
    /* vectorizable */
    for (signed char i_8 = 1; i_8 < 17; i_8 += 2) 
    {
        var_29 = ((/* implicit */unsigned long long int) (unsigned short)7);
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) arr_24 [i_8] [(unsigned short)2])) ? (var_10) : (((/* implicit */unsigned long long int) 480291493277388780LL))))));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_23 [i_8 - 1]))));
    }
    for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 4; i_10 < 17; i_10 += 2) 
        {
            for (unsigned char i_11 = 3; i_11 < 19; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                arr_39 [i_13] [12LL] [i_12] [1] [i_11] [i_10] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (signed char)32)))));
                                var_32 -= ((((/* implicit */_Bool) (((+(arr_27 [i_9]))) | (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9] [(signed char)17] [15LL] [i_10 - 4] [2] [i_11 - 2] [18LL])))))) ? (((/* implicit */int) arr_30 [(signed char)11] [(signed char)8] [(unsigned char)4])) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_32 [i_11 - 1] [(_Bool)1] [i_11 - 2] [(short)0] [i_11 - 1] [5ULL]))))));
                                arr_40 [(_Bool)1] [11LL] = ((/* implicit */unsigned char) var_8);
                                arr_41 [11U] [i_12] [i_10] [(unsigned short)2] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [(short)3] [i_10] [i_11])) ? (((/* implicit */int) arr_30 [(unsigned short)0] [(unsigned short)11] [17])) : (((/* implicit */int) (unsigned short)65528))))) : (min((((/* implicit */unsigned long long int) arr_32 [8LL] [(unsigned short)2] [(unsigned char)11] [7LL] [(_Bool)0] [0LL])), (arr_29 [6LL])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_48 [(unsigned char)2] [(unsigned char)3] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_45 [i_14] [i_11 - 3] [i_11] [2] [i_14])), (min((((/* implicit */long long int) arr_43 [(short)14] [(signed char)5] [i_11] [i_10] [5])), (arr_44 [i_10] [(unsigned char)17] [i_14] [i_15])))))), (max((arr_29 [4U]), (((/* implicit */unsigned long long int) max((arr_32 [i_9] [(_Bool)1] [i_11] [3] [1LL] [11LL]), (((/* implicit */unsigned short) arr_47 [(unsigned char)3] [i_14] [i_14] [i_11] [i_14] [(signed char)9])))))))));
                                var_33 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [(signed char)13] [i_10])) ? (((/* implicit */int) var_8)) : (arr_43 [i_9] [i_10] [(short)19] [(signed char)9] [(unsigned short)17])))), ((-(arr_38 [(signed char)19] [i_10] [i_11] [10ULL] [i_15] [i_10] [0LL])))))));
                                var_34 *= ((/* implicit */signed char) ((min((arr_29 [i_9]), (arr_29 [i_14 + 3]))) | (((((/* implicit */_Bool) var_4)) ? (arr_29 [i_10]) : (arr_29 [i_9])))));
                                var_35 = ((/* implicit */signed char) arr_38 [(_Bool)1] [i_9] [i_10] [i_11] [i_14] [18ULL] [(unsigned char)12]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_36 = ((/* implicit */signed char) max((max((min((((/* implicit */unsigned long long int) arr_42 [i_9])), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_9] [(unsigned char)2] [(unsigned char)4] [i_9] [i_9])) || (((/* implicit */_Bool) var_0))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [(unsigned char)0] [i_9] [(unsigned char)6] [(unsigned char)12] [i_9] [(unsigned char)13] [(signed char)16])))))) - (((unsigned long long int) arr_43 [1U] [(signed char)0] [(unsigned char)15] [i_9] [(_Bool)1]))))));
        arr_49 [19LL] = ((/* implicit */signed char) max((max((var_12), (((/* implicit */unsigned long long int) (-(-480291493277388763LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_9]))))) ? (((((/* implicit */int) arr_37 [(short)4] [(short)4] [(unsigned short)13] [(_Bool)1] [i_9] [7U] [i_9])) << (((((((/* implicit */int) var_5)) + (28921))) - (8))))) : (((((/* implicit */int) var_6)) << (((/* implicit */int) arr_47 [(unsigned char)0] [i_9] [(_Bool)1] [(signed char)6] [i_9] [6ULL])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            for (short i_17 = 1; i_17 < 17; i_17 += 2) 
            {
                {
                    arr_56 [(short)9] [i_17] [i_17] = (~(((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) % (((arr_44 [i_17] [i_16] [(unsigned short)3] [i_9]) % (arr_36 [(short)6] [i_16] [6LL] [(short)2] [i_17] [i_17] [(_Bool)1]))))));
                    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (~(((((/* implicit */int) arr_37 [i_17 + 3] [i_17] [3ULL] [3LL] [i_17] [i_17] [i_17])) | (((/* implicit */int) arr_37 [i_17 + 3] [4] [19ULL] [i_17] [i_17] [7LL] [0U])))))))));
                }
            } 
        } 
    }
    var_38 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_39 = ((/* implicit */unsigned int) var_9);
}
