/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244441
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
    var_19 = ((/* implicit */int) max((var_19), (((var_4) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) : ((~(((/* implicit */int) (unsigned char)4))))));
        arr_3 [i_0] = ((/* implicit */_Bool) min((arr_0 [i_0]), (((unsigned short) (-(((/* implicit */int) (signed char)-111)))))));
        var_21 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (3363628504U))))))) << (((1839951681U) - (1839951660U)))));
    var_23 = ((/* implicit */unsigned short) var_4);
}
