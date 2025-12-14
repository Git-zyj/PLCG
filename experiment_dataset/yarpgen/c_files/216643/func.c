/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216643
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
    var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) : (min((var_10), (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) (unsigned char)247)), (4211678789U)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [(short)4] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_11)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) : (arr_1 [8LL])))));
        var_14 -= ((/* implicit */unsigned short) var_11);
        var_15 ^= (~(max((arr_1 [2ULL]), (((/* implicit */unsigned int) var_4)))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13338650175343219083ULL)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)-32))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) (+(var_2))))));
    }
}
