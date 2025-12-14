/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41766
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_1] [i_2 - 1] [i_0] [i_4] [i_2 - 1] = ((/* implicit */long long int) arr_7 [i_0 - 2] [1ULL] [i_2 - 1] [i_4]);
                            arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(arr_6 [i_0 - 2] [i_2] [2] [i_4])));
                            var_20 = ((/* implicit */int) (!((_Bool)1)));
                            arr_19 [i_0] [i_1] [i_2] [8U] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2 + 1] [i_2] [(unsigned short)0]))));
                        }
                        var_21 = ((/* implicit */int) arr_15 [i_0] [i_0] [(unsigned char)4] [(unsigned char)4] [i_0]);
                        var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_20 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(arr_12 [i_0] [i_1] [i_0] [i_1] [i_1])));
                    }
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | ((-9223372036854775807LL - 1LL))))));
                        arr_24 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)23982))));
                        var_24 = ((/* implicit */unsigned char) (+(arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_0 - 1])));
                        var_25 = ((/* implicit */unsigned short) ((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [(short)10])) < (arr_4 [i_1] [i_5])))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_26 = (-(arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]));
                        arr_27 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0] [9LL] [5LL] [i_6] [i_6])))) : (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) var_12)))));
                        var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-23973))));
                        var_28 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (short)23975))))));
                    }
                    for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) arr_21 [i_0] [i_1] [9U] [i_2] [i_2])) : (((/* implicit */int) (short)-23976))))) && (var_16)));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_14 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_1] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((unsigned char) arr_25 [i_0] [i_0] [i_0] [i_0] [12ULL] [i_7])))));
                    }
                    var_31 = ((/* implicit */signed char) ((_Bool) (+(arr_1 [i_0]))));
                }
            } 
        } 
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) var_1));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (signed char i_9 = 2; i_9 < 10; i_9 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_0 - 2] [i_8] [(unsigned short)11])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_34 [i_0] [i_8] [i_9 + 2] [i_0 - 2])));
                    var_33 = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_0] [0U] [i_0] [i_0])) ^ (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32767))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 3; i_10 < 10; i_10 += 2) 
                    {
                        for (signed char i_11 = 1; i_11 < 12; i_11 += 4) 
                        {
                            {
                                arr_41 [i_0] [i_8] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned char) ((long long int) arr_23 [(_Bool)1] [i_8] [i_11 - 1]));
                                var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_9 + 3] [i_9 + 1]))));
                                var_35 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_9] [i_9 + 3] [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9])) ^ (((/* implicit */int) (short)-32767))));
                                var_36 = ((/* implicit */signed char) arr_38 [i_0 - 2] [i_0] [i_0 - 2] [i_9 + 3] [i_10 + 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_42 [i_0] [i_0] = ((/* implicit */unsigned int) arr_32 [i_0 - 1] [i_0]);
    }
    var_37 = ((/* implicit */_Bool) (short)9579);
    /* LoopSeq 1 */
    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                {
                    arr_52 [i_12] [i_12] [i_12] [i_14] = min((var_6), (((/* implicit */unsigned long long int) ((arr_49 [i_13] [i_13]) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_48 [i_12])) : (((/* implicit */int) arr_44 [i_12]))))))));
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)12619))))), (((arr_51 [i_12] [i_13] [i_12] [i_14]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_18))))))) ? (max((min((((/* implicit */unsigned int) var_7)), (var_8))), (((/* implicit */unsigned int) ((signed char) arr_46 [i_12] [(signed char)8]))))) : (((/* implicit */unsigned int) max((((var_16) ? (((/* implicit */int) var_17)) : (arr_50 [i_12] [i_13] [i_13]))), (((/* implicit */int) max((arr_44 [11U]), (((/* implicit */short) arr_43 [i_12] [i_13]))))))))));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 15; i_15 += 2) 
                    {
                        for (long long int i_16 = 2; i_16 < 16; i_16 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned long long int) arr_57 [i_13]);
                                arr_60 [(unsigned short)4] = ((/* implicit */unsigned short) arr_47 [i_12] [i_13] [i_16]);
                                arr_61 [i_12] [i_13] [i_13] [i_13] [i_13] [i_16] = ((/* implicit */unsigned long long int) arr_50 [i_16 - 2] [i_13] [13ULL]);
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)123))))))));
                }
            } 
        } 
        arr_62 [i_12] = (((_Bool)0) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12])) ? (((/* implicit */int) arr_58 [i_12] [(signed char)12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_51 [i_12] [i_12] [i_12] [i_12]))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_12])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_51 [i_12] [i_12] [i_12] [(unsigned char)12])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)37378)) : (-249586839)))))));
        var_41 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((int) (short)6003))) ? (((/* implicit */long long int) (-(var_8)))) : (((((/* implicit */_Bool) arr_56 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (var_6))))));
}
