/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244288
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((var_2), (var_5)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12622)) ? (((/* implicit */int) (short)1659)) : (((/* implicit */int) (short)-32752))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) -9223372036854775796LL)) : (var_10))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 -= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)62368))));
        arr_2 [i_0] = (~(((/* implicit */int) (short)-32752)));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_10)));
    }
}
