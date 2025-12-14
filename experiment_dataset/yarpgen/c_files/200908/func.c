/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200908
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_13 [6LL] [(short)8] [6LL] [i_3] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0]);
                        arr_14 [4U] [i_1] [4U] [i_3] [(signed char)5] = min((arr_7 [i_0] [(unsigned char)9] [i_2] [i_3]), (((/* implicit */unsigned int) var_9)));
                        var_16 ^= ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (short)32767))), (((((((/* implicit */int) (short)6493)) + (-328184843))) & (((/* implicit */int) ((short) var_7)))))));
                        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [(short)4] [i_0] [(short)2])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_1])) ? (arr_9 [i_0] [i_1] [(short)4] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [3U] [i_1])) ? (arr_9 [i_0] [i_1] [(short)6] [(short)8]) : (arr_9 [i_0] [i_1] [i_3] [i_3])))));
                    }
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_7 [1U] [1] [i_2] [(short)8]))));
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (unsigned char)75);
                }
            } 
        } 
        arr_16 [i_0] = ((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) | (((/* implicit */unsigned int) (~(-999797207)))));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max(((-(((/* implicit */int) arr_26 [i_4] [i_5] [i_6] [i_5])))), (((/* implicit */int) (((+(var_6))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4269373594872350027LL)) ? (arr_19 [1U]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((_Bool) ((arr_19 [i_4]) & (arr_19 [i_6])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_4] [i_9] [i_10]))))) ? (((/* implicit */int) (((-(((/* implicit */int) var_7)))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)98)) >= (((/* implicit */int) var_10)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_4] [12ULL])) ? (((/* implicit */int) arr_28 [(unsigned short)0] [12U])) : (var_8)))) || (((/* implicit */_Bool) (short)13389))))))))));
                        var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)54))) - (arr_34 [i_4] [i_4])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((-604201927089665697LL) <= (-6857662211115229318LL)))))), (((/* implicit */int) ((short) min(((unsigned short)40149), (((/* implicit */unsigned short) (short)0))))))));
                        var_23 = ((/* implicit */short) arr_22 [i_4] [i_8] [i_10]);
                        arr_38 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) var_8)) <= (max((287439136U), (((/* implicit */unsigned int) (unsigned short)40153)))))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (((/* implicit */int) ((var_1) <= (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            {
                var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */int) (_Bool)1)) << (((((long long int) arr_42 [i_11] [i_12])) + (84222025887189244LL)))))));
                var_26 = ((/* implicit */signed char) min((17394007528269137951ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767)))))));
            }
        } 
    } 
}
