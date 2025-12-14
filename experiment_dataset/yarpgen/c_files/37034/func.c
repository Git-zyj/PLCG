/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37034
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_4))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (min((arr_0 [i_0]), (((/* implicit */unsigned int) var_2))))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)24433))))) : (min((var_9), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [1ULL])))))) : (min((var_1), (((/* implicit */unsigned int) var_8))))))));
        var_18 |= ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)41103)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (4780834140464672879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) == (((/* implicit */unsigned long long int) arr_0 [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (arr_4 [i_1])))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41102)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (unsigned char)184))));
        arr_7 [i_1] = ((/* implicit */unsigned char) var_2);
        arr_8 [(unsigned char)7] [i_1] &= ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) 4111887289U)) ? (13ULL) : (1ULL)))) + (((/* implicit */unsigned long long int) min((arr_4 [i_1]), (arr_4 [i_1]))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)13727)))), (((/* implicit */int) (unsigned char)23)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2])))));
        arr_12 [i_2] = ((/* implicit */unsigned short) ((var_4) + (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_2))))), (min((arr_1 [i_2]), (((/* implicit */unsigned long long int) var_12))))))));
    }
}
