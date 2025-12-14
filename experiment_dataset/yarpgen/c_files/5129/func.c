/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5129
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
    var_17 -= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2623719396U)) ? (((/* implicit */int) (unsigned short)52444)) : (((/* implicit */int) (unsigned short)16251))))))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) ((signed char) 1547880637))));
    var_18 = ((/* implicit */unsigned int) min(((-(-1547880636))), (var_5)));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) ((short) -1547880624))) % ((~(((/* implicit */int) arr_0 [i_0 + 4] [i_0 - 2]))))))));
        var_20 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))), (arr_1 [(unsigned short)0])));
    }
    var_21 &= ((/* implicit */int) 4258814002886462843ULL);
}
