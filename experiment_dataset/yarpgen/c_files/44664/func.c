/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44664
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
    var_18 = ((/* implicit */signed char) var_4);
    var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_12)))) ? (var_12) : (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_2 [(_Bool)1] &= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_11)) ? (arr_1 [22]) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) var_5);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 22; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_8 [i_3 - 2] [i_3] [i_3] [i_3 - 1]);
                    arr_11 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) arr_4 [i_3 - 1])) - (110)))));
                    var_22 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) var_3))))) / ((-(65280)))))) ? (min((((((/* implicit */_Bool) (short)-26967)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11981)))));
        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) max((var_5), (var_14)))))) : ((((_Bool)1) ? (-471224745) : (((/* implicit */int) (short)1761))))));
        arr_14 [i_4] [21U] = ((/* implicit */unsigned int) max(((~(var_15))), (((/* implicit */unsigned long long int) arr_6 [i_4]))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        arr_22 [i_4] [i_5] [i_4] [(unsigned char)0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) max((arr_10 [4ULL] [4ULL] [i_4]), (((/* implicit */signed char) arr_15 [i_7] [15U] [i_5]))))))) | (((((((/* implicit */_Bool) arr_9 [i_4])) || (((/* implicit */_Bool) -915965823)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)254)))) : (((/* implicit */int) arr_13 [i_6] [i_6]))))));
                        arr_23 [22U] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */_Bool) var_6);
                        arr_24 [i_4] [i_5] [i_6] [i_7 + 1] = ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (unsigned short)17994)));
                        arr_25 [i_4] [(_Bool)1] [i_6] [i_7] [i_4] [(signed char)13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((65280), (((/* implicit */int) (short)0))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)7399)) && (((/* implicit */_Bool) (unsigned short)11981))))), (arr_19 [i_5] [i_5] [(short)17]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) : (((long long int) var_7))))));
                    }
                    arr_26 [i_4] [i_5] [i_6] = ((/* implicit */signed char) arr_5 [i_4] [i_6]);
                    var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-14240)) | (((/* implicit */int) (signed char)-64))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (var_15)))) : (((/* implicit */int) arr_4 [i_6 - 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14252))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [12U] [(unsigned char)12] [(unsigned char)12] [i_6 + 1]))) : (max((((/* implicit */unsigned long long int) (short)-14254)), (var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_6 - 2] [i_4]))))) : (max((var_4), (((/* implicit */unsigned int) var_7)))))))));
                }
            } 
        } 
    }
}
