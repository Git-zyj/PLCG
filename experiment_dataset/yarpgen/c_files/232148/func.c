/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232148
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned short)31282)) : (((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) 873623564U)))))))), (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0 - 2] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)165))))) ^ (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (12469129828897120078ULL) : (17903858219840721641ULL)))));
        var_17 &= 12469129828897120051ULL;
    }
    var_18 = ((/* implicit */signed char) (+(((((/* implicit */int) ((unsigned short) 3933303030U))) >> (((max((((/* implicit */unsigned int) (unsigned short)4870)), (361664263U))) - (361664235U)))))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 312558172U)) ? (442396158098106996ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)105)), (var_11)))) : (((((/* implicit */int) var_3)) / (((/* implicit */int) var_11)))))) >= ((+(((/* implicit */int) var_11)))))))));
}
