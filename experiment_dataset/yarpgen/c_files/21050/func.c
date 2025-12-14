/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21050
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) var_2)) % (((unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((1098813738) % (1804756974))))))) & (((((((/* implicit */int) var_0)) + (2147483647))) << (((arr_1 [20]) - (2353313497U)))))));
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(-1098813724)))), (arr_0 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (237080436U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) 4057886870U)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (9762152747297694122ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))));
        var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 1098813741)) && (((/* implicit */_Bool) 72057594037927935LL)))))), (((((/* implicit */_Bool) ((var_2) - (((/* implicit */int) var_7))))) ? (max((15665869317399942030ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (5053340080444617631ULL)))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [22ULL])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_10 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) var_4)) ? (max((var_6), (((long long int) 7618218171749684612ULL)))) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_1]))), (((((/* implicit */_Bool) 7846683487000196189ULL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        }
    }
    var_20 = ((/* implicit */unsigned char) min((((max((var_6), (((/* implicit */long long int) var_4)))) / (((/* implicit */long long int) (-(var_1)))))), (((/* implicit */long long int) var_8))));
}
