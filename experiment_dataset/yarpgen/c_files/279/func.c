/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/279
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_12))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) / (((8388480U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) 0U)) : (18446744073709551610ULL))))) : (((((/* implicit */unsigned long long int) (+(var_12)))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18214754097972925280ULL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_2)))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~((+(((/* implicit */int) var_10)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (arr_0 [i_0])));
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-36))));
                var_18 ^= ((/* implicit */unsigned int) var_8);
            }
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_19 -= ((/* implicit */unsigned char) (-(484384000)));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4])) * (((/* implicit */int) arr_2 [i_4] [i_1 - 2])))))));
                        var_21 &= ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (17U)));
                        arr_19 [i_0 + 1] [i_0] [i_5] = ((/* implicit */signed char) (-(arr_9 [i_1 - 3] [i_0 + 1])));
                    }
                    var_22 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_3] [i_4])) ? (arr_11 [i_0] [i_0 - 1] [i_0 + 1]) : (arr_11 [i_0 + 1] [i_1 + 1] [5U])));
                }
            }
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_2))));
                    arr_24 [i_0] [i_6] &= ((/* implicit */short) 4294967279U);
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_11))));
                        arr_27 [i_0 + 1] [i_0] [i_0 + 1] [(signed char)1] [8ULL] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (4294967279U)));
                    }
                    var_26 = var_10;
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) -178062836))));
                }
                for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    var_28 = ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_1 - 3]) + (((/* implicit */long long int) var_9))));
                    arr_30 [i_0] [i_6] [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) var_11);
                    arr_31 [(signed char)9] [14] [14] [i_0] [i_9] [i_1 + 1] = ((/* implicit */signed char) arr_26 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_9] [i_9]);
                }
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_29 &= ((/* implicit */int) (-(((((/* implicit */long long int) var_12)) + (-1LL)))));
                    arr_36 [i_0] [i_1 + 1] [i_6] [i_10] = ((/* implicit */short) (((~(var_9))) != (((/* implicit */int) ((signed char) 11934590041201427035ULL)))));
                }
                arr_37 [i_6] [i_6] [i_6] &= ((/* implicit */short) (unsigned char)191);
                var_30 *= ((/* implicit */unsigned char) ((_Bool) var_1));
            }
            for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_12]))) * (((9U) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                    arr_42 [(_Bool)1] [i_0] [i_1] [i_12] [i_12] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)211)) && (((/* implicit */_Bool) 17U))));
                    arr_43 [i_0] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_1))));
                }
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-125)))) : (((/* implicit */int) arr_20 [i_0 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 1]))));
                arr_44 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(1U)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))));
            }
        }
    }
    for (unsigned short i_13 = 3; i_13 < 11; i_13 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_13 - 1] [i_13 - 2])) && (((/* implicit */_Bool) arr_29 [i_13 + 1] [14] [i_13 - 1] [i_13] [i_13 + 2] [i_13 + 1]))));
            /* LoopSeq 3 */
            for (unsigned int i_15 = 1; i_15 < 12; i_15 += 2) 
            {
                var_34 = ((/* implicit */long long int) (_Bool)1);
                var_35 |= ((/* implicit */unsigned char) var_12);
            }
            for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (-(arr_32 [0] [i_16] [i_14] [i_14] [i_14] [i_13]))))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    for (unsigned char i_18 = 1; i_18 < 11; i_18 += 1) 
                    {
                        {
                            arr_62 [i_13] [i_13 + 1] [i_13 - 2] [i_13] [i_13 + 1] [(unsigned char)3] [i_16] = ((/* implicit */short) (~(970107057)));
                            arr_63 [i_13 - 2] [i_14] [i_13 - 2] [i_16] [i_16] [i_16] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_17] [i_13 - 1] [i_16]))) - (var_0));
                            var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                        }
                    } 
                } 
                arr_64 [i_13] [(signed char)12] [(_Bool)1] [(_Bool)1] |= ((/* implicit */short) ((arr_56 [i_13 + 1] [i_13 - 3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                /* LoopSeq 1 */
                for (unsigned char i_19 = 4; i_19 < 9; i_19 += 1) 
                {
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_58 [i_13 - 2] [i_13 + 1] [i_19 - 4] [i_16] [i_19 - 2])) || (((/* implicit */_Bool) var_1))));
                    var_39 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)125)))) - ((~(992083020)))));
                    var_40 -= ((/* implicit */signed char) (((-(((/* implicit */int) arr_10 [i_14] [i_16] [12U])))) - (((/* implicit */int) arr_45 [i_13 + 1] [i_19 + 2]))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_20 = 0; i_20 < 13; i_20 += 2) 
                {
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_16])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_4))))) : ((-(var_12))))))));
                    var_42 += ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)218))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)24990))))));
                    var_43 = ((/* implicit */short) (~(225452957U)));
                }
            }
            for (int i_21 = 0; i_21 < 13; i_21 += 2) 
            {
                var_44 = ((/* implicit */unsigned int) arr_61 [i_21] [i_21] [i_14] [i_14] [i_21]);
                var_45 -= ((/* implicit */_Bool) arr_39 [i_13 - 2]);
                arr_74 [i_13] [i_13 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_45 [i_13 - 1] [i_13 + 2])) / (((/* implicit */int) arr_45 [i_13 - 1] [i_13 + 2]))));
            }
            var_46 = ((/* implicit */int) var_7);
            arr_75 [i_13] [1] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0))));
        }
        var_47 = (+((+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-1)))))));
    }
    for (signed char i_22 = 0; i_22 < 16; i_22 += 2) 
    {
        arr_80 [i_22] [i_22] &= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((min((var_12), (((/* implicit */unsigned int) arr_13 [i_22] [i_22] [i_22])))), (((/* implicit */unsigned int) ((arr_35 [i_22] [14] [i_22] [i_22]) && (((/* implicit */_Bool) var_0))))))))));
        /* LoopSeq 1 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_48 = ((/* implicit */short) ((((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)14)))), ((-(((/* implicit */int) var_7)))))) + (2147483647))) >> (((((/* implicit */_Bool) arr_29 [i_22] [i_22] [i_22] [i_22] [i_22] [i_23])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 0U))))) : (((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)1))))))));
            var_49 += ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_1))))));
        }
    }
}
