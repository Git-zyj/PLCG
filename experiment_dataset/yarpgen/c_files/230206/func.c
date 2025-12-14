/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230206
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
    var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -860656174245108381LL)) ? (var_9) : (var_8)))))) ? (((/* implicit */long long int) ((((var_12) != (var_8))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-8486)) && (((/* implicit */_Bool) (signed char)127))))))))) : (((((var_11) - (((/* implicit */long long int) ((/* implicit */int) var_5))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
    var_14 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) 4294967295U);
            arr_4 [i_1] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))), (1U)));
        }
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) < (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((unsigned long long int) var_9))))) ? (((arr_1 [i_0]) | (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) || (((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */short) var_2)))))))))));
    }
    for (int i_2 = 4; i_2 < 8; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) var_6);
            var_19 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) var_10)))));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_2 + 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4)));
            var_21 -= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (_Bool)1)), (var_8))) | (min((var_4), (((/* implicit */unsigned int) var_0))))));
        }
        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            arr_13 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2 + 3])) && (((/* implicit */_Bool) arr_12 [i_4] [i_4 - 1] [i_4])))))));
            var_22 = ((/* implicit */_Bool) ((((long long int) arr_12 [3ULL] [i_4 + 1] [i_4 - 1])) / (((/* implicit */long long int) ((int) arr_12 [i_2] [i_4] [i_2 + 1])))));
        }
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((short) 432345564227567616ULL)))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((long long int) ((10ULL) >> (((/* implicit */int) (unsigned char)6))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 - 1])) / (((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 3]))))))))));
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 8; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_5 - 1] [i_5 + 1] [i_5])) && (((/* implicit */_Bool) 9ULL))));
        var_26 = ((/* implicit */unsigned long long int) (-(0LL)));
        arr_17 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 - 1]))) : (14918202073929138701ULL)));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)51036)) ? (((/* implicit */int) arr_12 [i_5 + 2] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_12 [i_5] [i_5] [7ULL]))));
    }
}
