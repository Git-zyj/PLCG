/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218334
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_10)) * (((((/* implicit */_Bool) max((18446744073709551612ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_6 [i_0] [i_1]))));
                            arr_10 [i_0] [10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_5 [(_Bool)1] [3ULL] [3ULL] [(short)0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1])) == (arr_4 [i_0] [i_1] [i_0]))))) : (max(((+(18446744073709551596ULL))), (((/* implicit */unsigned long long int) -1))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_5)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [3LL] [i_1])) ^ (((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_2]))))))))) : ((((((_Bool)1) && ((_Bool)1))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 6200312532417105987LL)) : (arr_9 [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned long long int) var_9)))));
                        }
                    } 
                } 
                var_16 = (-((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_17 [i_4 + 1] [i_4 + 1]) : (arr_17 [i_4 - 1] [i_4])));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_4 - 1])))))));
                            arr_26 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_7])) - (((/* implicit */int) arr_25 [11LL]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)15094))))) : ((~(281337537757184LL)))));
                            arr_27 [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [i_7 + 1])) != (var_10)));
                        }
                        arr_28 [(short)4] [i_5] = ((/* implicit */unsigned short) var_2);
                        arr_29 [i_4] [i_5] [i_7] [6U] |= ((/* implicit */_Bool) (-(var_12)));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        arr_33 [i_5] [i_5] = ((/* implicit */signed char) (unsigned short)0);
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_13)), (arr_30 [i_9] [13ULL] [10LL] [(_Bool)1] [10LL] [i_4]))))))));
                        arr_34 [i_5] = ((/* implicit */unsigned int) 0);
                        var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_32 [i_4]))));
                    }
                    arr_35 [i_5] [i_6] [i_5] = ((((/* implicit */_Bool) ((signed char) arr_18 [15LL] [i_5] [i_6] [15LL]))) ? (((/* implicit */int) arr_18 [i_4 + 1] [i_5] [i_5] [i_6])) : (((/* implicit */int) arr_18 [i_6] [i_5] [i_4 - 1] [i_4 - 1])));
                    arr_36 [0LL] [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) arr_14 [i_6]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_5);
}
