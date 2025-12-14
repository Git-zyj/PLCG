/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26568
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
    /* vectorizable */
    for (short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */short) ((((/* implicit */int) var_15)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                                var_19 = ((/* implicit */signed char) 4U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (signed char)41);
                                var_21 ^= ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_3 [i_0])))) & (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */_Bool) arr_13 [8LL] [8LL]);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) 4U);
    }
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        var_24 = ((/* implicit */_Bool) var_7);
        /* LoopSeq 1 */
        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_9 = 2; i_9 < 10; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 3; i_10 < 10; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            arr_34 [i_7] [i_8 + 1] [(signed char)3] [i_10 - 3] [i_11] = ((/* implicit */unsigned char) min(((+((-(((/* implicit */int) (unsigned char)151)))))), ((+(((/* implicit */int) ((unsigned short) var_8)))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7] [i_9] [i_11]))))) < (((int) (_Bool)1))))), (((((/* implicit */int) min((arr_0 [i_10 - 1]), ((short)-15976)))) + (((/* implicit */int) arr_24 [i_7])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_7)) == (-1)))), (arr_26 [i_7] [(unsigned short)5] [i_12] [2U])))), ((~((+(((/* implicit */int) (short)(-32767 - 1)))))))));
                            arr_39 [i_12] = ((/* implicit */short) min(((((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)18)))) | (((((/* implicit */int) var_15)) - (((/* implicit */int) arr_25 [i_7] [i_8 - 1] [i_7])))))), (((/* implicit */int) arr_28 [i_12] [i_8] [i_8] [i_7]))));
                            var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)0)), (((unsigned int) arr_25 [i_8] [i_8] [9U]))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) arr_11 [i_7] [i_8] [i_7] [i_12] [i_7]))), (((29U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80)))))))) ? (((/* implicit */int) arr_10 [i_7] [i_8 + 2])) : ((+((-(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                arr_40 [i_7] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                var_29 += ((/* implicit */long long int) var_5);
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 10; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_19 [i_8] [i_14 + 1] [i_9 - 1] [i_8 + 2] [(signed char)2] [i_7]))));
                            var_31 = ((/* implicit */short) arr_9 [i_7] [i_8] [i_9] [i_8] [i_15]);
                            arr_46 [i_7] [i_7] [(signed char)10] [i_7] [i_15] = ((/* implicit */unsigned char) (unsigned short)48372);
                        }
                    } 
                } 
            }
            for (int i_16 = 2; i_16 < 9; i_16 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 11; i_17 += 2) 
                {
                    var_32 = ((/* implicit */int) (_Bool)1);
                    var_33 = max(((-((+(((/* implicit */int) (_Bool)1)))))), ((~((~(((/* implicit */int) (_Bool)1)))))));
                    var_34 = var_2;
                }
                for (unsigned int i_18 = 1; i_18 < 9; i_18 += 3) 
                {
                    var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */signed char) var_11)), (arr_1 [i_8] [i_8]))))))) ? (min((min((arr_22 [i_16]), (((/* implicit */long long int) arr_29 [i_7] [i_8 + 2] [i_7] [i_18])))), (((/* implicit */long long int) 2133146568U)))) : (((/* implicit */long long int) (-((-(1097034806U))))))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                    var_37 = arr_26 [i_7] [i_16 - 2] [i_16 - 2] [i_16 - 2];
                }
                var_38 = ((/* implicit */short) (_Bool)1);
            }
            for (unsigned int i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 524287)) ? (arr_36 [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_21 [i_19]), (((/* implicit */unsigned long long int) (~(var_0))))))) ? (((/* implicit */int) ((signed char) arr_32 [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 2]))) : (((/* implicit */int) min((arr_7 [i_7] [i_7] [i_19]), (((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_7] [i_7])) < (((/* implicit */int) (unsigned short)55607))))))))));
                var_41 &= ((/* implicit */long long int) ((var_3) + (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_15)))))))));
            }
            var_42 = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */_Bool) var_14)) || (arr_10 [i_7] [i_7]))), ((_Bool)1))));
        }
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (unsigned char i_21 = 3; i_21 < 9; i_21 += 2) 
            {
                for (unsigned short i_22 = 0; i_22 < 11; i_22 += 1) 
                {
                    {
                        arr_68 [(signed char)10] [i_22] [i_7] [i_22] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) (!((_Bool)1)))), (arr_17 [i_7] [i_7]))));
                        var_43 *= ((/* implicit */signed char) min((arr_63 [i_20] [(_Bool)1] [i_20] [i_20]), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_57 [i_7] [i_21] [i_21 + 2])) * (((/* implicit */int) var_7))))))));
                        var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) var_9)))));
                        /* LoopSeq 2 */
                        for (signed char i_23 = 0; i_23 < 11; i_23 += 2) 
                        {
                            arr_71 [i_7] [i_7] |= ((/* implicit */unsigned int) (~(max((arr_51 [i_21 - 2] [i_21 - 3] [(_Bool)1] [i_21 - 2] [i_21 - 2] [i_23]), (((/* implicit */unsigned long long int) arr_53 [i_22]))))));
                            var_45 += ((/* implicit */_Bool) arr_63 [i_23] [3U] [3U] [i_7]);
                            arr_72 [i_7] [i_22] [i_7] [i_7] = ((/* implicit */long long int) arr_63 [i_22] [i_21 - 1] [i_20] [i_7]);
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_24] [i_22] [i_20] [i_7]))))) ? (((/* implicit */long long int) min((max((arr_45 [(_Bool)1] [(short)3] [i_21] [i_20] [i_7]), (((/* implicit */int) var_16)))), ((~(((/* implicit */int) (_Bool)1))))))) : ((~(arr_33 [3] [i_22] [i_21] [i_7] [i_7]))))))));
                            arr_77 [i_24] [i_24] [i_7] [i_21] [i_7] [i_20] [i_7] &= (-((+(((/* implicit */int) max((var_15), (((/* implicit */unsigned char) var_5))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_47 = var_5;
    var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)54))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))))))));
}
