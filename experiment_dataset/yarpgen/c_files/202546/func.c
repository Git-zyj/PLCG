/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202546
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -1798702783)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), ((_Bool)1)))))))))));
        arr_4 [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(unsigned short)15])) + ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))), (max((min((((/* implicit */unsigned long long int) 1798702766)), (1279365985104057219ULL))), (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_3 [(signed char)6])) : (((/* implicit */int) arr_3 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_11 [(_Bool)1] [i_2] [i_2] = ((/* implicit */short) min((max((((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) arr_8 [1ULL] [12ULL] [i_1])) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_2])))))), (((/* implicit */int) arr_10 [i_1]))));
            arr_12 [i_1] [i_2] [i_2] = (!(((/* implicit */_Bool) (-(arr_8 [i_1] [i_1] [i_1])))));
        }
        var_16 = max((max((((/* implicit */unsigned short) arr_1 [i_1] [i_1])), (arr_10 [i_1]))), (((/* implicit */unsigned short) ((arr_7 [i_1]) >= (arr_7 [i_1])))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_9 [i_3] [(short)11])))))), (arr_6 [i_1])));
                    arr_17 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1]))))), (min((arr_6 [i_4]), (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_3 - 1] [i_3] [i_3 + 2])))))));
                    arr_18 [i_3] [i_3 + 3] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_1] [i_3] [i_4] [(unsigned short)7])), (((unsigned char) arr_0 [i_1]))))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) var_5))) : (min((((/* implicit */int) arr_1 [i_1] [i_4])), (0)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [(signed char)4] [i_1] [i_4])) : (arr_8 [i_1] [i_3 + 1] [i_4]))))));
                        arr_21 [i_1] [i_3 + 1] [i_3] [i_5] [6LL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_14 [i_5] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) var_3)) : (var_12)))));
                        arr_22 [i_1] [(signed char)10] [i_4] [i_5] [i_3] = ((/* implicit */unsigned long long int) (-(arr_8 [i_3 + 3] [i_3 + 3] [i_3 - 1])));
                    }
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        arr_25 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_16 [i_6] [i_6 + 2])))) ? (((/* implicit */long long int) max((((int) arr_10 [(short)8])), (((/* implicit */int) arr_0 [i_4]))))) : (((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (arr_5 [i_3 + 4]) : (arr_5 [i_3 + 1])))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_2 [i_6 + 1])), (((((/* implicit */_Bool) arr_24 [i_4] [i_3 - 1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_9 [i_6] [i_6])))), (((/* implicit */int) max((arr_13 [i_1] [i_1] [i_4]), (((/* implicit */short) arr_0 [i_1])))))))))))));
                        arr_26 [i_1] [i_4] [i_4] [i_3] = var_4;
                        arr_27 [i_1] [i_3] [3ULL] = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) arr_9 [i_1] [i_1])))));
                    }
                }
            } 
        } 
        arr_28 [i_1] = min(((~(max((16137856497817359918ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_1])) ? (max((var_6), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])))) : (16122497461990035168ULL))));
    }
    for (int i_7 = 2; i_7 < 11; i_7 += 2) 
    {
        arr_33 [i_7 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((unsigned long long int) arr_32 [i_7 + 1] [i_7 + 1])), (((/* implicit */unsigned long long int) (~(-1798702785)))))))));
        arr_34 [i_7] = (!(((((/* implicit */int) var_8)) >= ((+(((/* implicit */int) var_4)))))));
        arr_35 [i_7 - 1] = ((/* implicit */unsigned char) ((int) arr_0 [(unsigned short)10]));
        arr_36 [i_7 + 1] [i_7 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((max((arr_32 [i_7 + 2] [i_7]), (((/* implicit */unsigned long long int) arr_19 [i_7] [(signed char)2] [i_7 + 1] [i_7 - 2] [i_7])))), (((/* implicit */unsigned long long int) var_11)))))));
    }
    for (int i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (int i_12 = 1; i_12 < 10; i_12 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) arr_37 [i_10]))))) ? (((((/* implicit */int) arr_1 [i_8] [i_9])) * (((/* implicit */int) arr_29 [i_8])))) : (((int) (unsigned char)159))))))))));
                                arr_49 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_9 [i_11] [i_11])), ((-(((/* implicit */int) arr_3 [i_8]))))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 8571620594160536319LL)), (9ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_8] [i_8] [i_10] [i_9 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32609)))))));
                    var_22 ^= ((/* implicit */short) ((arr_43 [i_9 - 1] [i_9 - 1] [i_9 - 1]) & (((((/* implicit */_Bool) arr_43 [i_9 - 1] [i_9 - 1] [i_9 - 1])) ? (arr_43 [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_13 = 3; i_13 < 12; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_48 [i_8] [i_8] [i_8]))));
                        arr_59 [i_8] = ((/* implicit */unsigned int) var_3);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_16 = 3; i_16 < 18; i_16 += 2) 
    {
        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                {
                    arr_68 [i_18] [i_16] [i_16] [i_16 - 2] = ((((((unsigned long long int) arr_2 [i_16 + 2])) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_16 + 2]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_16 + 2] [i_18]))));
                    arr_69 [i_16 - 3] [i_16] [i_16] [i_16] = ((/* implicit */short) min((((/* implicit */unsigned int) min((max((arr_62 [i_16] [i_17]), (((/* implicit */int) arr_64 [i_16] [i_17] [i_16])))), (((/* implicit */int) ((signed char) arr_0 [i_16 + 1])))))), (min((max((((/* implicit */unsigned int) arr_67 [i_16] [(_Bool)1] [i_17] [i_18])), (arr_60 [i_18]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_16])))))))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!((_Bool)1))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_1);
}
