/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232182
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(arr_3 [4] [i_0] [i_0]))))));
                var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)127))))))) ? (((/* implicit */int) var_1)) : ((+(min((((/* implicit */int) var_13)), (arr_1 [i_1])))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-112))))) ? (((/* implicit */int) (signed char)119)) : (2097148)))));
                                var_21 |= (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned char)255)))))))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    arr_15 [i_5] [i_1] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-127))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 1) 
                    {
                        arr_19 [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-65)));
                        var_23 = ((/* implicit */signed char) max((-414198462), (((/* implicit */int) min(((short)32766), (((/* implicit */short) (signed char)127)))))));
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((-2147483647 - 1)))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-13623)) : (2097148)));
                            var_26 = var_10;
                            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                        }
                    }
                    var_28 = ((/* implicit */signed char) (-(-2097132)));
                    var_29 |= ((/* implicit */signed char) (~(((/* implicit */int) (short)-5648))));
                }
                for (long long int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                {
                    var_30 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_8] [i_0])) ? (var_9) : (var_6)))));
                    arr_27 [i_0] [i_1] [(short)0] = var_3;
                    var_31 = var_1;
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_9 = 2; i_9 < 24; i_9 += 2) 
    {
        for (int i_10 = 2; i_10 < 23; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_32 = ((/* implicit */int) min((var_32), (min((((/* implicit */int) var_11)), (min((arr_37 [i_10 + 1]), (((((/* implicit */_Bool) arr_26 [i_9] [18LL])) ? (var_9) : (((/* implicit */int) var_16))))))))));
                    var_33 = ((/* implicit */signed char) min((max((((/* implicit */int) var_15)), (var_9))), (((((/* implicit */int) (signed char)114)) / (((/* implicit */int) (unsigned char)13))))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        for (short i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */int) min(((short)-32756), (((/* implicit */short) (signed char)-44))));
                                var_35 = max((arr_23 [i_11] [i_13]), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)24))));
                            }
                        } 
                    } 
                    var_36 |= ((/* implicit */_Bool) (+(max((4922254302504983670LL), (((/* implicit */long long int) (short)13608))))));
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)117))))), (var_16))))));
                        var_38 = (!(((/* implicit */_Bool) var_3)));
                        var_39 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)13594)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_16 [i_9 - 1] [i_14] [i_9 - 2] [i_9 - 1]))))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
                    {
                        arr_50 [i_9] [i_10] [(unsigned char)5] [i_15] [i_11] [(unsigned char)5] = ((/* implicit */signed char) (~(arr_1 [i_10 - 1])));
                        /* LoopSeq 2 */
                        for (signed char i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                        {
                            arr_53 [i_15] [i_10] [i_11] [i_11] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [(signed char)9] [(signed char)1] [i_9] [i_15] [i_10 + 2])) : (((/* implicit */int) arr_8 [i_9] [i_9] [i_11] [1] [i_10 - 2]))));
                            arr_54 [22] [i_15] [22] [i_15] [22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_10 - 2] [i_9 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))));
                        }
                        for (signed char i_17 = 0; i_17 < 25; i_17 += 4) /* same iter space */
                        {
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                            var_41 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8))))));
                        }
                    }
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */signed char) (!(var_14)));
                        var_43 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_9] [i_10 - 1] [i_10 - 1] [i_18] [i_10] [i_11]))))) != (arr_3 [(signed char)23] [(signed char)23] [i_18]))))));
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_21 [i_10] [i_10] [i_10 - 1] [i_10] [i_10]), (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) var_15)))))))));
                    }
                }
            } 
        } 
    } 
    var_45 = (~(((/* implicit */int) (unsigned char)255)));
}
