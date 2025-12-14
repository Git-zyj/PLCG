/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239495
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_11 = (+(((unsigned long long int) arr_0 [i_0 + 3])));
        arr_4 [i_0] = ((/* implicit */signed char) ((int) ((int) ((var_1) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0]))))));
    }
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 7353704069289897421ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_4))))) ? (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_3)) - (23631))))) : (((/* implicit */int) var_3)))) : (((((((/* implicit */_Bool) 18446744073709551596ULL)) || (((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */int) max((var_6), (((/* implicit */short) var_4))))) : (((int) var_2))))));
    var_13 = ((/* implicit */unsigned char) 7992409419347897036ULL);
}
