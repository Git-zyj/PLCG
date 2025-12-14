/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239512
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((min((arr_0 [i_1]), (((/* implicit */long long int) ((unsigned int) arr_8 [i_0]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)87))) : (2456783209901164068LL)))));
                    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) arr_5 [i_0])))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
        var_12 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) arr_4 [i_0] [i_0] [i_0])));
        var_13 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)-7635)) ^ (((/* implicit */int) arr_3 [i_0])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))) / (2456783209901164068LL)))) ? (((/* implicit */long long int) 4223009410U)) : ((+(2456783209901164068LL)))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_23 [i_6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) 2456783209901164082LL);
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3])) ? (33554431LL) : (((/* implicit */long long int) arr_12 [i_3]))))) ? (((((/* implicit */_Bool) arr_12 [(unsigned short)15])) ? (((/* implicit */int) arr_18 [i_3] [i_4] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_4] [4U])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-6430)) || (((/* implicit */_Bool) (short)1008)))))))) ? (((/* implicit */int) arr_15 [i_6] [i_5 + 1])) : (((/* implicit */int) arr_20 [i_5 + 1] [i_3] [i_3]))));
                    }
                    arr_24 [i_3] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */int) ((short) (~(((/* implicit */int) arr_21 [i_3] [i_4] [i_3])))))), (((arr_14 [i_5 - 1] [i_5] [(unsigned char)11]) ? (((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 2] [i_5 - 2])) : (((/* implicit */int) arr_14 [i_5 - 1] [i_5] [i_5 - 1]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_16 += ((/* implicit */signed char) arr_25 [5] [i_7]);
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_14 [i_3] [i_7] [(_Bool)1]) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_3] [(unsigned short)3] [i_3]))))) ? (((/* implicit */int) ((arr_14 [i_3] [i_7] [i_7]) || (arr_14 [i_7] [i_7] [i_7])))) : (((/* implicit */int) arr_14 [i_3] [i_7] [i_7]))));
            /* LoopNest 3 */
            for (long long int i_8 = 1; i_8 < 15; i_8 += 1) 
            {
                for (int i_9 = 3; i_9 < 15; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_28 [i_3] [i_8 - 1] [i_10] [i_10])))));
                            var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [10U] [i_9 - 3] [i_9 - 3] [i_9 + 2]))))) ? (((long long int) ((short) arr_33 [i_10] [i_9] [i_8] [i_3] [i_3]))) : (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) 2908669604U))))))));
                            arr_35 [i_8] [i_3] [i_8] [i_8] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_18 [i_3] [i_8 - 1] [i_8])))));
                            var_20 = ((/* implicit */int) ((unsigned int) ((_Bool) arr_18 [i_3] [i_8 - 1] [i_9 - 1])));
                        }
                    } 
                } 
            } 
            var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_30 [6LL]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_3] [(unsigned char)13] [i_3]))) ? (((/* implicit */int) ((((/* implicit */_Bool) 32767LL)) && (((/* implicit */_Bool) arr_19 [i_3] [10U]))))) : (((((/* implicit */_Bool) 3709194411U)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (signed char)5))))))) : (((unsigned int) ((long long int) (signed char)-18)))));
            arr_36 [i_3] = max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3] [i_7])) || (arr_14 [i_3] [i_3] [i_7])))), (((signed char) (signed char)-13)));
        }
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21)))))) ^ (((((/* implicit */_Bool) -2456783209901164060LL)) ? (((/* implicit */unsigned long long int) arr_12 [i_11])) : (18446744073709551615ULL)))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                {
                    arr_44 [i_11] = ((/* implicit */signed char) -33554448LL);
                    /* LoopSeq 4 */
                    for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        var_23 |= ((/* implicit */unsigned short) ((arr_46 [i_11] [i_11] [i_13] [i_14] [i_11]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)25))) : (-2456783209901164069LL)));
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((arr_32 [(short)2] [(unsigned char)10]) / (arr_32 [i_13] [i_13]))))));
                            var_25 -= ((/* implicit */signed char) ((_Bool) arr_29 [i_11] [i_13] [i_13] [i_14]));
                            var_26 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)54463));
                            arr_49 [i_11] [i_14] [i_11] [i_14] [i_15] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_13] [i_15])) > (((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */int) arr_21 [i_11] [i_14] [(_Bool)1]);
                        }
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        arr_54 [i_11] [i_11] [i_13] [i_16] [i_16] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_30 [i_11]))) ? (((/* implicit */int) arr_30 [i_11])) : (((((/* implicit */_Bool) arr_50 [i_16] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_50 [i_13] [i_11]))))));
                        var_28 = ((/* implicit */long long int) arr_21 [i_11] [i_11] [i_13]);
                    }
                    for (unsigned int i_17 = 2; i_17 < 15; i_17 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_17 - 2] [i_17 - 2] [i_17 - 1] [i_17 + 2] [i_17 - 2] [i_17 - 2])) ? (((/* implicit */int) arr_45 [i_17 + 1] [i_17 + 1] [i_17 + 1] [(signed char)13] [i_17] [i_17 + 1])) : (((/* implicit */int) arr_45 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17] [i_17 + 1] [i_17]))));
                        arr_57 [i_17] [i_11] [i_12] [i_11] [i_11] = ((/* implicit */unsigned short) ((short) arr_45 [(short)1] [i_12] [i_17 - 1] [i_13] [i_12] [i_13]));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)211))) ? (((((/* implicit */_Bool) arr_26 [i_11] [6ULL] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_32 [i_11] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_11] [i_17])))));
                        arr_58 [i_11] [i_11] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_13] [i_12] [i_13] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_21 [i_11] [i_11] [i_11])))) : (((((/* implicit */_Bool) arr_28 [i_11] [i_12] [i_13] [i_17])) ? (arr_48 [i_11] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_12] [i_17])))))));
                        arr_59 [i_11] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned short)50082)) : (((/* implicit */int) arr_42 [i_11] [i_11] [i_13] [i_17 - 1]))));
                    }
                    for (int i_18 = 3; i_18 < 16; i_18 += 1) 
                    {
                        arr_64 [i_11] [i_11] [i_11] [i_12] [i_11] [(_Bool)1] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_12 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11]))) : (arr_22 [8U] [1ULL] [1ULL]))));
                        arr_65 [i_11] [i_11] [i_11] [i_13] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_34 [i_11] [i_11] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_11] [i_12] [i_13] [i_18]))) : (-2456783209901164065LL)))));
                        arr_66 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_18 + 1] [i_18 + 1] [i_18 - 2] [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_11] [i_12] [i_13] [i_13]))) * (arr_41 [i_18] [i_12] [i_12])))));
                    }
                }
            } 
        } 
        arr_67 [i_11] = ((/* implicit */signed char) arr_63 [i_11]);
        var_31 = ((/* implicit */unsigned char) ((short) (unsigned char)219));
    }
    var_32 = ((/* implicit */unsigned long long int) ((unsigned char) var_1));
}
