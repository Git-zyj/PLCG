/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207990
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
    var_16 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)33)) * (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_12) : (var_8)));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) (-(arr_1 [i_0])));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */unsigned long long int) 1395814062U)) : (((var_15) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_0)))))))));
        }
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            arr_8 [i_0] = ((/* implicit */signed char) 15487944255858535496ULL);
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                var_20 = ((/* implicit */short) ((signed char) arr_0 [i_0]));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [8LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) * (((/* implicit */int) var_11))));
                            var_21 = ((/* implicit */signed char) var_0);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-14257)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (signed char)-33))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_19 [i_0] [i_0] [i_0] [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_12 [i_6] [i_0] [i_2] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) (signed char)24))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                }
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [i_3] [i_3] [i_3] [8] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-13)) > (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_2))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((14306737609475239671ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] [(signed char)6] [i_0] [(signed char)7] = ((/* implicit */unsigned short) ((signed char) var_2));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [2LL] [2LL] [i_0])) ? (((((/* implicit */int) (short)30314)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))));
                    }
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                    {
                        arr_34 [i_7] [i_7] [i_0] [i_7] [i_7] = ((/* implicit */short) arr_21 [i_0] [5] [5] [15ULL] [i_0]);
                        var_26 = ((/* implicit */unsigned short) (~(arr_32 [i_0] [i_2 + 2])));
                        arr_35 [i_0 - 1] [i_0] [i_2] [i_3] [i_0] [13ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-2)) < (((/* implicit */int) var_5))))) | (((/* implicit */int) var_15))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_0 + 1] [i_0 + 1] [i_7] [i_0 + 1] [i_11])) ^ (var_6)))) ? (var_9) : (((/* implicit */unsigned long long int) 4294967295U)))))));
                        arr_39 [i_0] [i_2] [i_0] [i_7] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_2] [i_3] [i_2 + 3])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)-13))));
                        var_28 *= ((/* implicit */signed char) var_14);
                    }
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1821260394U)) ? (287111098489403258ULL) : (9893788289869472812ULL))))));
                        arr_42 [i_0 - 1] [i_0 - 1] [i_3] [i_0] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5305883547331729360ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)65)) * (((/* implicit */int) (signed char)13))))) : (((unsigned long long int) (signed char)8))));
                    }
                }
            }
        }
        for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 3) 
        {
            arr_46 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 15078167571488014591ULL))) ? ((+(((/* implicit */int) (signed char)98)))) : (((/* implicit */int) ((unsigned short) 287111098489403258ULL)))));
            /* LoopSeq 1 */
            for (short i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)41))) < (var_3))))) ^ (((((/* implicit */_Bool) var_0)) ? (0ULL) : (arr_9 [i_14] [i_13] [i_14]))));
                arr_49 [i_0] [i_0] [i_14] = 1769438164689155970ULL;
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    for (unsigned short i_16 = 3; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967274U)) ^ (17819688376798689801ULL)))) ? (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-75)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29)))))));
                            var_32 += ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) arr_12 [(signed char)14] [i_15] [(short)6] [i_16] [(signed char)14] [i_15])))));
                        }
                    } 
                } 
            }
            arr_56 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(var_6))));
            var_33 *= ((((/* implicit */_Bool) var_9)) ? (arr_18 [i_13] [i_13 + 2] [i_13] [(signed char)15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))));
            var_34 = ((/* implicit */long long int) (-(((/* implicit */int) (short)30314))));
        }
        var_35 = ((/* implicit */unsigned short) var_4);
    }
}
