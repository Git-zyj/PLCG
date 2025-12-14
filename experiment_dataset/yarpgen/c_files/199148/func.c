/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199148
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
    var_11 -= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_12 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 + 2])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */signed char) (-(arr_2 [i_1])));
                    var_14 &= ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) (short)-7968)))));
                    var_15 = ((/* implicit */_Bool) max((var_15), ((!(((/* implicit */_Bool) (unsigned char)85))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) arr_8 [i_4] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_4] [i_0] [i_3]))) : (arr_4 [i_0] [i_0] [i_0])))))));
                                arr_10 [i_0] [4] [i_0] [i_4] [i_0] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_5 [i_1] [i_2] [i_1])))))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(signed char)12] [i_4] [(unsigned char)14] [(signed char)8]))))) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_3 - 1] [i_3 - 1] [i_0 + 3] [i_0])) : (((/* implicit */int) arr_1 [i_0 + 2])))))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_9 [19LL] [i_0] [i_1] [i_1] [19LL] [i_0] [i_4]))) ? ((-((~(arr_7 [(signed char)16]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [18U]))))) : (((unsigned int) arr_3 [i_1]))))))))));
                                var_19 &= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3] [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_11 [(signed char)6]))) ? (((((/* implicit */_Bool) (-(arr_12 [22LL] [22LL])))) ? ((+(((/* implicit */int) arr_11 [i_5])))) : ((~(((/* implicit */int) arr_11 [i_5])))))) : ((-(((/* implicit */int) (!(arr_11 [i_5])))))))))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 3; i_7 < 23; i_7 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    var_21 |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8] [(short)12] [(signed char)12])) ? (arr_12 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6] [(unsigned char)13])))))) ? (((((/* implicit */_Bool) (unsigned short)55486)) ? (((/* implicit */unsigned long long int) 988930605U)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5] [i_6])))))))));
                    var_22 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_19 [i_7] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_13 [i_7 + 1] [i_7])) : (((/* implicit */int) arr_13 [i_7 - 1] [i_6]))))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(0ULL)))) ? (((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_5])) ? (arr_15 [i_6] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_9] [i_9] [13U] [13U] [i_9] [(unsigned char)17])) ? (((/* implicit */int) arr_19 [i_5] [(signed char)14] [i_7])) : (((/* implicit */int) arr_14 [i_5]))))))))));
                    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_12 [i_5] [i_6])))) ? (((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6])) ? (arr_20 [i_5] [i_5] [24ULL] [i_7] [i_9]) : (((/* implicit */long long int) arr_25 [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [(short)7] [i_5] [(_Bool)1])) ? (arr_21 [i_7 - 2] [i_7 - 2] [i_6] [i_6] [i_5]) : (((/* implicit */long long int) arr_15 [i_6] [i_7] [i_9]))))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 2; i_10 < 24; i_10 += 3) 
                    {
                        var_25 &= ((/* implicit */_Bool) arr_19 [i_6] [i_7] [i_9]);
                        var_26 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_6] [i_5] [i_7 - 3] [i_10] [i_10 + 1] [i_10]))));
                    }
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_28 [i_11])))))))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_7] [4U]))))))))));
                }
                for (int i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    var_29 *= ((/* implicit */unsigned long long int) ((signed char) (~(8794638537961576171ULL))));
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_28 [i_6])))) ? (((((/* implicit */_Bool) arr_20 [i_7] [i_7 + 2] [i_7 - 3] [i_7] [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_6] [i_6])) ? (((/* implicit */int) arr_11 [2LL])) : (((/* implicit */int) arr_31 [i_5]))))) : (arr_18 [i_7 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6]))))))));
                }
                var_31 = ((/* implicit */long long int) ((unsigned long long int) (-(((long long int) arr_25 [i_5] [i_7])))));
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [9LL] [i_5] [i_5])) ? (((/* implicit */int) arr_29 [i_5] [i_5])) : (((/* implicit */int) arr_31 [i_5]))))))) ? (((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5] [i_6])) ? (arr_22 [i_5] [i_5] [i_5] [i_6]) : (arr_22 [i_5] [i_7] [i_7] [i_6]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_7 - 3]))))))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        {
                            var_33 = arr_23 [i_14] [(short)24] [i_7] [i_6] [i_5];
                            var_34 |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [(signed char)16] [i_7 - 3] [i_7] [i_6])))))));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_20 [i_6] [i_5] [i_5] [i_5] [i_5])) ? (arr_22 [i_5] [i_6] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [(signed char)22]))))))))))));
        }
        for (long long int i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((_Bool) (+(arr_12 [i_5] [(unsigned short)18])))) ? (((((/* implicit */_Bool) arr_16 [i_5] [16U] [i_15])) ? (arr_16 [i_5] [(_Bool)1] [i_15]) : (arr_16 [i_5] [(unsigned char)14] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_19 [i_15] [i_5] [i_15]))))))))))));
            var_37 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_15]))))) ? ((-((-(((/* implicit */int) arr_28 [(_Bool)1])))))) : ((~(((((/* implicit */_Bool) arr_37 [i_5] [i_5] [i_5] [(unsigned short)11] [i_5])) ? (((/* implicit */int) arr_19 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_5]))))))));
            var_38 -= ((/* implicit */unsigned int) ((signed char) (~(((((/* implicit */_Bool) arr_20 [i_5] [(signed char)6] [i_15] [i_15] [23U])) ? (((/* implicit */long long int) arr_12 [i_5] [2])) : (arr_38 [i_5] [(signed char)24]))))));
        }
        var_39 *= ((/* implicit */signed char) (-((+(arr_12 [i_5] [0LL])))));
        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_39 [14LL])))))))));
    }
    for (signed char i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_16] [i_16] [i_16]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [23ULL])))))) : ((~(arr_30 [i_16]))))))))));
        var_42 *= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_31 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_11 [i_16]))))) : (arr_36 [i_16] [i_16] [11U] [i_16] [i_16]))));
        arr_42 [(unsigned char)10] [(unsigned char)10] |= ((/* implicit */_Bool) arr_19 [i_16] [i_16] [i_16]);
        var_43 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_18 [i_16])))) ? (((long long int) (+(arr_12 [i_16] [12])))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [(unsigned short)20] [i_16])))));
    }
}
