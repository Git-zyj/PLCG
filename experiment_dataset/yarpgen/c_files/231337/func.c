/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231337
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_13))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)-60)) + (88))))) : (((/* implicit */int) min((arr_2 [i_2] [i_1] [i_2 + 1]), (arr_2 [i_2] [i_1] [i_2 + 1])))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        arr_8 [i_0] [i_1] &= ((/* implicit */signed char) (((-(((arr_7 [i_0] [i_1] [i_1] [i_3]) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0])))))) - (((/* implicit */int) arr_1 [i_1]))));
                        var_22 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)59))))), (((arr_6 [i_0 - 1] [i_1]) >> (((arr_6 [i_0 + 1] [i_1]) - (17989641396349210836ULL)))))));
                        var_23 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1] [i_1])))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_4 = 4; i_4 < 18; i_4 += 3) 
    {
        var_24 ^= ((/* implicit */int) arr_9 [i_4]);
        var_25 -= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-60))))) - (((((/* implicit */_Bool) arr_10 [i_4])) ? (arr_10 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 - 2])))))))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8152904877567335454LL)) ? (arr_10 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4])))))) ? (((/* implicit */long long int) max((var_4), (((/* implicit */int) (unsigned short)4630))))) : ((-(511LL))))))))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_4]))))), ((-(max((((/* implicit */unsigned long long int) var_10)), (549218942976ULL))))))))));
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 - 1]))) ^ (arr_10 [i_4 - 1])))) ? (max((arr_10 [i_4 - 1]), (arr_10 [i_4 - 1]))) : (max((arr_10 [i_4 - 1]), (arr_10 [i_4 - 1]))))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        var_29 &= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) max(((unsigned short)57621), (((/* implicit */unsigned short) (short)-2486))))), (arr_6 [(signed char)2] [(signed char)2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12870592951300473618ULL)))))));
        var_30 ^= ((/* implicit */signed char) (-(max((arr_10 [i_5 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_5 + 1] [i_5 + 1]))))));
        var_31 += ((/* implicit */_Bool) arr_3 [12LL] [i_5] [12LL]);
    }
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (-(((/* implicit */int) ((-8889304126673826747LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58)))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) arr_18 [i_6] [i_7] [(unsigned short)6])) ? (arr_10 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7]))))) : (((/* implicit */unsigned long long int) -965028402))))) ? (1152921504606846975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_7])))));
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17036216706226979LL)))))) == (max((var_1), (((/* implicit */long long int) arr_17 [i_6] [i_7])))))))))));
            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_17 [i_6] [i_7]))));
        }
        for (unsigned short i_8 = 3; i_8 < 18; i_8 += 2) 
        {
            var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_6]))))) & (min((((/* implicit */long long int) arr_15 [i_8 - 1])), (17036216706226949LL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [(unsigned short)18]))) >= (var_13)))) : (min((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (signed char)15))))), (((((/* implicit */_Bool) arr_18 [i_6] [i_6] [(unsigned char)18])) ? (((/* implicit */int) (unsigned short)1984)) : (((/* implicit */int) arr_9 [i_6]))))))))));
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_8 - 1] [i_8] [(unsigned char)9]))))), ((-(min((-8889304126673826768LL), (((/* implicit */long long int) -462215068)))))))))));
            var_38 &= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_8 - 1] [i_8 - 2])) * (((/* implicit */int) (_Bool)0))))));
        }
        var_39 -= ((/* implicit */int) arr_24 [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 18; i_9 += 3) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    var_40 ^= ((/* implicit */long long int) ((arr_28 [i_6] [(unsigned short)2] [i_6]) < (((/* implicit */int) arr_25 [i_6] [i_9] [i_10]))));
                    var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (511LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_9 + 1] [(signed char)8])))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (max((-5069357408527827474LL), (((/* implicit */long long int) (short)-16899))))))) ? (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_20 [(signed char)2] [i_10])) : (((/* implicit */int) arr_25 [i_10] [i_9] [i_6])))) % (((/* implicit */int) max(((unsigned short)63832), (((/* implicit */unsigned short) arr_23 [(signed char)8] [(signed char)10] [(unsigned char)4]))))))) : (((/* implicit */int) (unsigned short)65535))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            {
                                var_42 += ((/* implicit */long long int) arr_18 [i_6] [i_9] [i_10]);
                                var_43 ^= max((((/* implicit */int) arr_15 [i_6])), ((((-(((/* implicit */int) arr_34 [i_6] [i_9] [i_11] [i_11] [i_12])))) * (((/* implicit */int) (!(arr_29 [i_11])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_44 += (_Bool)0;
    var_45 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (var_19)))) ? (var_11) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (unsigned char)196)))))))));
}
