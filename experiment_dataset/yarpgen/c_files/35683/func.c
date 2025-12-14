/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35683
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
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_0 - 1])) : (var_7)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_2 [i_0 + 1] [i_2 - 2])) : (9223372036854775807LL)))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) min((4294967295U), (arr_2 [13LL] [i_2])))) ? (arr_2 [i_3 - 2] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [(short)0] [i_4] [i_4])) > (((/* implicit */int) var_1)))))))) : ((-(arr_1 [i_2 - 2] [i_0 + 1])))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 3669119215986456246LL))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    arr_16 [(short)18] [(unsigned char)16] [i_1] [i_0] = ((/* implicit */unsigned int) var_2);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 1) 
                        {
                            {
                                arr_23 [(unsigned short)1] [9LL] [(unsigned short)10] [i_1] [(unsigned short)5] [i_0] = ((/* implicit */unsigned long long int) (~(arr_2 [i_6] [i_1])));
                                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)22))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 22; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)234)) && (((/* implicit */_Bool) -8722175802175744550LL)))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned char)21))) : (((var_3) >> (((((/* implicit */int) (unsigned char)255)) - (211)))))));
                                var_22 = (+(((/* implicit */int) (unsigned char)231)));
                            }
                        } 
                    } 
                }
                for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    var_23 *= ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_26 [2] [6LL] [i_1] [19] [i_10] [(short)18] [(unsigned short)10])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) == (arr_5 [i_0] [i_1] [i_10])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        arr_33 [i_1] [i_1] [i_10] [5] [(short)19] [21U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [i_11])) ? (((((/* implicit */unsigned int) ((int) 4294967295U))) - (((((/* implicit */_Bool) arr_0 [(_Bool)0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */short) arr_20 [i_0 + 1] [i_1] [i_11 - 1]))))))));
                        var_24 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (var_7))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min((6760142900687093636LL), (((/* implicit */long long int) arr_32 [18ULL] [i_10] [(_Bool)1] [(signed char)9] [i_1] [i_0]))))))))));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_7 [i_11 - 1] [i_11] [i_11 - 1] [i_0 + 1])))));
                        var_25 -= ((/* implicit */unsigned short) (-((+(((((/* implicit */long long int) var_5)) / (9223372036854775807LL)))))));
                    }
                }
                arr_35 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0])))))));
                var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_10))))), (arr_30 [i_0 - 1] [i_1] [7LL] [i_0] [i_1] [i_1])))) ? (((/* implicit */int) var_9)) : (arr_21 [2ULL] [i_1] [(unsigned char)11] [i_1] [13] [i_0] [i_0])));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : ((~(-8722175802175744550LL))))) & (((/* implicit */long long int) (~(max((var_11), (((/* implicit */int) var_13)))))))));
    var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (max((11716923830959442340ULL), (((/* implicit */unsigned long long int) ((var_1) ? (5700232406965808594LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))));
}
