/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234531
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [(_Bool)1] [i_3] [i_2] [6ULL] [i_4 - 2] [i_1] [i_1] = ((/* implicit */signed char) arr_11 [i_0]);
                                var_16 = ((/* implicit */signed char) arr_4 [i_4 + 1] [i_4 - 3] [(_Bool)1] [i_0 + 1]);
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) != (((/* implicit */unsigned long long int) var_5)))))) && (var_10)));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((arr_7 [i_0 + 1]) < (((/* implicit */int) ((_Bool) arr_7 [i_0 + 1]))))))));
                }
            } 
        } 
        arr_15 [i_0 + 1] [(short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 + 1])) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */short) var_7))))) ? ((+(14171508512867903366ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_8 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((int) ((long long int) arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 8; i_5 += 2) 
    {
        arr_19 [2LL] [i_5] = ((/* implicit */unsigned long long int) arr_1 [i_5 + 2]);
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_22 [i_6] &= ((/* implicit */unsigned long long int) ((((arr_18 [i_6] [i_6]) + (2147483647))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_6] [3LL])) : (arr_21 [i_5] [i_6]))) - (43)))));
            var_18 = ((/* implicit */unsigned long long int) arr_10 [i_5] [i_5 + 1] [(_Bool)1] [i_6] [9] [i_6]);
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_8))));
        }
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                var_20 -= ((((/* implicit */_Bool) ((long long int) arr_10 [i_8] [(signed char)11] [1LL] [13] [i_7] [1LL]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_24 [i_7]));
                arr_29 [i_7] [i_7] &= ((/* implicit */long long int) arr_5 [i_5 - 1] [i_5 - 1]);
                var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))) < ((~(((/* implicit */int) arr_6 [15ULL] [i_8 + 2] [5LL] [i_5] [i_5 + 1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_9 = 2; i_9 < 7; i_9 += 1) 
                {
                    var_22 = (_Bool)1;
                    arr_32 [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [(unsigned char)0] [10U] [i_7] [i_8 + 2])) / (((/* implicit */int) var_6))));
                    var_23 = (+(arr_1 [15ULL]));
                    var_24 = ((/* implicit */long long int) var_2);
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_24 [i_7]))));
                }
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) var_3);
                            var_27 &= ((/* implicit */int) arr_16 [i_5 + 2]);
                            arr_39 [i_5] [i_7] [i_8] [i_11] [(unsigned short)1] = ((/* implicit */signed char) var_2);
                            var_28 = ((/* implicit */unsigned int) var_8);
                            var_29 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))));
                        }
                    } 
                } 
            }
            for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    arr_45 [i_5] [i_5] [i_12] [i_5] = ((/* implicit */unsigned long long int) var_7);
                    var_30 ^= ((/* implicit */signed char) arr_28 [(_Bool)1] [i_7]);
                    var_31 = ((/* implicit */unsigned char) var_12);
                }
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    arr_50 [i_5] [i_12] [i_7] [i_7] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [(unsigned short)12] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_5] [4ULL] [i_12] [i_12]))) : (arr_1 [7])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned int) var_13);
                        var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                        arr_53 [i_5] [i_5] [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) arr_17 [i_5]);
                    }
                    arr_54 [i_5] [i_12] [i_12] [i_7] [i_7] [i_5] = ((/* implicit */_Bool) 3985138009644483177LL);
                    var_34 = ((/* implicit */signed char) (~(((((/* implicit */int) var_12)) * (((/* implicit */int) var_7))))));
                }
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_5 + 2] [i_5 - 1])) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) arr_10 [i_5] [i_5 + 3] [i_5 - 1] [i_5 + 3] [i_5 + 1] [i_5 - 1]))));
                var_36 = ((/* implicit */unsigned int) (+(arr_42 [2ULL] [i_5 + 2] [1U] [i_5 + 2])));
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (((!(arr_20 [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_42 [i_5] [i_7] [i_16] [i_16])))) : (((var_10) ? (arr_28 [(_Bool)1] [i_7]) : (arr_42 [i_5] [i_5] [i_5 + 1] [i_5]))))))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 4; i_17 < 9; i_17 += 4) 
                {
                    for (int i_18 = 3; i_18 < 9; i_18 += 2) 
                    {
                        {
                            var_38 = ((unsigned short) (_Bool)1);
                            arr_64 [i_5 - 1] [i_5] [i_16] [i_17 - 1] [i_17 - 1] = ((/* implicit */signed char) arr_1 [i_7]);
                        }
                    } 
                } 
            }
            arr_65 [i_5 + 3] [i_5] = ((/* implicit */unsigned long long int) arr_33 [i_5] [i_5] [i_7] [6] [i_5] [i_7]);
        }
        var_39 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 7; i_19 += 3) 
        {
            for (int i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                {
                    var_40 ^= arr_23 [i_5];
                    arr_72 [i_5] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    var_41 = ((/* implicit */_Bool) arr_5 [i_5] [i_20]);
                    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)77)))))))));
                }
            } 
        } 
        arr_73 [i_5] = ((/* implicit */unsigned long long int) var_4);
    }
    var_43 |= ((/* implicit */short) ((var_2) & (((/* implicit */int) var_10))));
}
