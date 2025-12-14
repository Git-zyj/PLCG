/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194686
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned int) ((signed char) arr_0 [i_0] [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned short) (((-(arr_0 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) var_2))))))))));
        var_13 |= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33368)) ^ (((/* implicit */int) (signed char)36))))) ? (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (18563))))));
    }
    var_14 ^= ((/* implicit */short) 8852281568585639452ULL);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8852281568585639452ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8852281568585639423ULL)));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))), (max((16113508521761087952ULL), (var_1))))) : (((/* implicit */unsigned long long int) var_6)))))));
}
