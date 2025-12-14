/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189647
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) (~(((arr_0 [i_0] [12ULL]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
        var_16 = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_0]) << (((14336) - (14336)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [(_Bool)1] [i_1] [(short)13] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1595488794U)) * (var_9)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [16] [i_3 + 3] [i_3 - 3] [i_4 + 2] [i_4] [i_3 - 3])) ? (var_14) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_3 - 3] [i_4 - 1] [(unsigned short)14] [(unsigned short)14]))));
                                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                                arr_16 [i_0] [i_1] [12U] [i_2] [i_3] [0] &= ((arr_8 [i_4 - 1] [i_3 + 3] [i_3 + 3] [i_3 - 3]) != (arr_8 [i_4 + 1] [i_3 - 2] [i_3 + 2] [i_3 + 3]));
                            }
                        } 
                    } 
                    arr_17 [i_0] [1] [1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_2)));
                }
            } 
        } 
        arr_18 [12] = ((/* implicit */short) ((long long int) arr_1 [i_0]));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [12LL] [12LL] [i_0])) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
    }
    var_20 = ((/* implicit */unsigned char) 2130706432);
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            arr_33 [i_5] [14ULL] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6 - 2] [(short)14] [i_6 - 1] [i_6 - 2])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6 + 1] [(unsigned short)7] [i_6 - 2] [i_6 + 1])))));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8485973459871237637LL)) ? (((/* implicit */int) (unsigned short)57597)) : (((/* implicit */int) (unsigned short)12288))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_5] [(_Bool)1] [i_7] [12] [i_8] [i_6])) ? ((-9223372036854775807LL - 1LL)) : (8485973459871237637LL)))) : (((var_14) ^ (((/* implicit */unsigned long long int) arr_3 [i_5] [i_6])))));
                            var_22 = ((/* implicit */signed char) (_Bool)0);
                        }
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            arr_37 [i_5] [i_5] &= ((/* implicit */unsigned long long int) (~(arr_21 [i_5] [i_8])));
                            var_23 *= ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_24 = (+(((258048) * (((/* implicit */int) var_8)))));
                            arr_41 [i_5] [i_6 + 1] [i_5] [i_8] [i_6] [i_6] = ((/* implicit */unsigned char) (unsigned short)0);
                            arr_42 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [7U] [i_6 - 2] [i_11])) ? (((((/* implicit */_Bool) (unsigned char)121)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52829))))) : (((/* implicit */unsigned long long int) (~(1595488794U))))));
                        }
                        for (int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                        {
                            arr_47 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] = ((/* implicit */unsigned int) (short)-1412);
                            var_25 = ((/* implicit */signed char) ((arr_15 [i_6] [i_6 - 2] [i_7] [i_8] [i_12]) / (((/* implicit */long long int) arr_2 [i_5]))));
                        }
                        var_26 += ((/* implicit */unsigned short) arr_29 [(_Bool)1] [i_7]);
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (short)10243))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        arr_50 [i_5] [i_6] = ((/* implicit */_Bool) min(((((-(258052))) + (var_0))), (((((/* implicit */_Bool) var_5)) ? (((var_0) * (((/* implicit */int) var_4)))) : (((/* implicit */int) (_Bool)0))))));
                        arr_51 [i_5] [i_6 + 1] [i_7] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-2126))) & (arr_3 [i_13] [i_7])))) ? (((/* implicit */long long int) var_5)) : (var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_13]))))));
                        arr_52 [(signed char)11] [i_6] [i_7] [(signed char)11] = var_5;
                        arr_53 [i_5] [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            {
                                arr_58 [i_5] [i_5] [i_7] [i_6] [2U] [i_5] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_55 [i_6] [i_7] [i_14 + 1] [i_5])) ? (((/* implicit */int) (short)21990)) : (var_5)))))) ? ((-(arr_43 [3U] [i_15] [i_15 + 1] [(unsigned short)13] [i_14] [i_6 + 1] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_11 [i_5]) : (var_13))))));
                                var_28 = ((/* implicit */short) (_Bool)1);
                                var_29 = ((/* implicit */unsigned short) (-(((31ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30770)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 4; i_16 < 16; i_16 += 4) 
                    {
                        for (unsigned int i_17 = 3; i_17 < 16; i_17 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((((((/* implicit */int) var_12)) * (((/* implicit */int) (_Bool)1)))) - (max((((/* implicit */int) (_Bool)1)), (2147483624))))))))));
                                arr_63 [i_6] [i_16] [i_5] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((arr_49 [i_6] [i_16] [i_7] [(signed char)2] [13LL] [i_6]) <= (((/* implicit */long long int) 2147483624))))), (((((/* implicit */_Bool) var_7)) ? (1595488767U) : (((/* implicit */unsigned int) -945866853)))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [8U] [i_6] [i_17])) ? (3796632611700697152ULL) : (var_9)))) ? (arr_26 [i_5] [i_6] [i_6]) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)12))))))))));
                            }
                        } 
                    } 
                    var_31 -= ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned long long int) var_6)), (var_9))), (min((((/* implicit */unsigned long long int) arr_38 [i_7] [i_7] [i_6] [i_5] [i_5])), (var_3))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) >= (((/* implicit */unsigned long long int) arr_15 [i_5] [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_5]))))))));
                }
            } 
        } 
    } 
}
