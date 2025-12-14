/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249613
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_2))));
    var_13 = ((((/* implicit */unsigned long long int) -993593910)) > (((((/* implicit */_Bool) (signed char)24)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_8)));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) : (arr_1 [i_0]))))))));
    }
}
