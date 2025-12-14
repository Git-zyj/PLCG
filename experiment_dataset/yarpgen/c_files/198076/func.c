/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198076
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) max((var_10), (18446744073709551615ULL)));
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0])))))));
            }
        } 
    } 
    var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (min(((-(var_2))), ((-(18446744073709551615ULL))))));
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
    {
        for (unsigned char i_3 = 4; i_3 < 22; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */int) var_0)) * (((((/* implicit */_Bool) 1483780845)) ? (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1])) : (100136691)))))));
                arr_11 [i_2] [i_2] [i_2] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_3 - 2])) ? (arr_7 [i_2 - 3] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 3] [i_2 - 3]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2 - 2] [i_3 + 1])))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_2 - 3] [i_4] [i_2 - 3] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (383096338U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                                var_15 ^= ((max((max((((/* implicit */unsigned int) arr_9 [i_3])), (var_3))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 383096335U)) == (3472269948455216626LL)))))) << (min((((/* implicit */unsigned long long int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_6])))))), (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 18446744073709551615ULL))));
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        var_17 = ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15966473853244121441ULL)) ? (arr_21 [(short)7] [i_3]) : (((/* implicit */int) var_6))))), (min((var_2), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_2]))))));
                        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) min((var_9), ((unsigned char)234)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) ((signed char) var_0))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_2] [(_Bool)1] [i_3] [i_8])) : (((/* implicit */int) arr_24 [i_2] [i_3 - 4] [i_3] [i_8 + 1]))))))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_0))))) ? (max((var_1), (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_2 - 3] [i_3 - 4] [i_8])) ? (((/* implicit */int) arr_25 [i_2] [i_3] [i_8])) : (((/* implicit */int) arr_25 [i_8] [i_3] [i_8])))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_30 [i_9] [i_2] [i_9] [i_3] [i_2] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (~(var_3)))), (((((/* implicit */_Bool) arr_20 [i_9] [(unsigned char)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) : (arr_5 [i_9]))))) << (((2641287486U) - (2641287443U)))));
                        arr_31 [(unsigned char)11] [i_9] [i_2] = ((/* implicit */unsigned long long int) var_3);
                    }
                    for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((min(((+(var_7))), (max((arr_23 [i_3 - 1] [i_3 - 1]), (((/* implicit */unsigned long long int) (unsigned char)21)))))) | (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_34 [i_2 - 1] [i_2 - 1] [i_3] [i_2 - 1] [i_7] [i_10])), (-3472269948455216627LL))) / (((((/* implicit */long long int) var_1)) + (-4316051418709588073LL))))))));
                        var_22 = ((/* implicit */unsigned long long int) var_0);
                        var_23 += ((/* implicit */_Bool) (-(-5732942121618519084LL)));
                        arr_36 [1LL] = ((/* implicit */unsigned char) (~(min((var_4), (((/* implicit */int) (signed char)-8))))));
                        var_24 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (!(var_6)))))) != (((/* implicit */int) (unsigned char)21))));
                    }
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((max((var_7), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) (unsigned char)13))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_2 + 1] [i_3]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [(unsigned char)19] [i_7] [i_11] [(unsigned char)1])) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_9)))) : (var_5)))) ? (((/* implicit */int) min((arr_20 [i_2 - 3] [i_2 - 2]), (((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_2] [i_3 - 4] [14U])) && (((/* implicit */_Bool) var_1)))))))) : (max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((var_5) >= (var_5))))))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_3 - 2])) > (((/* implicit */int) ((arr_14 [i_2 + 1] [i_2 - 2] [i_3 - 1]) != (-2147483644)))))))));
                        var_28 = (+(((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(signed char)6] [i_2 - 2] [i_3 - 2] [i_3 - 3] [i_3 - 1] [i_3 - 1]))) : ((-(var_3))))));
                    }
                }
                for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    var_29 += ((/* implicit */_Bool) max((min(((+(((/* implicit */int) (signed char)-126)))), (arr_14 [i_12] [i_3] [(unsigned char)16]))), (min((((arr_9 [i_2]) ? (((/* implicit */int) arr_32 [i_2])) : (((/* implicit */int) (signed char)8)))), (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_24 [i_2] [(_Bool)1] [i_3] [i_12]))))))));
                    var_30 = ((/* implicit */unsigned int) var_2);
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-34))) != (arr_12 [i_2] [i_13] [18ULL])))) | (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) ((unsigned int) 5732942121618519086LL))) ? (arr_42 [i_13] [i_13] [i_13] [i_14 + 1]) : ((~(var_7)))))));
                                arr_48 [13U] [i_3] [i_12] [i_13] [i_13] [i_2] = ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                }
                for (long long int i_15 = 1; i_15 < 19; i_15 += 2) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_15] [i_2])) & (((((/* implicit */int) arr_38 [i_3] [i_3 - 2] [i_3 - 4] [i_3 - 1] [i_3] [i_3 - 4])) | (((/* implicit */int) arr_38 [i_3] [i_3 - 2] [i_3 - 3] [i_3 - 2] [i_3] [i_3 - 2]))))));
                    arr_52 [(signed char)9] [i_2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_15 [i_3] [14ULL] [i_15 + 1] [i_15] [i_15 + 4] [i_15]), (((/* implicit */unsigned long long int) var_3)))))));
                }
            }
        } 
    } 
    var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_3)) >= (var_7)))))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((var_3) | (2231655881U)))) : (((((/* implicit */_Bool) var_8)) ? (-3472269948455216627LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))))))));
}
