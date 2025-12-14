/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230132
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned char)255))));
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) (~(0U)))) : (((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) var_4))))) | (((((/* implicit */long long int) arr_0 [i_0] [i_0])) % (var_9)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((min((4294967294U), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))))) % (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_14 = ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_10 [i_1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) | (var_3))) : (((((/* implicit */_Bool) -9223372036854775798LL)) ? (4294967295U) : (10U))));
            var_15 = ((/* implicit */signed char) (-((+(arr_0 [i_1] [i_2])))));
            arr_11 [i_1] [9U] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)127))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */short) (~(4294967295U)));
                            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_5 + 3] [i_5] [i_5 + 3] [i_5 + 3] [i_5 - 2]))));
                            arr_21 [0] [i_2] [i_3] [i_3] [i_5 - 2] = ((/* implicit */int) ((long long int) (signed char)127));
                            var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5 + 3] [i_1]))) >= (4294967276U)));
                        }
                    } 
                } 
            } 
            arr_22 [i_2] [i_2] [(_Bool)1] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_1]))));
        }
        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 3; i_7 < 13; i_7 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) (+(-1LL)));
                    var_20 += ((/* implicit */long long int) (signed char)-1);
                }
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                {
                    var_21 = (((+((~(0ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_18 [i_9] [i_7] [3LL] [i_6] [i_1]))) ? ((+(var_3))) : (((/* implicit */unsigned int) arr_0 [i_1] [i_6]))))));
                    arr_34 [i_6] [i_1] [i_7 - 2] [i_9] [8ULL] = ((/* implicit */unsigned int) min((70368744177663LL), (((/* implicit */long long int) (signed char)32))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((18446744073709551614ULL), (((/* implicit */unsigned long long int) 134217727))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : ((~(((/* implicit */int) (signed char)1))))));
                    var_23 = ((/* implicit */int) (-(min((min((var_9), (((/* implicit */long long int) (unsigned short)14336)))), (((140735340871680LL) & (-9223372036854775802LL)))))));
                }
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                {
                    arr_38 [i_6] [i_6] [i_7] [(unsigned char)6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((4095U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) arr_12 [5] [5] [i_7] [(signed char)13]))))))))));
                    arr_39 [i_1] [(unsigned char)10] [(unsigned char)10] [i_7] [(signed char)0] [(_Bool)1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 9223372036854775807LL))) ? (((((/* implicit */_Bool) arr_37 [i_7] [(signed char)8] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_20 [i_6] [14LL] [i_7 + 3] [i_7] [14LL] [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [(short)11] [6ULL] [i_6])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)0)))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        {
                            arr_47 [i_1] [i_6] = (!(((((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) (_Bool)1)))));
                            arr_48 [i_6] [i_6] [i_7 + 3] [i_11] [i_12] [i_12] [i_7 + 3] = ((/* implicit */unsigned short) ((unsigned int) (signed char)105));
                        }
                    } 
                } 
                arr_49 [i_7] [i_6] [i_6] [i_1] = ((/* implicit */long long int) (short)255);
            }
            arr_50 [i_6] [i_6] = min((((/* implicit */int) ((((/* implicit */_Bool) 1032192U)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (((((/* implicit */int) max((var_6), ((unsigned short)65535)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))));
            var_24 = ((/* implicit */signed char) ((arr_9 [i_1] [i_6]) != (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (4293935104U))))));
            var_25 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */long long int) max((1U), (((/* implicit */unsigned int) (unsigned char)0))))) != (arr_9 [i_1] [i_6])))), (((((/* implicit */_Bool) var_9)) ? (2251799813685247LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-105)))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)24))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (1032192U) : ((+(var_5)))))) : (((((-9223372036854775803LL) & (((/* implicit */long long int) 4294967295U)))) & (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_1] [i_13] [i_13] [i_13] [i_13] [i_13])))))));
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                for (unsigned char i_15 = 3; i_15 < 13; i_15 += 2) 
                {
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        {
                            var_27 ^= ((/* implicit */int) min(((((((_Bool)1) ? (arr_9 [i_14] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) / (((((/* implicit */_Bool) 4294967295U)) ? (-9223372036854775791LL) : (((/* implicit */long long int) 268419072U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 536870911)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) (signed char)0)))))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+((-2147483647 - 1)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_17 = 2; i_17 < 15; i_17 += 1) 
            {
                var_29 = min((max((-9223372036854775791LL), (((((/* implicit */_Bool) -9223372036854775776LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (-9223372036854775797LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -9223372036854775792LL))))));
                var_30 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_7)))) && (((/* implicit */_Bool) min((-9223372036854775785LL), (arr_56 [i_1] [i_13] [10U])))))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_1])) && (((/* implicit */_Bool) -536870930))))))))));
                var_31 &= ((/* implicit */unsigned long long int) (short)7);
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(min((var_5), (((/* implicit */unsigned int) (signed char)0))))))) & (var_8)));
            }
            for (unsigned short i_18 = 0; i_18 < 16; i_18 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_19 = 1; i_19 < 12; i_19 += 3) 
                {
                    var_33 = ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1))))), (((/* implicit */long long int) ((unsigned short) 9223372036854775784LL)))));
                    var_34 |= ((/* implicit */_Bool) var_11);
                }
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    var_35 = ((/* implicit */int) max((18446744073709551586ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_57 [10LL] [i_18] [i_13] [i_1])) + (var_8))))));
                    arr_70 [11LL] [i_13] [i_13] [i_20 - 1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) 2147483647)), (4294967295U)))), (((((/* implicit */_Bool) var_5)) ? (-9223372036854775785LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))));
                }
                for (unsigned int i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    arr_73 [i_1] [i_13] [i_13] [14U] [14U] [i_21] = ((/* implicit */unsigned int) (signed char)-116);
                    arr_74 [i_1] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) + (max((((/* implicit */unsigned long long int) 9223372036854775787LL)), (var_7)))))) ? (((((/* implicit */int) min((var_6), ((unsigned short)9)))) ^ ((~(((/* implicit */int) var_6)))))) : (((((((/* implicit */_Bool) var_6)) ? (4095) : (((/* implicit */int) var_10)))) & (((/* implicit */int) (_Bool)1))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_22 = 1; i_22 < 13; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) 18446744073709551593ULL))));
                            var_37 -= ((/* implicit */unsigned long long int) ((unsigned int) 4095));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (signed char i_24 = 3; i_24 < 12; i_24 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_25 = 0; i_25 < 16; i_25 += 4) 
            {
                for (unsigned int i_26 = 0; i_26 < 16; i_26 += 4) 
                {
                    {
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) + (65535U)));
                        arr_87 [i_1] [i_24] [i_1] [i_24] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)250)), (((((29ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) ^ (((/* implicit */unsigned long long int) ((unsigned int) -1LL)))))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (unsigned short)65535))));
        }
        var_40 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)1)), (2147483625)))) : (4293935104U)))));
    }
}
