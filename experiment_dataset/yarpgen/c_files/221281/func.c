/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221281
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_1] [i_1] [i_1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_2 [i_3 + 4] [i_3 + 4]);
                        var_20 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [(unsigned short)10] [i_3 + 2] [8LL] [i_3] [i_3 + 4]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 8; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [(unsigned char)11] [(short)10] [i_4]))) ? (arr_12 [i_2] [(short)9] [i_4 - 2] [i_4] [i_4 - 2] [i_4]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((((unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_4 - 2] [i_4 + 1] [i_4 - 3])))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            arr_15 [10ULL] [i_1] [i_0] [i_4] [i_5] [i_5] = arr_1 [1ULL];
                            arr_16 [i_0] [i_1] [11] [i_0] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [11U] [4] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_4])) : (((/* implicit */int) (unsigned short)41937))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)83))))) : (((unsigned int) (_Bool)1))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((var_15), (((/* implicit */long long int) var_18))))))) : (var_15)));
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) -1)) ? (min((arr_18 [i_8] [(unsigned short)3]), (((/* implicit */int) (unsigned short)0)))) : (arr_18 [i_6] [i_7 + 1]))), (((/* implicit */int) ((short) arr_19 [i_7 + 1] [i_7]))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                        {
                            arr_27 [i_8] [(signed char)8] [(unsigned short)12] [i_8] [i_7] [(unsigned short)13] [i_8] = ((/* implicit */unsigned short) arr_22 [(unsigned short)8] [i_8]);
                            arr_28 [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) (~(max(((~(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) arr_17 [i_8]))))));
                            arr_29 [i_10] [i_8] [(unsigned short)13] [i_8] [(unsigned short)13] = ((/* implicit */short) (((-(arr_24 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]))) & (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_22 [i_8] [i_8]))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                        {
                            arr_32 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7 + 1] [i_7 + 1] [i_7] [7LL] [i_8]))) & (arr_20 [i_7 - 1] [i_9])))) || ((!(((/* implicit */_Bool) arr_30 [i_7 - 1] [i_7 - 1] [i_8] [11LL] [i_8])))));
                            arr_33 [i_8] [i_7] [i_8] [i_9] [i_11] = ((/* implicit */unsigned short) (-(((arr_17 [i_6]) ? (((/* implicit */int) arr_30 [i_8] [i_9] [i_8] [i_7 + 1] [i_8])) : (((/* implicit */int) arr_17 [i_8]))))));
                            arr_34 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_8]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (arr_18 [i_9] [14LL]) : (((/* implicit */int) arr_25 [i_6] [i_6] [i_8] [(signed char)0]))))) : ((-(arr_21 [(signed char)9] [i_8] [i_9] [i_11])))))) || (((/* implicit */_Bool) (+(-1))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            arr_37 [i_7] [1U] [i_8] [i_8] [i_12] [1U] = ((/* implicit */int) ((_Bool) arr_36 [(unsigned char)2] [i_7] [i_8] [i_8] [i_7 + 1]));
                            arr_38 [i_6] [i_6] [i_8] [i_8] [4] [i_6] [i_8] = ((/* implicit */unsigned short) ((int) arr_31 [i_6] [i_8] [i_8] [i_9] [i_6]));
                            arr_39 [i_6] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((short) ((int) (unsigned short)23598)));
                        }
                        var_27 = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_36 [(unsigned char)14] [i_8] [(unsigned char)14] [i_8] [(unsigned char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_8]))) : (arr_24 [i_6] [i_7] [(_Bool)1] [i_7]))) + (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-40)), (1366566734)))))), (((((/* implicit */_Bool) ((arr_24 [i_6] [(unsigned char)11] [(short)7] [(short)13]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)17247)))))) ? (((/* implicit */unsigned int) arr_18 [i_6] [i_7 + 1])) : ((~(arr_35 [i_6] [i_7] [i_8] [i_9] [i_9])))))));
                        arr_40 [i_6] [(_Bool)1] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_25 [i_7 - 1] [i_8] [i_9] [i_9]), (arr_25 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 + 1] [i_8])) ? (((/* implicit */int) arr_22 [i_7 + 1] [i_8])) : (((/* implicit */int) arr_22 [i_7 + 1] [i_8])))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 12; i_13 += 1) 
                    {
                        arr_44 [i_8] [9ULL] = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) arr_36 [i_6] [i_7 + 1] [i_8] [i_8] [i_13 + 4])))));
                        arr_45 [i_8] [i_13] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_21 [(signed char)1] [i_8] [(signed char)1] [i_13 + 3])) ? ((+(((/* implicit */int) arr_22 [i_8] [i_8])))) : ((+(1439761380))))));
                    }
                    for (short i_14 = 3; i_14 < 15; i_14 += 2) 
                    {
                        arr_49 [i_6] [i_6] [5LL] [i_8] [i_8] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_42 [(signed char)9] [i_14 - 1] [i_7 + 1] [i_7 + 1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7 + 1] [i_7 - 1]))))));
                        /* LoopSeq 1 */
                        for (short i_15 = 1; i_15 < 15; i_15 += 4) 
                        {
                            var_28 ^= ((/* implicit */int) min((((/* implicit */short) (unsigned char)153)), (arr_46 [i_7 - 1])));
                            arr_52 [i_6] [i_7 - 1] [(short)5] [(unsigned short)4] [i_8] = ((_Bool) ((signed char) arr_51 [i_14 + 1] [i_7] [i_8] [i_14 - 3]));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_21 [i_15 - 1] [i_8] [i_8] [i_7 + 1]), (arr_21 [i_15 - 1] [i_8] [i_8] [i_7 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_8] [i_15 - 1])) : (((/* implicit */int) ((signed char) arr_18 [8U] [0])))))) : (min((5070247872024270289LL), (((/* implicit */long long int) arr_41 [i_15] [i_15] [13LL] [12U] [i_15 + 1]))))));
                        }
                        arr_53 [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)64))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_24 [i_6] [i_14 + 1] [i_7 - 1] [i_14 - 3])) ? ((+(((/* implicit */int) arr_22 [i_6] [(unsigned short)10])))) : (-2053456674))))))));
                        arr_54 [i_6] [i_8] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_30 [i_8] [i_14 - 3] [(signed char)4] [(signed char)4] [i_8])) ? (((/* implicit */int) ((((/* implicit */unsigned int) -1)) <= (arr_48 [i_8] [i_8] [i_7] [i_8])))) : ((~(((/* implicit */int) (unsigned short)41937)))))));
                    }
                    var_31 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_23 [(unsigned short)1] [(unsigned short)1])), ((unsigned char)97)))) ? (((/* implicit */int) min((((/* implicit */short) arr_25 [(unsigned short)15] [i_7 + 1] [i_6] [i_7 + 1])), (arr_46 [i_8])))) : (((/* implicit */int) arr_26 [14ULL]))))));
                }
            } 
        } 
    } 
}
