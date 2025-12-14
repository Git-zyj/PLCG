/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230413
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_19 = ((unsigned char) arr_2 [i_1] [i_0]);
            arr_6 [i_1] [10ULL] &= ((/* implicit */int) ((arr_5 [i_0]) || (arr_5 [i_0])));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 1])) || ((!(((/* implicit */_Bool) arr_0 [i_2 - 2])))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_13 [i_0] [i_4] [i_4] = ((/* implicit */int) var_2);
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4 - 1])) ? (((((/* implicit */_Bool) var_14)) ? (arr_9 [i_0] [i_0] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_0] [i_4] [i_4] [i_5]))));
                    var_24 = (!(((/* implicit */_Bool) arr_11 [i_4 - 1] [i_1] [i_4] [i_5])));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_3 [i_0]))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_18 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_13)))) ? (var_11) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)65)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 2; i_7 < 20; i_7 += 3) 
                    {
                        arr_22 [i_0] [i_1] [i_4 - 1] [i_6] [i_4] [(_Bool)1] = ((/* implicit */signed char) (((+(((/* implicit */int) var_6)))) ^ (((/* implicit */int) (short)-32745))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_24 [i_0] [i_1] [i_4] [i_6] [i_6] [i_4] = ((/* implicit */signed char) ((long long int) arr_8 [i_0] [i_1] [i_4]));
                        arr_25 [i_4] [2] [i_4] [i_4] = ((/* implicit */_Bool) var_8);
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((arr_9 [i_4 - 1] [i_4 - 1] [i_6]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                        arr_28 [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32737))) : (var_16)));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                        arr_29 [i_0] [i_1] [i_4] [i_0] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_0] [i_0])) || (((/* implicit */_Bool) arr_16 [i_4 - 1] [i_1] [i_1]))));
                    }
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        arr_32 [i_0] [i_0] [i_4] [i_4] = (+(((/* implicit */int) (signed char)0)));
                        var_28 = ((/* implicit */int) ((arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1]) | (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                        arr_33 [i_4] [(short)20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)20622)) ? (((((/* implicit */_Bool) 3324409524U)) ? (arr_8 [i_0] [(signed char)11] [i_4]) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_26 [i_0] [i_0] [(signed char)6] [i_4] [i_6] [i_0] [i_9]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        arr_36 [i_0] [i_1] [i_4] [i_0] [i_6] [i_10] [i_10] &= ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_6] [i_4 - 1]))));
                        arr_37 [i_0] [i_1] [i_4] [i_6] [i_10] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4] [i_0] [i_0])) ? (arr_16 [i_6] [i_1] [i_1]) : (arr_16 [i_1] [i_4] [i_10])));
                        arr_38 [(_Bool)1] [i_6] [i_4] [i_1] [7U] = ((((/* implicit */_Bool) (signed char)-29)) || (((/* implicit */_Bool) 30822155U)));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((arr_31 [i_4 - 1] [i_4 - 1] [4]) / (((/* implicit */int) var_8))));
                        var_30 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_41 [i_1] [(unsigned char)2] [i_1] [i_4 - 1] [i_4 - 1])) : (((((/* implicit */int) arr_30 [i_0] [i_0] [i_4] [i_4] [i_11])) * (((/* implicit */int) arr_12 [i_11])))));
                        var_31 = ((/* implicit */int) var_15);
                    }
                    for (signed char i_12 = 2; i_12 < 20; i_12 += 4) 
                    {
                        arr_45 [i_1] [i_1] [i_4] [i_6] [i_0] &= ((/* implicit */short) (+(((/* implicit */int) var_10))));
                        var_32 = ((/* implicit */unsigned int) (_Bool)0);
                    }
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        arr_48 [i_1] [15] [i_4] = ((/* implicit */long long int) (signed char)101);
                        var_33 = ((/* implicit */signed char) arr_15 [i_4] [i_4]);
                        var_34 = ((/* implicit */int) min((var_34), (((81029158) >> ((-(((/* implicit */int) (signed char)-29))))))));
                    }
                    var_35 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1] [i_0])) << (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    arr_51 [i_0] [i_4] [i_4 - 1] [0U] = ((/* implicit */long long int) var_1);
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14221765649560562684ULL)) ? (-7640703288879033188LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))))))));
                }
            }
            /* LoopSeq 1 */
            for (short i_15 = 4; i_15 < 19; i_15 += 1) 
            {
                arr_54 [i_15 - 4] = ((/* implicit */unsigned char) (+(739420977)));
                /* LoopSeq 1 */
                for (int i_16 = 1; i_16 < 21; i_16 += 3) 
                {
                    arr_58 [i_0] [(unsigned char)0] [i_15] [i_16] = ((/* implicit */short) var_16);
                    var_37 &= ((/* implicit */long long int) ((arr_40 [i_0] [i_1] [i_15 - 1] [i_15] [i_16]) | (arr_40 [i_0] [i_0] [i_15 + 2] [i_16 + 1] [(signed char)4])));
                    arr_59 [i_0] [i_0] [i_15] [i_16] [i_16] = ((/* implicit */int) ((unsigned char) arr_41 [i_0] [i_0] [i_1] [i_15] [i_0]));
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) var_10))));
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)26044)) | (((/* implicit */int) arr_12 [i_16 + 1])))))));
                }
            }
        }
        /* LoopSeq 3 */
        for (int i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            arr_64 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_0] [i_17] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_17]))) : (631826941U)));
            arr_65 [(unsigned char)0] = ((/* implicit */unsigned int) ((arr_10 [i_0]) / (arr_10 [i_0])));
            /* LoopSeq 1 */
            for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    for (unsigned int i_20 = 1; i_20 < 21; i_20 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */short) arr_26 [i_0] [i_17] [i_18] [(signed char)18] [i_20] [7LL] [i_19]);
                            arr_73 [i_20] = ((/* implicit */unsigned int) ((arr_19 [i_20 + 1]) < (arr_8 [i_20 + 1] [i_20 - 1] [i_20 - 1])));
                            var_41 = ((((/* implicit */_Bool) arr_70 [2] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20])) ? (((/* implicit */int) arr_52 [i_20 + 1] [i_20 - 1] [i_20 + 1] [i_20 - 1])) : (((((/* implicit */_Bool) arr_50 [i_0] [i_19] [i_20] [i_20] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)25056)))));
                            var_42 = ((/* implicit */unsigned char) (!((_Bool)1)));
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [4] [i_0])) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_0] [i_18] [i_17] [i_17] [i_0])) ? (((/* implicit */int) arr_62 [i_0] [i_0] [i_18])) : (((/* implicit */int) arr_5 [i_17])))))));
            }
        }
        for (long long int i_21 = 0; i_21 < 22; i_21 += 2) /* same iter space */
        {
            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */int) arr_39 [i_21] [i_0] [i_0] [i_21])) | (((/* implicit */int) ((_Bool) var_1))))))));
            var_45 = ((/* implicit */signed char) (unsigned short)43532);
            arr_77 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_21] [i_21])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (arr_27 [i_0] [i_21] [i_21] [i_0] [i_21] [i_0]) : (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [0] [i_21] [i_21])) ? (arr_27 [i_21] [i_21] [i_0] [i_0] [i_21] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-47)))))));
        }
        for (long long int i_22 = 0; i_22 < 22; i_22 += 2) /* same iter space */
        {
            var_46 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 264241152))));
            arr_82 [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_1 [i_22] [i_22])));
            arr_83 [i_22] &= ((/* implicit */long long int) (((((_Bool)1) && (((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0] [i_22])))) ? (var_9) : (((/* implicit */unsigned int) arr_1 [i_0] [i_22]))));
        }
        arr_84 [i_0] = ((/* implicit */unsigned short) ((int) var_0));
    }
    var_47 = ((/* implicit */int) ((unsigned int) max((((((/* implicit */int) (unsigned char)234)) / (((/* implicit */int) (short)-32745)))), ((+(((/* implicit */int) (signed char)-122)))))));
    var_48 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_8))) ? (max((((unsigned int) 1241335297)), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)52))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), ((signed char)-20))))) * (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
    var_49 = ((/* implicit */unsigned long long int) var_14);
}
