/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41714
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
    var_13 = ((/* implicit */unsigned int) ((var_10) + (((((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_12))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_14 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_1 [i_0] [i_1])))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 2) 
            {
                for (long long int i_3 = 4; i_3 < 7; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_3 - 1] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_3 - 1] [i_2 - 1] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_3 - 1] [i_2 - 1] [i_1]))));
                        arr_14 [i_0] [i_0] [i_2 + 2] [i_1] = ((/* implicit */int) ((long long int) arr_0 [i_2 + 2] [i_3 + 2]));
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            arr_19 [i_4] = ((/* implicit */unsigned long long int) arr_16 [i_4] [i_4]);
            arr_20 [i_4] [i_4] [i_4] = arr_9 [i_0] [i_0] [i_4];
        }
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */unsigned int) ((((arr_23 [i_5] [i_5]) != (arr_23 [i_5] [i_5]))) ? (max((arr_23 [i_5] [i_5]), (arr_23 [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_23 [i_5] [i_5])) ? (arr_23 [i_5] [i_5]) : (arr_23 [i_5] [i_5])))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_22 [i_7] [i_7]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_5])))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_5] [i_5] [i_5]))) : (arr_23 [i_5] [i_7])))))))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                    {
                        arr_32 [i_6] &= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_30 [i_7])) < (((/* implicit */int) arr_30 [i_5])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 32768)) ? (arr_27 [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_23 [i_5] [i_6])))))))));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 3285761635U)))))), ((~(((/* implicit */int) arr_29 [i_5] [i_6] [i_5] [i_5] [i_6])))))))));
                        arr_33 [i_8] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) 32768);
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) arr_25 [i_9] [i_6]);
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_29 [i_5] [i_6] [i_6] [i_7] [i_9]) ? (arr_23 [i_9] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_5])) ? (((/* implicit */int) (short)16280)) : (((/* implicit */int) (signed char)-113))))) : (arr_22 [i_5] [i_5])));
                        var_19 *= ((/* implicit */unsigned short) ((unsigned int) arr_25 [i_5] [i_7]));
                    }
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_34 [i_5] [i_6] [i_5] [i_5]), (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) : (16175132787519787407ULL)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) 
                    {
                        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (min((arr_36 [i_6]), (((/* implicit */long long int) arr_21 [i_7])))) : (((/* implicit */long long int) max((arr_37 [i_5] [i_6]), (((/* implicit */unsigned int) arr_30 [i_5])))))))) ? (((/* implicit */int) ((unsigned short) arr_34 [i_10 + 1] [i_10] [i_10 + 1] [i_10]))) : (((/* implicit */int) arr_25 [i_5] [i_6]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_11 = 2; i_11 < 13; i_11 += 1) /* same iter space */
                        {
                            var_22 = (~(arr_34 [i_10 + 1] [i_10 - 1] [i_10] [i_10 + 1]));
                            var_23 = ((/* implicit */unsigned int) arr_39 [i_11] [i_11] [i_11] [i_10] [i_7] [i_11] [i_10]);
                            arr_40 [i_11] [i_11] [i_7] [i_11] [i_5] [i_11] [i_11 + 3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 15755782185374673733ULL)) ? (arr_37 [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29)))))));
                        }
                        for (unsigned char i_12 = 2; i_12 < 13; i_12 += 1) /* same iter space */
                        {
                            var_24 ^= (-(((((/* implicit */int) arr_41 [i_6] [i_7] [i_12 + 3])) / (((/* implicit */int) arr_41 [i_12 + 1] [i_5] [i_5])))));
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_36 [i_12 - 1])))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((arr_22 [i_5] [i_5]) != (arr_22 [i_7] [i_5]))) ? (max((arr_22 [i_6] [i_6]), (arr_22 [i_13] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_6] [i_7]) != (arr_22 [i_5] [i_7])))))));
                            var_27 = ((((/* implicit */_Bool) arr_39 [i_13] [i_7] [i_7] [i_10 - 1] [i_7] [i_10 - 2] [i_10 + 1])) ? (min((2690961888334877883ULL), (((/* implicit */unsigned long long int) (unsigned char)187)))) : ((~(arr_39 [i_13] [i_6] [i_6] [i_10 - 2] [i_10 - 2] [i_10 - 2] [i_10 - 1]))));
                        }
                        arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)115)) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_45 [i_5] [i_7] [i_5] [i_6] [i_5])) ? (((/* implicit */int) arr_29 [i_5] [i_6] [i_5] [i_6] [i_5])) : (((/* implicit */int) arr_30 [i_10 + 1])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_14 = 2; i_14 < 15; i_14 += 1) 
                        {
                            var_28 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_6] [i_6] [i_6]))));
                            arr_49 [i_5] [i_6] [i_7] [i_7] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_14 + 1] [i_14 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_14 - 2] [i_14 - 2] [i_10 - 2] [i_10 + 1] [i_10 - 1]))) : (arr_26 [i_10 - 1])));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)29)) ? (2145299338) : (((/* implicit */int) (unsigned char)130)))))));
                            arr_50 [i_14] [i_14] [i_10] [i_6] [i_6] [i_14] [i_5] = ((/* implicit */unsigned char) arr_42 [i_5] [i_5] [i_5] [i_5] [i_5]);
                        }
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_35 [i_5] [i_6] [i_6]) >= (arr_35 [i_5] [i_5] [i_7]))))) % (((((/* implicit */_Bool) arr_35 [i_7] [i_6] [i_5])) ? (arr_35 [i_5] [i_7] [i_7]) : (arr_35 [i_5] [i_6] [i_7])))));
                }
            } 
        } 
        arr_51 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (~(arr_23 [i_5] [i_5])))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5]))) > (var_11)))))) != (((/* implicit */int) arr_25 [i_5] [i_5]))));
    }
    for (signed char i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_15] [i_15] [i_15] [i_15] [i_15])) - (((/* implicit */int) arr_44 [i_15] [i_15] [i_15] [i_15] [i_15]))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_15] [i_15] [i_15] [i_15]))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_29 [i_15] [i_15] [i_15] [i_15] [i_15]), ((_Bool)1))))) : (((((/* implicit */_Bool) arr_30 [i_15])) ? (2690961888334877883ULL) : (((/* implicit */unsigned long long int) var_9))))))));
        arr_56 [i_15] = ((/* implicit */int) arr_26 [i_15]);
        arr_57 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_37 [i_15] [i_15]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))), (((/* implicit */unsigned int) arr_31 [i_15] [i_15] [i_15] [i_15]))))) ? (((/* implicit */unsigned long long int) ((((arr_47 [i_15] [i_15] [i_15]) - (arr_37 [i_15] [i_15]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_44 [i_15] [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_28 [i_15] [i_15] [i_15])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_44 [i_15] [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_53 [i_15]))))) ? ((~(15755782185374673722ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))))));
    }
    var_32 = ((/* implicit */unsigned long long int) var_9);
}
