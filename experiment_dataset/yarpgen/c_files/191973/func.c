/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191973
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
    var_18 = ((((var_0) + (2147483647))) << (((5515831886173614222ULL) - (5515831886173614222ULL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */long long int) (_Bool)1);
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (var_6)))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)110))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (13318407604788227446ULL) : (((/* implicit */unsigned long long int) 684720651U))))) ? (((((/* implicit */_Bool) 5128336468921324173ULL)) ? (var_16) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) 5128336468921324181ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_0 [i_0])))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) & (5128336468921324170ULL)))) ? (max((((/* implicit */unsigned long long int) -442230062)), (13318407604788227434ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) (unsigned char)76)))) : (((((/* implicit */_Bool) 110432293U)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (_Bool)0)))))))));
}
