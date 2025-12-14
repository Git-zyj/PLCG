/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218370
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
    var_18 = (+(((((/* implicit */_Bool) -4864543036909423769LL)) ? (-1855700463362186291LL) : (-4864543036909423760LL))));
    var_19 -= ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((arr_2 [(short)10]) <= (((arr_2 [(unsigned char)10]) / (-4864543036909423768LL)))))));
        arr_3 [14LL] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 + 2] [i_0 + 2]);
    }
}
