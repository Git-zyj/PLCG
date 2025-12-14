/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197343
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [i_1] [i_2 + 2] [(unsigned short)2] [(unsigned char)2] [i_4] = ((/* implicit */long long int) arr_6 [2ULL] [i_1] [i_2]);
                                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (arr_5 [10ULL] [10ULL]) : (arr_0 [i_0] [i_1]))) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (8033275357758231419ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [10ULL])) ? (((/* implicit */unsigned int) arr_8 [i_3] [(short)9] [8U] [8U])) : (arr_6 [i_0] [8U] [i_0])))) < (max((var_18), (((/* implicit */long long int) 775512195)))))))) : (min((((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_0] [i_2] [i_0] [i_2])), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0))))))));
                                arr_14 [i_0] [(unsigned char)2] [i_2] [i_0] [10LL] [i_1] [i_3] = ((/* implicit */unsigned int) ((unsigned short) max((arr_11 [i_0] [(unsigned char)4] [i_0] [i_1] [i_4 + 1]), (arr_11 [i_0] [(unsigned short)8] [i_2] [i_1] [i_4 + 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_0] [(short)0] [6U] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (arr_0 [i_0] [i_5])))) ? (((((/* implicit */int) var_16)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) var_4))))), (arr_20 [i_0] [(unsigned short)2] [i_5] [i_6])));
                            arr_22 [(unsigned char)2] [i_1] [i_6] [i_1] [i_1] [8ULL] &= ((/* implicit */short) min((arr_8 [0] [i_1] [i_1] [i_1]), ((+(arr_8 [i_1] [i_5] [i_1] [i_0])))));
                            arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 6824128303665729589LL)) ? (-8686467719197404073LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_5]))))) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_6] [i_5] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) + (((((/* implicit */unsigned long long int) arr_8 [9] [i_5] [i_1] [i_0])) % (arr_18 [i_6] [i_0] [i_0])))))));
                            arr_24 [i_0] [i_1] [i_5] [i_6] [i_0] [i_6] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                            arr_25 [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_6]))))), (((((/* implicit */_Bool) var_11)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) (~(((long long int) arr_2 [7U] [7U])))))));
                        }
                    } 
                } 
                arr_26 [4U] [i_0] = ((/* implicit */unsigned short) 7210459951927437015ULL);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_7 = 2; i_7 < 16; i_7 += 4) 
    {
        arr_29 [i_7] [i_7 + 1] = ((/* implicit */_Bool) arr_28 [i_7 + 1]);
        arr_30 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7 - 2])) ? (((/* implicit */int) arr_28 [i_7 - 2])) : (((/* implicit */int) arr_28 [i_7 - 1]))))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_28 [i_7])), (14096381669129264827ULL))))) : (((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_7])) || (var_13)))) : (((/* implicit */int) var_8))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_33 [i_8] [i_8] = ((/* implicit */short) (+(((/* implicit */int) arr_31 [i_8]))));
        arr_34 [i_8] = ((/* implicit */unsigned short) 14096381669129264821ULL);
        /* LoopNest 3 */
        for (short i_9 = 3; i_9 < 12; i_9 += 4) 
        {
            for (unsigned char i_10 = 2; i_10 < 12; i_10 += 4) 
            {
                for (unsigned short i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    {
                        arr_42 [14ULL] [14ULL] [i_9 + 1] [i_10] [i_11] = ((/* implicit */long long int) (+((~(4350362404580286790ULL)))));
                        arr_43 [1] [i_9] [7U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_10 + 3])) ? (((/* implicit */long long int) arr_36 [i_10 - 1])) : (1124150183256213293LL)));
                        arr_44 [i_8] [i_8] [i_10 + 1] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_10])) ? (((/* implicit */int) ((unsigned char) 4350362404580286778ULL))) : (((/* implicit */int) arr_31 [i_9 - 2]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        arr_47 [i_12] = arr_38 [7] [7] [i_12];
        arr_48 [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_12]))));
        arr_49 [i_12] = ((/* implicit */int) arr_4 [i_12] [i_12] [i_12]);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                {
                    arr_58 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_28 [i_13 + 1])), (((((/* implicit */_Bool) arr_39 [i_13])) ? (441691341U) : (arr_53 [i_13 - 1] [i_13 - 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_13] [i_15])) ? (arr_37 [i_15] [i_14] [0]) : (arr_37 [i_13 + 1] [i_14] [i_15])))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) 6824128303665729589LL))));
                    arr_59 [i_13] [i_13] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_39 [(signed char)12]) | (((/* implicit */unsigned long long int) arr_32 [i_13]))))) ? (((((/* implicit */unsigned long long int) (~(var_1)))) ^ (max((4574799009601012111ULL), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                    arr_60 [i_13] [i_15] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_14])) ? (((/* implicit */int) arr_31 [i_13])) : (((/* implicit */int) arr_31 [i_13 - 1]))))));
                }
            } 
        } 
        arr_61 [(unsigned char)8] = arr_52 [i_13];
    }
}
