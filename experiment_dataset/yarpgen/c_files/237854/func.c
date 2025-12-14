/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237854
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_11 ^= arr_2 [9LL];
        arr_4 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) < (1672141641U))) ? (2622825654U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [12U] [(unsigned char)12])) : (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned char) (signed char)127))))))))));
    }
    var_12 = ((/* implicit */_Bool) var_10);
}
