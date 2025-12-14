/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225911
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
    var_14 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), (var_7)))), (14U))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_9 [i_0] = ((/* implicit */int) (_Bool)1);
                        var_15 &= ((/* implicit */long long int) 311620767U);
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (_Bool)1))));
                                var_17 = ((/* implicit */short) ((int) ((unsigned char) arr_2 [i_0])));
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) -3210611689594246076LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        arr_20 [i_6] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_17 [i_6])), (var_6)));
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_26 [i_7] [i_7] = ((/* implicit */short) var_12);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) var_2);
                        arr_29 [i_7] [(short)5] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_23 [i_7] [i_7] [i_7] [i_9])));
                        var_19 = ((/* implicit */long long int) 16777216U);
                        arr_30 [i_9] [i_7] [i_7] [i_6] = ((/* implicit */unsigned int) arr_22 [i_7] [i_6]);
                    }
                    for (unsigned char i_10 = 4; i_10 < 11; i_10 += 2) 
                    {
                        var_20 = ((/* implicit */int) var_0);
                        var_21 = ((/* implicit */short) var_10);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_22 ^= ((/* implicit */unsigned int) var_7);
                            var_23 = ((/* implicit */int) var_9);
                            var_24 = ((/* implicit */unsigned long long int) min((arr_25 [i_11]), (var_9)));
                            var_25 *= ((/* implicit */unsigned char) arr_23 [i_6] [i_7] [i_7 + 1] [i_6]);
                        }
                        for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_26 = arr_22 [i_6] [i_7];
                            arr_40 [i_6] [i_7] [i_13] [i_7] [i_13] [10ULL] [i_6] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */long long int) (short)-2634))));
                            arr_41 [i_13] [i_7] [i_8] [i_7] [i_6] = arr_38 [i_13] [i_7] [11LL] [i_8] [i_7] [11LL];
                            arr_42 [(_Bool)1] [i_7] [i_8] [i_7] [(_Bool)1] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3983346508U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_39 [i_6] [i_13]))));
                        }
                        var_27 = ((/* implicit */unsigned int) max((var_7), (((/* implicit */short) arr_33 [i_8] [i_7] [i_8] [i_7] [i_7 + 1]))));
                    }
                }
            } 
        } 
        arr_43 [i_6] = ((/* implicit */int) (short)-2640);
        var_28 = ((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */short) arr_44 [i_14])), (var_13)))), (2697825118U)));
        arr_47 [0U] |= ((/* implicit */unsigned short) max(((_Bool)1), (max((arr_45 [(_Bool)1] [(_Bool)1]), ((_Bool)1)))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        arr_50 [i_15] [i_15] &= (unsigned char)223;
        arr_51 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2319005740603355279LL)) ? (((/* implicit */int) arr_44 [(short)6])) : (((/* implicit */int) (short)-32109))))), (min((var_6), (((/* implicit */long long int) (unsigned char)122))))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (long long int i_18 = 1; i_18 < 11; i_18 += 1) 
            {
                for (short i_19 = 0; i_19 < 13; i_19 += 3) 
                {
                    {
                        arr_61 [i_17] = ((/* implicit */unsigned int) ((short) (unsigned char)197));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 3) 
                        {
                            var_30 = ((/* implicit */_Bool) ((unsigned int) 4053836155U));
                            arr_64 [i_19] [i_17] [i_19] = ((/* implicit */unsigned short) arr_63 [i_20] [i_19] [i_18] [i_18] [i_17] [i_16]);
                            var_31 &= ((/* implicit */unsigned char) arr_49 [i_16]);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_32 -= ((/* implicit */unsigned char) ((_Bool) arr_59 [i_16] [i_18 + 1] [i_21] [i_16]));
                            var_33 ^= ((/* implicit */unsigned int) (unsigned char)48);
                        }
                        arr_67 [i_16] [i_16] [i_18] [i_17] = ((/* implicit */_Bool) arr_58 [i_19] [i_19] [i_17] [i_17] [i_16] [7ULL]);
                    }
                } 
            } 
        } 
        var_34 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_59 [(short)4] [i_16] [0LL] [i_16])) ? (((/* implicit */long long int) 512U)) : (var_6))), (((/* implicit */long long int) (_Bool)1))));
    }
    var_35 = ((/* implicit */unsigned int) ((unsigned short) 130816U));
}
