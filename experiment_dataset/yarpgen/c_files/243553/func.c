/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243553
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_17 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 3]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_0 [i_0]))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_12)))) ? (var_16) : (arr_1 [i_0 + 3] [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_13) : (((/* implicit */long long int) var_9)))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) < (((/* implicit */int) var_8)))))))))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+((((-2147483647 - 1)) ^ (2147483647))))))));
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) var_0)) | (arr_3 [i_1])));
            var_24 = ((/* implicit */short) (+(arr_4 [i_1] [i_2] [i_2])));
        }
        arr_8 [i_1] = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (var_3));
        var_25 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)232))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)60581)) : (2147483647))) : (1968727568)))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                    var_27 -= ((/* implicit */unsigned long long int) ((arr_5 [i_3 + 1]) << ((((~(arr_3 [i_1]))) - (3655785988U)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 4) 
        {
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((var_12), (((/* implicit */long long int) 1968727568)))), (((/* implicit */long long int) var_4)))))));
            arr_18 [i_1] [i_1] = (+(((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) arr_12 [i_5 - 1] [9ULL])))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))) - (var_12)))), (((unsigned long long int) arr_20 [i_1]))));
            arr_22 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_6]))));
            arr_23 [i_1] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) var_15)), (arr_3 [i_1])))));
        }
        for (int i_7 = 1; i_7 < 21; i_7 += 3) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)232)) / (((/* implicit */int) var_5)))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (var_4))))));
            var_31 *= ((/* implicit */unsigned char) (-((+(((/* implicit */int) (short)-32765))))));
            arr_26 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) min((-2147483627), (((/* implicit */int) (short)-14498))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (short)-14483)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_24 [i_1] [i_1] [i_1])), (var_12)))) ? (((4898065470963740870ULL) | (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) var_11))))));
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [5LL] [5LL] [5LL])) : (((/* implicit */int) arr_12 [i_1] [15ULL]))))) ? (((/* implicit */unsigned long long int) min((arr_19 [i_7 + 4]), (arr_19 [i_7 + 3])))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (270017134U)))), (arr_21 [i_7 + 4] [i_7 + 1] [i_7 - 1])))));
            arr_27 [i_7 + 1] [i_7 + 2] &= arr_19 [i_1];
        }
    }
    var_33 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) var_4)) : (max((min((((/* implicit */unsigned long long int) (short)13746)), (3670016ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))))));
}
