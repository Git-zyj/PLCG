/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232992
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
    var_15 = ((/* implicit */signed char) ((max(((-(var_0))), (((/* implicit */unsigned int) var_7)))) >> (((var_3) - (5127044772458348202ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) var_6)) ? (arr_2 [3U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))))));
                arr_6 [i_0] [7LL] [i_0] = ((/* implicit */unsigned short) var_9);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) 3932160);
                            arr_14 [(unsigned char)7] [(_Bool)1] [i_2] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */long long int) arr_13 [i_2] [i_2]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) -3932133)) ? (arr_2 [i_0]) : (arr_2 [i_1]))));
                var_19 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)21] [(signed char)3] [(unsigned char)21])) ? (((/* implicit */int) (unsigned short)16913)) : (3932160))))))), (((max((2391457595910351549ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) >> (((/* implicit */int) ((_Bool) 12250516092596016185ULL))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) 1195909391))))) ^ (((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) -691668532198659924LL))));
    /* LoopNest 3 */
    for (short i_4 = 3; i_4 < 9; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (long long int i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) var_1)), (arr_13 [i_5] [i_6 - 2]))));
                                arr_30 [i_8 - 1] [i_7] [i_7 - 1] [i_5] [i_5] [i_4] [5] = ((((((/* implicit */_Bool) -4)) ? (((/* implicit */int) (unsigned short)13371)) : (-2147483635))) + (3932132));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((((long long int) max((((/* implicit */unsigned int) arr_12 [i_5] [i_6] [i_9] [i_10])), (26U)))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_4 + 2] [i_4 - 1])) * (((/* implicit */int) arr_7 [i_4 + 2] [i_4 - 1])))))));
                                var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-933264112)))) ? (arr_35 [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_4 [i_4] [i_4]))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_28 [i_4] [i_4 + 2] [i_4] [i_5] [i_6 - 2]), (arr_28 [i_4 - 3] [i_4 + 2] [i_4] [i_6] [i_6 - 2]))))) : (max((((long long int) arr_28 [(_Bool)1] [i_5] [(signed char)7] [i_9] [i_10])), (((/* implicit */long long int) max((((/* implicit */short) var_7)), (arr_27 [i_4]))))))));
                                arr_36 [i_4] [0LL] [i_6 - 1] = ((/* implicit */unsigned long long int) min((((arr_11 [(short)3] [(short)3] [i_4] [i_4 + 1]) + (arr_11 [i_4] [i_4] [i_4] [i_4 + 1]))), (((/* implicit */unsigned int) (unsigned short)28417))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((~(-38088783))), (((/* implicit */int) arr_0 [i_4] [i_4]))))), (min((arr_13 [i_6] [i_6]), (max((var_3), (((/* implicit */unsigned long long int) var_11)))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 3; i_11 < 9; i_11 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_34 [4ULL] [i_4 + 2] [i_4] [i_4 + 1] [i_6 - 1])) ? (max((((/* implicit */int) arr_26 [i_4] [i_4 - 3] [i_4 + 2] [(_Bool)1])), (var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_4 - 1])))))))));
                        arr_39 [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_26 [i_11] [i_11 + 1] [i_11] [i_11 - 1]))) ? (min((((((/* implicit */unsigned long long int) var_12)) * (arr_13 [i_5] [(unsigned short)12]))), (((/* implicit */unsigned long long int) arr_16 [i_4 - 3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_4 - 1] [i_6] [i_11 + 1] [i_6] [i_6 - 1])) ? (((/* implicit */int) arr_28 [i_4 + 1] [i_5] [i_11 - 1] [10LL] [i_6 - 2])) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                    {
                        arr_42 [i_4 - 2] [i_5] [i_6 - 2] [i_12] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (min((((/* implicit */unsigned int) (unsigned short)65535)), (arr_11 [i_6 + 1] [i_6 - 1] [4LL] [i_6 - 2]))) : (((((/* implicit */_Bool) arr_11 [i_6] [i_6 - 1] [i_6 - 2] [i_6 - 1])) ? (arr_11 [16] [i_6 + 1] [(signed char)15] [i_6 + 1]) : (arr_11 [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2])))));
                        var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_37 [i_12] [7ULL] [i_5] [(signed char)3] [i_4 + 2] [(unsigned short)6]), (((/* implicit */short) ((signed char) var_13)))))) ? (min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5]))) : (15U))), (((/* implicit */unsigned int) (signed char)86)))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_26 [i_4] [i_5] [i_6] [i_12])))), (((/* implicit */int) (signed char)115)))))));
                    }
                    for (short i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) (-(max((((unsigned long long int) (short)(-32767 - 1))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) var_12)))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 4) 
                        {
                            arr_48 [i_14] [i_13] [i_5] [i_5] [2LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [i_13] [i_13] [i_6 - 1] [i_4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)142)))))))) ? (max((var_12), (((/* implicit */int) arr_23 [i_6 - 2] [i_5] [i_6] [i_13])))) : (((((((/* implicit */int) (unsigned char)89)) < (((/* implicit */int) (unsigned char)14)))) ? (((/* implicit */int) ((_Bool) arr_18 [i_13] [i_5]))) : (((/* implicit */int) arr_16 [i_14 + 2]))))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((signed char) 804649597513916099LL)))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_4 + 1] [i_5] [14]))))) ^ (var_13)));
                            var_30 += ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) arr_41 [i_4] [i_5] [(signed char)4] [i_13]))), (((-7LL) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4])))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            arr_51 [(short)4] [i_6] [i_15] = max((((((/* implicit */unsigned long long int) (-(arr_46 [3ULL] [3ULL] [i_6 + 1] [i_13] [i_6 + 1])))) / (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_50 [i_4] [i_15] [i_6 - 2] [i_4] [i_15] [i_15] [i_15]))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_16 [i_4])), (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */int) arr_18 [i_5] [4U]))))));
                            var_31 += ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)16)), ((+(((/* implicit */int) arr_43 [i_4 - 2] [i_4 - 2] [i_4 - 2]))))));
                        }
                    }
                    for (short i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                    {
                        arr_54 [i_4 + 1] [i_6] [i_5] [i_4 + 1] = ((/* implicit */unsigned short) ((long long int) ((signed char) var_9)));
                        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_4 - 1] [i_4 - 1] [8] [i_4 + 1])) : (((/* implicit */int) arr_40 [i_5] [(short)5]))))) ? ((~(((/* implicit */int) arr_21 [i_4 - 3] [i_5] [i_6 - 2] [i_16])))) : (((/* implicit */int) ((unsigned short) arr_21 [i_16] [i_6 + 1] [i_5] [(unsigned char)4]))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 3555743239671026203ULL)) ? (((/* implicit */long long int) 3932157)) : (7174313060174193673LL)))))));
                        var_34 = ((((((/* implicit */_Bool) var_10)) || ((!(((/* implicit */_Bool) arr_47 [i_16] [i_4 - 2])))))) ? (arr_41 [i_4] [i_5] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_4 - 1] [(short)19]))));
                    }
                }
            } 
        } 
    } 
}
