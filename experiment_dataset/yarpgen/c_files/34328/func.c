/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34328
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_5 [i_0] &= max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) / (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((arr_3 [i_0]), ((signed char)-54)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [(unsigned short)1] &= ((/* implicit */unsigned short) (~((~((-(arr_0 [i_0])))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [6] [i_2] [i_3]);
                        arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-54)) * (((((((/* implicit */int) var_12)) & (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [(signed char)6])) && (((/* implicit */_Bool) arr_13 [i_1])))))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_4] [(signed char)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_2] [i_4])), (18446744073709551615ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)78)) == (((/* implicit */int) (signed char)51))))) : (((/* implicit */int) ((signed char) (+(arr_1 [i_2] [(signed char)8])))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 1) 
                        {
                            arr_23 [i_0] [i_4] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) ((int) min((((/* implicit */int) (short)0)), (1158497492))));
                            arr_24 [i_2] [i_0] [i_2] [i_2] [i_2] |= ((/* implicit */int) ((signed char) max((arr_13 [i_0]), (arr_13 [i_0]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_28 [i_6] [i_4] [(short)15] [i_4] [i_1] [i_4] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_18)))) ? (arr_27 [i_6] [i_6] [i_4] [i_2] [5ULL] [i_0]) : (((/* implicit */unsigned long long int) arr_18 [i_4]))));
                            arr_29 [(unsigned char)5] [i_4] [(signed char)3] [i_4] [i_0] = var_6;
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_34 [9ULL] [i_4] [i_2] [(signed char)4] [(signed char)4] = ((/* implicit */int) arr_1 [i_7] [i_0]);
                            arr_35 [i_1] = ((/* implicit */int) arr_21 [(unsigned short)14] [i_1] [(unsigned short)14] [i_1]);
                            arr_36 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0]))))) + ((-(((/* implicit */int) (signed char)-71))))))) ? (((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */int) (unsigned short)58842))))) | (max((4ULL), (arr_10 [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_4] [(unsigned short)12] [i_0])))));
                            arr_37 [i_7] [i_1] [i_1] [i_0] = ((-1845372548) + (((/* implicit */int) (short)127)));
                        }
                    }
                    for (short i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                    {
                        arr_40 [i_8] [i_8] [i_2] [i_2] [i_1] [(unsigned short)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_21 [i_0] [i_2] [i_1] [i_0])))));
                        arr_41 [i_0] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_0] [i_1] [i_2] [i_8]))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_0] [i_1] [i_2]))))) - (var_5)))));
                        arr_42 [i_8] = ((/* implicit */unsigned long long int) (+(min((((var_6) % (arr_0 [i_0]))), (((/* implicit */int) ((signed char) (signed char)-39)))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 2; i_10 < 13; i_10 += 2) 
                        {
                            arr_48 [i_10] [i_9] [i_9] [i_9] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_9] [i_1] [i_2] [i_9] [i_10])) ^ (((/* implicit */int) arr_9 [(unsigned short)11] [i_1] [i_1] [i_1]))))), (arr_30 [i_0] [i_9] [(unsigned short)4] [i_9] [i_10])))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(signed char)8] [i_9]))) & (arr_27 [i_0] [i_1] [i_2] [i_9] [i_10] [i_10]))), (arr_27 [i_10 + 3] [i_10 + 3] [i_10 - 2] [i_10] [i_10 - 2] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)46)), (min((var_17), (((/* implicit */unsigned short) var_1))))))))));
                            arr_49 [i_0] [(unsigned short)0] [i_1] [i_2] [i_0] [(short)4] [i_10] = ((/* implicit */signed char) arr_18 [i_0]);
                        }
                        arr_50 [i_1] [i_1] [i_2] [i_9] = ((12935863795877311780ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))));
                        arr_51 [i_1] [i_1] = ((/* implicit */signed char) (-(min((((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_0] [4ULL] [i_9])), (-5)))));
                        arr_52 [i_9] = ((/* implicit */unsigned char) var_10);
                        arr_53 [i_9] [(unsigned char)7] [i_1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) -421892929)) && (((/* implicit */_Bool) (signed char)57)))) && (((/* implicit */_Bool) max((arr_25 [i_9] [i_1] [(signed char)14]), (((/* implicit */unsigned char) (signed char)-54)))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_9])))))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        arr_56 [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 10410857669860653302ULL)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_55 [i_11])))), (((((((/* implicit */_Bool) arr_55 [i_11])) || (((/* implicit */_Bool) 18446744073709551600ULL)))) ? (((/* implicit */int) var_18)) : (min((arr_54 [i_11]), (((/* implicit */int) (unsigned char)227))))))));
        arr_57 [i_11] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_55 [i_11]))));
        arr_58 [i_11] = ((/* implicit */unsigned short) arr_55 [i_11]);
        arr_59 [i_11] [i_11] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52252))) + (2101483965110301338ULL))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_11])) - (((/* implicit */int) (signed char)-46))))) || (((/* implicit */_Bool) (signed char)30)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 1) 
        {
            arr_62 [i_12] = ((/* implicit */_Bool) 9552435894061117717ULL);
            arr_63 [i_12] = ((/* implicit */unsigned char) arr_54 [i_11]);
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    {
                        arr_69 [i_14] [i_11] [i_11] [i_11] [2ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_60 [i_12 + 2] [i_12] [i_12 - 3]))));
                        arr_70 [i_11] [i_11] [i_11] = ((/* implicit */signed char) var_3);
                        arr_71 [i_11] |= ((signed char) arr_61 [i_11] [i_11]);
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_16 = 1; i_16 < 19; i_16 += 2) 
        {
            arr_76 [i_15] [i_16] [i_16] = ((/* implicit */unsigned int) (~((((~(421892929))) - (((/* implicit */int) (!(((/* implicit */_Bool) -300981463)))))))));
            arr_77 [(signed char)7] = ((((/* implicit */_Bool) (unsigned short)4095)) ? (9552435894061117728ULL) : (12828995670518652196ULL));
        }
        arr_78 [(unsigned char)4] = ((/* implicit */int) arr_74 [(unsigned short)2] [i_15]);
    }
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), ((~(((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99)))))))));
}
