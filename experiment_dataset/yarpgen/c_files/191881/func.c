/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191881
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
    var_17 = ((/* implicit */signed char) var_5);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2117766031U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) var_7)))))))) : (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) * (var_1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) min(((~(arr_3 [i_0 + 2]))), (((/* implicit */unsigned long long int) (short)30917))));
                var_19 = ((/* implicit */long long int) (((((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 3])))) ? ((-(((/* implicit */int) arr_1 [i_0] [(unsigned char)8])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 4702300022743633875ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [11U] [11U]))) : (min((arr_2 [i_2 - 2] [i_2 - 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) arr_0 [i_2] [i_2])))))))));
        arr_9 [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)121))))) ? (min((var_9), (var_15))) : (((/* implicit */long long int) ((arr_2 [(unsigned char)20] [(unsigned char)20]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)13204)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (!(((/* implicit */_Bool) -3))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_3 [i_2 - 1])))));
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min((2147483647), (((/* implicit */int) (signed char)121)))))));
            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-122))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
        {
            var_23 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_7)) * (((var_3) ? (var_11) : (var_16)))));
            var_24 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned short)7137)) ? (((/* implicit */int) (unsigned char)247)) : (-2147483647)))));
            arr_15 [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_10))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_2])) : (((/* implicit */int) var_13))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [(short)4])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_3 [i_2])))) ? (3287434424U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 2]))))))));
        }
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2 + 1] [i_5]))))) ? (var_11) : (((/* implicit */unsigned long long int) (~(479357739))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_6 = 4; i_6 < 11; i_6 += 2) 
            {
                arr_22 [i_2] [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */signed char) ((unsigned int) arr_11 [i_2 - 1] [i_6 + 1] [i_6]));
                var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) <= (arr_20 [i_2] [3] [i_6] [i_6]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_30 = var_7;
                            arr_28 [(unsigned short)12] [i_5] [i_6 - 2] [i_7] [(unsigned short)12] = ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
                var_31 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)19)) * (((/* implicit */int) (signed char)-111)))) > (((-1394267063) - (((/* implicit */int) (signed char)121))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */int) var_14)) / (((/* implicit */int) arr_26 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 4; i_10 < 11; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    {
                        var_33 = ((((/* implicit */_Bool) ((long long int) var_16))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((arr_36 [i_2] [i_9] [i_10] [i_11]) > (arr_32 [i_11] [i_10])))));
                        arr_38 [i_9] [i_9] [i_10 - 2] [i_9] [i_11] [(short)7] = ((/* implicit */unsigned long long int) var_0);
                        var_34 = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12654))) : (1007532871U));
                    }
                } 
            } 
            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1394267063)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)126))))) : (((arr_20 [i_2] [i_2] [i_2 - 2] [i_9]) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (-(var_0))))));
            var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_29 [i_9] [i_2 + 1] [i_2 + 2])) < (((((/* implicit */_Bool) arr_3 [5U])) ? (((/* implicit */unsigned long long int) arr_27 [i_2] [i_2] [1ULL] [i_2 + 1] [i_2 + 2])) : (arr_12 [i_2] [i_9] [(signed char)11])))));
        }
        var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_2])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)18052))))) : ((-(arr_19 [i_2]))))))));
    }
    for (unsigned int i_12 = 1; i_12 < 15; i_12 += 2) 
    {
        arr_43 [i_12] = ((/* implicit */unsigned long long int) var_10);
        /* LoopSeq 1 */
        for (int i_13 = 4; i_13 < 14; i_13 += 2) 
        {
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_12] [i_12])) ? (arr_2 [i_12] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12] [i_13])))))) || (((/* implicit */_Bool) ((7106037678688748640ULL) + (((/* implicit */unsigned long long int) arr_39 [i_13] [i_12]))))))) ? (((/* implicit */unsigned long long int) ((int) var_2))) : (arr_3 [i_13 - 1]))))));
            var_40 = ((/* implicit */_Bool) ((unsigned long long int) var_13));
            arr_47 [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) 17849389398902581124ULL)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 2 */
            for (unsigned int i_14 = 1; i_14 < 15; i_14 += 4) /* same iter space */
            {
                var_41 -= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)23)) - (((/* implicit */int) (_Bool)0))));
                arr_50 [i_12] [i_12] = ((/* implicit */unsigned long long int) (!(var_6)));
                var_42 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_39 [(short)13] [i_13 - 1]) > (3485955728U))))) + (var_16))) << (((((long long int) (-(3235228670311669300ULL)))) + (3235228670311669317LL))));
            }
            for (unsigned int i_15 = 1; i_15 < 15; i_15 += 4) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned long long int) (~(((int) 17849389398902581124ULL))));
                var_44 = (((!((!(((/* implicit */_Bool) var_13)))))) ? (2999056803U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_15 - 1] [i_15 - 1] [i_12])) ? (((/* implicit */int) var_10)) : (var_2)))));
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        arr_57 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4150337556U)) ? (4193571562201148548ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_58 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((976575301) > (((/* implicit */int) arr_42 [i_16]))))) / (1896783159)));
    }
}
