/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54684
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
    var_15 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8204))) : (var_8)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1477470695U)) ? (((/* implicit */int) ((_Bool) 1477470708U))) : (((/* implicit */int) var_14))))) : (((unsigned int) var_1)));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) (signed char)-28))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) % (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8)))))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) 2817496612U)) ^ (var_3)))))));
}
