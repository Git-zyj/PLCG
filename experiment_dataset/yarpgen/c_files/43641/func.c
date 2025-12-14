/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43641
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
    var_10 &= ((/* implicit */long long int) var_6);
    var_11 = ((/* implicit */unsigned short) var_6);
    var_12 = ((/* implicit */unsigned short) var_5);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((var_1) ? (((/* implicit */int) (unsigned short)53428)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))) : (((((var_1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) | (var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)232)) : (var_4)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0 - 1])))) : (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_0))))));
        var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 14019315947273021356ULL))))) : (((/* implicit */int) (unsigned char)0))));
    }
}
