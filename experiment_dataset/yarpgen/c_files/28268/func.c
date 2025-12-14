/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28268
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned long long int) (((~(-2707154994286972077LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1453850500))))))))) : (((18446744073709551600ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)126)) >> (((((/* implicit */int) arr_0 [(_Bool)1])) - (13766))))))))));
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 6ULL))))))))));
    }
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) != (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (16ULL))))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (var_6))))));
}
