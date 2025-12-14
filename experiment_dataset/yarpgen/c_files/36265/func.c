/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36265
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 4])) + (((/* implicit */int) arr_0 [i_0 + 2]))))), (min((-8438315453360715170LL), (arr_2 [i_0 + 1] [i_0 + 2] [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */short) ((max((8438315453360715170LL), (((/* implicit */long long int) arr_0 [i_0 + 3])))) ^ (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (3879967305U))), (((/* implicit */unsigned int) arr_5 [i_1] [i_2] [5U])))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)21818))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (var_11))), (((unsigned int) (-(((/* implicit */int) (unsigned short)65505))))))))));
                                var_22 &= ((/* implicit */_Bool) (unsigned char)221);
                                var_23 &= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(signed char)2] [i_4] [i_1])) - (((/* implicit */int) (_Bool)1))))), (((arr_1 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65505))) : (2001345061U))))), (((2001345061U) - (((unsigned int) arr_4 [i_0 + 2] [i_0 + 2] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            {
                var_25 *= min((((unsigned int) var_13)), (((((((/* implicit */_Bool) var_11)) || ((_Bool)1))) ? (2293622235U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_13 [7ULL]))))))));
                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_0 [i_6]), ((unsigned short)7462)))) - ((~(((/* implicit */int) (unsigned char)255))))));
                /* LoopSeq 3 */
                for (unsigned char i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    var_27 &= ((/* implicit */unsigned char) var_1);
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            {
                                arr_24 [i_9] &= ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_11 [(short)15] [i_7 + 1] [i_7] [i_8] [i_9] [i_6])) | (arr_22 [i_5] [i_7 + 1] [i_7 + 1] [i_5] [i_7 + 1]))));
                                var_28 &= max((((/* implicit */unsigned int) -312064855)), (min((((unsigned int) (unsigned char)0)), (((/* implicit */unsigned int) arr_13 [i_7 - 1])))));
                                var_29 &= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min((312064852), (((/* implicit */int) var_6))))), (arr_20 [i_5] [i_5] [i_5] [i_5] [i_9] [i_5]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((5718431986086751854ULL) != (5718431986086751854ULL)))), (((unsigned char) -8438315453360715180LL)))))));
                                var_30 += max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)70)))))))), ((-(((/* implicit */int) arr_15 [i_7 - 1])))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (_Bool)1))));
                                var_32 *= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_11])) ? (((/* implicit */int) ((unsigned char) arr_26 [(short)2] [i_6] [(short)2] [i_6]))) : (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    var_33 -= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_1)), (arr_7 [4LL] [0LL] [0LL] [i_10]))) - (((/* implicit */unsigned long long int) ((arr_6 [i_6]) ? (min((2047LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) arr_22 [i_5] [i_5] [i_5] [10LL] [i_6])))))));
                }
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    var_34 &= ((/* implicit */unsigned int) (((+(arr_18 [i_5] [i_5] [i_5] [i_13]))) != (((/* implicit */unsigned long long int) min((1782869391U), (((/* implicit */unsigned int) -148798244)))))));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) max((min((min((((/* implicit */long long int) (signed char)9)), (-2523140651003666776LL))), (((/* implicit */long long int) arr_23 [i_6] [13LL] [i_13] [13LL] [i_13] [i_6] [i_6])))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)511))))))))));
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_10) + (2293622234U)))) >= (min((((/* implicit */unsigned long long int) ((int) arr_26 [i_5] [i_6] [13ULL] [i_13]))), (((18219121182242556367ULL) - (((/* implicit */unsigned long long int) arr_23 [i_13] [9] [i_6] [i_6] [i_5] [(short)13] [i_5])))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        var_37 &= ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) (short)-15410)), (1392435472772354260LL)))));
                        var_38 |= ((/* implicit */signed char) -1568067122);
                    }
                    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((min((((/* implicit */int) ((2001345061U) >= (2511991500U)))), (((((/* implicit */_Bool) 1746400790U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-17382)))))) <= (((/* implicit */int) ((signed char) var_13))))))));
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) max((8438315453360715170LL), (((/* implicit */long long int) max((arr_28 [i_5] [i_6] [i_13] [i_15] [i_15]), (arr_28 [10U] [i_15] [i_13] [i_6] [i_5])))))))));
                    }
                }
            }
        } 
    } 
}
