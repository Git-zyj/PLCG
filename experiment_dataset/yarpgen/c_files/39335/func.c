/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39335
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_10 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62448)) - (((/* implicit */int) (unsigned short)25849))))), (arr_2 [(short)0])));
        var_11 = ((/* implicit */unsigned long long int) (unsigned char)63);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */signed char) ((arr_5 [i_1]) / (arr_5 [i_1])));
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1])) + (((arr_3 [i_1]) & (((/* implicit */int) arr_1 [i_1]))))));
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_2])) == (((/* implicit */int) arr_6 [i_1] [i_1] [i_2]))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_0 [i_1] [i_2]) % (arr_0 [i_1] [i_1])));
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_20 [i_1] [i_3] [i_3] [i_4] [i_1] = ((arr_2 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))));
                        arr_21 [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_5])) ? (arr_5 [i_5]) : (((/* implicit */int) arr_1 [i_1]))));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_3])) ? (((/* implicit */int) (unsigned short)25851)) : (((/* implicit */int) (unsigned short)25849))))) ? (((/* implicit */int) arr_6 [i_1] [i_3] [i_3])) : (arr_18 [i_1] [i_4] [i_3] [i_1] [i_1] [i_1])));
                    }
                } 
            } 
            arr_22 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3088)) - (((/* implicit */int) arr_13 [i_1] [i_1] [i_3]))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_3])) < (((/* implicit */int) (unsigned short)25851))));
            var_14 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) ((arr_17 [i_1] [i_1]) || (((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_3])))))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_1] [i_1])) >= (((/* implicit */int) (unsigned short)25838))));
        }
        var_16 = ((/* implicit */int) arr_14 [i_1]);
    }
    for (short i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (arr_1 [20LL])));
        /* LoopNest 2 */
        for (long long int i_7 = 2; i_7 < 17; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_29 [i_6] [i_7 - 1] [i_8] [i_8] = ((/* implicit */int) (_Bool)1);
                    arr_30 [i_8] [i_8] [i_7 - 2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_8]))) | (min((min((((/* implicit */unsigned long long int) arr_28 [i_6] [i_7 + 1] [i_8])), (arr_2 [i_8]))), (((/* implicit */unsigned long long int) arr_1 [i_8]))))));
                }
            } 
        } 
        var_18 = ((((/* implicit */int) arr_26 [i_6] [i_6] [i_6])) * (((((/* implicit */int) arr_26 [i_6] [i_6] [i_6])) / (((/* implicit */int) arr_26 [i_6] [i_6] [i_6])))));
    }
    var_19 += ((/* implicit */unsigned char) var_2);
    /* LoopSeq 3 */
    for (short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 3; i_10 < 11; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) arr_26 [i_9] [i_10] [i_11]);
                    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_10 - 1] [i_10 - 2] [i_10 + 1])) >= (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) ((((((/* implicit */int) arr_33 [i_9] [i_9])) * (((/* implicit */int) arr_33 [i_9] [i_9])))) >= (((/* implicit */int) (unsigned short)39709))));
    }
    for (short i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
    {
        arr_40 [i_12] [i_12] = (short)13159;
        /* LoopNest 2 */
        for (unsigned short i_13 = 3; i_13 < 11; i_13 += 2) 
        {
            for (int i_14 = 3; i_14 < 10; i_14 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_43 [i_13] [i_14] [i_14 - 2])) ? (arr_43 [i_13] [i_14] [i_14]) : (arr_43 [i_13] [i_14] [i_14 - 1]))), (max((((/* implicit */long long int) (unsigned char)20)), (arr_43 [i_13] [i_14] [i_14])))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_13]))) * (((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)39674), (((/* implicit */unsigned short) (unsigned char)10)))))) & (max((((/* implicit */long long int) (signed char)-67)), (-5196983384873187284LL)))))));
                    arr_48 [i_12] [i_12] [i_13] = arr_47 [i_12] [i_13] [i_13];
                }
            } 
        } 
    }
    for (short i_15 = 0; i_15 < 12; i_15 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) arr_46 [i_15] [(signed char)2])) ? (((((/* implicit */int) arr_46 [i_15] [8])) / (((/* implicit */int) arr_46 [i_15] [(unsigned short)10])))) : (max((((/* implicit */int) arr_46 [i_15] [(signed char)2])), (-1)))))));
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 4; i_17 < 10; i_17 += 2) 
            {
                {
                    arr_56 [i_15] [i_16] [i_17] = ((((/* implicit */_Bool) arr_51 [i_17 + 2])) ? (max((((/* implicit */int) (unsigned short)25835)), (arr_51 [i_17 - 1]))) : (arr_51 [i_17 + 2]));
                    /* LoopNest 2 */
                    for (signed char i_18 = 2; i_18 < 9; i_18 += 2) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) 
                        {
                            {
                                arr_62 [i_15] [i_16] [i_17] [i_17] [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_17 + 2] [i_18 - 2] [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((arr_57 [i_18 + 2] [i_18 + 3] [i_17 + 2] [i_17 - 1] [i_17 - 1]) / (arr_57 [i_18 + 2] [i_18] [i_17 + 2] [i_17] [i_17 - 1])))) : (max((arr_35 [i_15] [i_16] [i_19]), (arr_35 [i_15] [i_15] [i_15])))));
                                var_26 *= ((/* implicit */unsigned long long int) max((((arr_50 [i_19]) != (arr_43 [i_16] [i_17 - 4] [i_18 + 1]))), (((((/* implicit */int) (signed char)114)) <= (((/* implicit */int) (signed char)23))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((((/* implicit */int) var_6)) * (((((/* implicit */int) var_9)) & (min((1031227627), (((/* implicit */int) var_3)))))));
}
