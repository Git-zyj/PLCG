/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205758
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(max((arr_2 [i_0]), ((~(arr_2 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_2)))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                arr_13 [i_3 - 2] [i_3] [(unsigned char)10] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1]);
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                arr_15 [i_1] = ((/* implicit */unsigned char) (~(arr_12 [i_2 + 1])));
            }
            arr_16 [i_1] [i_2 + 1] [i_2 - 2] = ((/* implicit */short) max((arr_12 [i_1]), (max((arr_12 [i_2 + 1]), (arr_12 [i_2 - 2])))));
            arr_17 [i_1] [i_2] [i_1] = ((/* implicit */int) (_Bool)1);
        }
        arr_18 [i_1] [i_1] = ((/* implicit */short) (((~(((/* implicit */int) arr_5 [i_1])))) >= (((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1]))))));
        arr_19 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [(signed char)0] [(signed char)0] [(signed char)0])) || (((/* implicit */_Bool) (signed char)-48))))), (((signed char) (~(((/* implicit */int) var_8)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_24 [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_4), (var_3))))))), (var_3)));
                arr_25 [i_5] = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_28 [(short)8] [(short)8] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)137)), (arr_12 [i_6]))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 13; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 12; i_8 += 2) 
            {
                {
                    arr_33 [i_6] [i_6] = ((/* implicit */signed char) (+(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_40 [i_6] [i_6] [i_6] [(unsigned short)5] [i_6] = ((/* implicit */signed char) (~((-((+(var_1)))))));
                            arr_41 [i_6] [(signed char)10] [i_8] [(unsigned char)3] [i_6] = ((/* implicit */short) (!(min(((_Bool)1), (arr_5 [i_8 + 2])))));
                            arr_42 [(short)2] [(short)2] [(short)2] [i_6] [i_10] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_6 [i_10]))))))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 11; i_11 += 4) 
                        {
                            arr_46 [i_6] [i_6] [i_6] [i_9] [i_6] = ((/* implicit */_Bool) var_8);
                            arr_47 [i_6] [i_6] [i_6] [(short)1] [i_11 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)26914));
                            arr_48 [i_6] [i_7 - 2] [i_6] [i_8 + 2] [i_9] [i_7 - 2] = ((/* implicit */unsigned char) min(((!(var_2))), ((!((!(((/* implicit */_Bool) var_5))))))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_53 [i_9] [i_9] [i_8] [i_7 - 1] [i_9] = ((/* implicit */unsigned short) (((-((-(((/* implicit */int) var_8)))))) > (((/* implicit */int) max((arr_51 [i_6] [(_Bool)1] [i_7 - 2] [4ULL] [i_8]), (arr_51 [i_6] [7LL] [i_7 - 2] [i_7 - 2] [(unsigned short)7]))))));
                            arr_54 [i_9] [i_9] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            arr_55 [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_51 [i_6] [i_6] [i_8] [i_9] [i_12 - 1])), (932058777)));
                        }
                        arr_56 [i_6] [i_9] [i_8] [(unsigned char)12] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)5))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            arr_61 [13U] [(unsigned short)12] [(unsigned short)12] [i_6] = ((/* implicit */unsigned short) ((_Bool) arr_51 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_7 - 2]));
                            arr_62 [4U] [(_Bool)1] [i_9] [(_Bool)1] [(unsigned short)0] = 536870848ULL;
                            arr_63 [i_13] [i_9] [i_7] = ((/* implicit */unsigned int) arr_52 [i_6] [i_6] [i_6] [i_8 + 2] [(unsigned char)10] [i_9]);
                        }
                        for (unsigned int i_14 = 2; i_14 < 10; i_14 += 4) /* same iter space */
                        {
                            arr_66 [i_14] = ((/* implicit */signed char) var_3);
                            arr_67 [i_6] [i_9] = ((/* implicit */short) arr_51 [i_6] [i_6] [i_6] [i_6] [i_6]);
                            arr_68 [i_6] [i_6] [(unsigned char)4] [i_6] [i_6] = ((/* implicit */_Bool) (-((+(arr_7 [i_14 + 2] [i_7 - 2] [i_7])))));
                        }
                        for (unsigned int i_15 = 2; i_15 < 10; i_15 += 4) /* same iter space */
                        {
                            arr_71 [i_15] [i_8 + 1] [i_15] = ((/* implicit */unsigned int) max((max((arr_6 [i_7 - 2]), (arr_6 [i_7 + 1]))), (min((((/* implicit */unsigned char) (_Bool)0)), (arr_6 [i_7 - 2])))));
                            arr_72 [i_6] [(unsigned short)5] [i_6] = ((/* implicit */unsigned short) var_6);
                            arr_73 [(signed char)12] [i_15 + 2] [i_6] [i_6] [7U] [i_6] = ((/* implicit */unsigned short) arr_31 [i_6] [i_6] [(_Bool)1]);
                        }
                        arr_74 [i_6] [(unsigned char)0] [(unsigned char)0] [i_9] |= ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_6))));
                        arr_75 [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned char) (~((-(((/* implicit */int) (_Bool)0)))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        arr_79 [i_6] = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_7)))), ((-(var_5)))));
                        arr_80 [i_6] [i_8 + 2] [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned char) min((var_0), (((/* implicit */long long int) (signed char)91)))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_17 = 2; i_17 < 11; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 2; i_18 < 13; i_18 += 1) 
            {
                {
                    arr_86 [(unsigned char)8] [(unsigned char)8] = (!(((/* implicit */_Bool) (unsigned short)8128)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        arr_89 [i_6] [i_6] [i_19] [i_19] [i_19] [i_6] = ((/* implicit */short) ((16383U) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        arr_90 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_27 [i_6] [i_18 - 2]), (arr_37 [i_18 + 1] [i_17 + 2] [i_17 + 3] [i_17 + 2]))))));
                        arr_91 [i_6] [i_18 - 2] [9U] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (max((var_8), (((/* implicit */short) min((var_7), ((unsigned char)240))))))));
                    }
                    arr_92 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) 1788532472);
                    arr_93 [(unsigned short)0] [(unsigned short)0] [(signed char)8] [(unsigned short)0] = ((/* implicit */unsigned char) arr_64 [i_18 + 1] [i_17 - 1] [(signed char)0] [2] [2]);
                }
            } 
        } 
    }
    for (long long int i_20 = 0; i_20 < 13; i_20 += 2) 
    {
        arr_98 [i_20] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), (var_4))))));
        arr_99 [i_20] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
    {
        arr_104 [i_21] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_5 [i_21 - 1])), (var_8)))), (max((((/* implicit */unsigned long long int) arr_100 [i_21 - 1])), (min((((/* implicit */unsigned long long int) (unsigned char)52)), (arr_12 [i_21])))))));
        arr_105 [i_21 - 1] = ((/* implicit */unsigned short) (!(arr_9 [i_21 - 1] [i_21 - 1])));
        arr_106 [i_21 - 1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_12 [i_21 - 1]))))));
    }
}
