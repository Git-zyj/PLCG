/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208922
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
    var_12 |= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (signed char)-1)), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-(var_3))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8870941430228013091LL)) ? (1061177137102068831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137)))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)4983)) : (((/* implicit */int) arr_6 [i_1])))))), (((/* implicit */int) arr_6 [i_1]))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] [(signed char)2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)43)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) var_1))));
                    arr_14 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -915174314)) ? (536838144) : (((/* implicit */int) (unsigned char)40)))))));
                }
            } 
        } 
        arr_15 [10] [10] = ((/* implicit */signed char) min((arr_4 [(short)0]), (((/* implicit */int) var_10))));
        arr_16 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 805306368)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        arr_20 [(unsigned char)0] = ((/* implicit */signed char) arr_4 [4]);
        arr_21 [i_4] = ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (arr_1 [i_4]))))) : (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_4]) : (arr_1 [i_4]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
        {
            arr_24 [i_4] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) ((728334954584126496LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))))))));
            arr_25 [i_5] = ((/* implicit */unsigned char) (unsigned short)56594);
            arr_26 [i_4] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [(unsigned short)10])) && (((/* implicit */_Bool) arr_10 [(short)10]))));
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
        {
            arr_29 [i_4] &= ((/* implicit */unsigned char) var_4);
            arr_30 [i_4] [i_4] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
        {
            arr_33 [i_7] [(signed char)16] [i_4] = ((/* implicit */signed char) ((int) (unsigned short)7));
            arr_34 [4] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_7])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-84))));
            arr_35 [i_4] = ((/* implicit */int) var_1);
            arr_36 [i_7] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7] [i_7])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4])))));
        }
    }
    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
    {
        arr_40 [(short)14] [i_8] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) : (487791635554598183LL))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            arr_44 [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (signed char)18)))))));
            arr_45 [(unsigned short)4] [i_8] [i_9] &= ((/* implicit */signed char) max((((/* implicit */short) arr_41 [i_8])), ((short)-13869)));
            arr_46 [i_9] [i_8] = ((/* implicit */int) var_10);
            arr_47 [i_9] = ((/* implicit */unsigned char) 18446744073709551609ULL);
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        arr_53 [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) >= (arr_5 [i_8]))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_19 [i_8]))));
                        arr_54 [i_8] [i_9] [i_9] [i_11] = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */int) arr_51 [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)221)) >> (((((/* implicit */int) (short)2654)) - (2635)))))))))));
                        arr_55 [i_8] [i_8] [i_9] [2] [i_10] [i_10] = ((/* implicit */unsigned short) ((arr_4 [i_9]) == (((/* implicit */int) (signed char)84))));
                    }
                } 
            } 
        }
        arr_56 [i_8] = ((/* implicit */signed char) var_8);
        arr_57 [i_8] [i_8] = ((/* implicit */unsigned char) 2147483628);
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                {
                    arr_63 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [0ULL]), (((/* implicit */int) (!((_Bool)0))))))) ? ((+(((/* implicit */int) (unsigned char)236)))) : (((/* implicit */int) arr_7 [(signed char)8]))));
                    arr_64 [i_8] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) arr_59 [i_12] [(signed char)5] [i_13])))) : (arr_18 [i_8])))) : (8817383668818741228LL));
                    arr_65 [i_8] [i_12] [i_12] [i_13] = (short)26726;
                }
            } 
        } 
    }
}
