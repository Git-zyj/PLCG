/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229828
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_10 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44188))) : (var_5)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_14 [8U] [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1]);
                        var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_13 [0LL] [0LL] [i_3] [i_3]) : (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_3] [i_3]))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_12 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_3 - 1]))));
                            arr_19 [(signed char)8] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_1]))))) : (arr_8 [i_0] [i_1] [i_2] [i_3])));
                        }
                    }
                } 
            } 
            var_13 = ((/* implicit */long long int) ((unsigned int) (unsigned short)12505));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 7; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */int) (~(arr_6 [i_0])));
                            arr_26 [i_0] [i_1] [i_1] [(signed char)5] [i_1] = ((/* implicit */unsigned int) (~(-1550878304)));
                        }
                    } 
                } 
                arr_27 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)31821);
            }
            for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) | (arr_13 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) (unsigned short)35755))))) : ((-(((/* implicit */int) var_3))))));
                var_16 = ((/* implicit */unsigned short) 9223372036854775807LL);
            }
            for (unsigned int i_9 = 2; i_9 < 8; i_9 += 1) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 1297202605232417727LL)) ? (5815232998725774876ULL) : (((/* implicit */unsigned long long int) 684269613))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_20 [i_0] [i_9] [i_9 + 1])) : (((/* implicit */int) var_0))));
                arr_33 [i_1] [i_1] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-8031704277517448635LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((arr_9 [i_0] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1]))))))));
                arr_34 [i_0] [i_1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (arr_9 [i_0] [i_1])));
            }
        }
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_11 = 4; i_11 < 10; i_11 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_11 + 1])) >> (((arr_28 [i_0] [i_10] [(signed char)9] [i_11 - 4]) - (320053301967980826LL)))));
                var_20 -= ((/* implicit */unsigned int) (-(var_5)));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_42 [i_0] [i_12] = ((/* implicit */signed char) (-(var_8)));
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_37 [i_0])))))))));
                    arr_45 [i_0] [i_12] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_44 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (12631511074983776726ULL)));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_0] [i_12])) ? ((-(arr_9 [i_12] [(unsigned short)4]))) : (((arr_21 [i_15]) ? (3700874962U) : (var_8)))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_12] [2LL])) ? (arr_24 [i_0] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [(unsigned short)4] [i_10] [i_12] [i_14]))))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551585ULL)) ? (7143828119871573311ULL) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) 883827384U)) || (((/* implicit */_Bool) 6LL)))))));
                    }
                    for (unsigned int i_16 = 2; i_16 < 10; i_16 += 3) 
                    {
                        arr_53 [5U] [i_0] [i_12] [i_10] [i_0] = ((((/* implicit */_Bool) -8805179043682583005LL)) ? (var_8) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_12] [i_12] [i_14] [i_16 - 1]))))));
                        var_25 = ((((/* implicit */_Bool) (-(4012235878U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43659)) ? (((/* implicit */int) arr_20 [i_0] [i_10] [i_12])) : (((/* implicit */int) (unsigned char)192))))) : ((-(7143828119871573311ULL))));
                        var_26 -= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)44188)) < (((/* implicit */int) var_0))))) : (((((/* implicit */int) arr_20 [i_12] [i_12] [i_16 + 1])) ^ (((/* implicit */int) (unsigned short)44193)))));
                        var_27 = ((((/* implicit */_Bool) arr_15 [i_0] [i_12] [i_16 - 1] [i_16 - 1] [6U] [i_14])) || (((/* implicit */_Bool) arr_15 [i_0] [i_12] [i_16 - 2] [i_14] [8U] [i_10])));
                    }
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [0LL] [i_12] [i_10] [0LL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
                }
            }
            for (signed char i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                arr_57 [i_0] [(short)7] [(short)7] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_35 [i_0] [i_10] [i_17]) % (arr_8 [i_0] [i_0] [i_10] [i_17])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_0] [i_10] [i_17] [i_17] [3LL] [3LL]))));
                var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_17] [i_10] [i_10] [i_0] [i_0] [i_0]))));
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)-15)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [(unsigned short)8] [i_10] [i_10] [(short)2])))))))));
            }
            var_31 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)147)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6)))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
        {
            for (unsigned int i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                {
                    arr_64 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_18] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_18] [i_19]))) : (arr_58 [i_0] [i_18])));
                    var_32 = arr_11 [i_0] [i_18] [i_19] [i_19] [i_18] [5LL];
                }
            } 
        } 
        arr_65 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_54 [i_0] [i_0] [i_0]))));
    }
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) (short)7501)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1023)) && (((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) min((var_2), (var_0))))));
    var_34 |= ((/* implicit */unsigned char) ((1143316127U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))));
    var_35 = min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))) != (((/* implicit */long long int) var_6))))) / (((/* implicit */int) var_2))));
}
