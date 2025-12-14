/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226413
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
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_3 [i_0] [i_0])))) << (((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])), (max((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_8)))))) - (10034127046696374336ULL)))))) : (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_3 [i_0] [i_0])))) << (((((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])), (max((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_8)))))) - (10034127046696374336ULL))) - (3252954512965069251ULL))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (1014117116U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2439)))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (+(arr_5 [i_1]))))) << (((((/* implicit */int) (signed char)-16)) + (44)))));
                }
                arr_12 [i_0] [i_1] = ((/* implicit */short) (-(min((1559772488U), (((/* implicit */unsigned int) ((3802387487125017991ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((var_16), (min(((+(((/* implicit */int) arr_27 [i_6 + 1] [i_6 + 2] [10U] [i_6 + 2] [i_6])))), (((((/* implicit */int) arr_27 [i_6 + 1] [i_6 + 2] [(_Bool)1] [i_6 + 2] [i_6 + 1])) - (var_10)))))));
                                var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 2735194807U)), ((+(15638899698801691960ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                    {
                        arr_30 [(_Bool)1] [(_Bool)1] [i_5] [i_3] [i_5] = 2932128275U;
                        arr_31 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_26 [(signed char)11] [(signed char)11] [(signed char)11] [i_8])))) ? (var_6) : (((/* implicit */unsigned int) arr_15 [i_3] [i_4] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_12))))))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_18 [(unsigned short)0] [i_4] [(unsigned short)13])), (((-1956412803) - (0)))))) ? (arr_19 [i_8] [4U] [i_3]) : (((/* implicit */int) (short)32767))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                    {
                        arr_34 [(signed char)18] [i_4] [(short)15] [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) ((((unsigned long long int) 2147483647)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-21))));
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), (var_12))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 21; i_11 += 3) 
                    {
                        arr_39 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */_Bool) arr_37 [i_3] [i_3] [i_3] [i_11 + 1]);
                        arr_40 [20U] [8ULL] [8ULL] [i_3] &= ((/* implicit */unsigned short) 15638899698801691960ULL);
                    }
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) var_2)), (0U))))) ? (17839981081596831556ULL) : (((/* implicit */unsigned long long int) ((var_8) << (((/* implicit */int) ((var_0) < (var_0)))))))));
    var_23 ^= ((/* implicit */signed char) (unsigned short)65535);
}
