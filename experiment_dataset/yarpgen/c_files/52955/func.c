/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52955
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
    var_11 = (short)32767;
    var_12 = ((/* implicit */signed char) (((~(((var_8) ^ (var_8))))) >> (((min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) var_10)) - (var_2))))) + (1057047447871362320LL)))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */int) (unsigned short)8864)) / (189054511)))))) >= (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (189054511)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_0))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_0)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(var_2))), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0] [i_0])))) : (max((((/* implicit */unsigned long long int) max((var_4), (var_4)))), (min((var_6), (((/* implicit */unsigned long long int) var_1))))))));
        arr_3 [i_0] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) -1658102680)) || (((/* implicit */_Bool) var_0)))))))) - (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_8))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
        arr_4 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((4ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) : (((var_10) >> (((900289885) - (900289876)))))))) : ((~(var_5)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_7)))))));
        var_16 = ((/* implicit */unsigned char) var_4);
    }
}
