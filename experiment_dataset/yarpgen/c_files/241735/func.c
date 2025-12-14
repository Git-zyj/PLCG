/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241735
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
    var_10 = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) (~(var_2)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) (+((~(((/* implicit */int) var_7))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_8)) - (arr_2 [i_0]))) & (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        var_11 = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */signed char) ((_Bool) (short)0)))));
        var_12 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)-3)), (min((15428492504122851677ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_2 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) ((unsigned short) -1992039699))) : ((-(((/* implicit */int) arr_1 [i_1] [i_1]))))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) : (((long long int) 33554431ULL)))))));
    }
}
