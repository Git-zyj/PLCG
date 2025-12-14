/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52231
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
    var_14 = ((/* implicit */long long int) ((unsigned long long int) ((var_5) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (short)32745))));
                                var_16 -= ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_4])))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
                    /* LoopSeq 4 */
                    for (long long int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_1] [(unsigned short)7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (max((min((12U), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-28))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)32)), (var_3)))) & (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_3)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_5] [i_2] = ((/* implicit */short) (signed char)-123);
                            var_17 = ((/* implicit */long long int) (~(var_7)));
                            var_18 = ((/* implicit */unsigned int) ((unsigned long long int) var_8));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1]))));
                        }
                        for (signed char i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)12] = ((/* implicit */long long int) var_9);
                            var_20 = ((/* implicit */signed char) (~((+(((/* implicit */int) var_8))))));
                        }
                        arr_26 [4ULL] [(signed char)8] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_10);
                        var_21 = ((/* implicit */long long int) min((var_21), (min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (7ULL)))) ? (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_0))))), ((-9223372036854775807LL - 1LL))))));
                    }
                    for (unsigned int i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (unsigned short)10)), (min((((/* implicit */unsigned int) var_3)), (var_13))))), (((/* implicit */unsigned int) (unsigned char)41))));
                        var_23 *= (~((+(arr_13 [i_8] [i_8 - 1] [i_1] [i_1 + 1] [i_1]))));
                    }
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        arr_34 [i_9] [i_9] [6U] = ((((/* implicit */_Bool) var_13)) ? ((~(arr_2 [i_9 - 1]))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_9])) ? (29U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51677)))))))));
                        var_24 = ((/* implicit */short) arr_29 [i_0] [i_1 + 1] [i_2] [(short)9]);
                        arr_35 [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) var_13)))));
                    }
                    for (unsigned int i_10 = 3; i_10 < 12; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) 34359721984LL)))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) min((((unsigned long long int) (short)10823)), (((/* implicit */unsigned long long int) ((signed char) -1LL))))))));
                    }
                    arr_38 [i_0] [i_1 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (short)-8192))) || ((_Bool)1)));
                }
            } 
        } 
    } 
}
