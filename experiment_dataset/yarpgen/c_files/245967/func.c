/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245967
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((((/* implicit */_Bool) var_10)) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)43149)) + (((/* implicit */int) (unsigned short)43149))))))) % (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) % (-790029237))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_17 = (~((((_Bool)1) ? (var_6) : (((/* implicit */int) var_0)))));
        arr_3 [i_0] = ((((/* implicit */unsigned long long int) var_15)) * (((13888111411630474356ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) (~((~(min((((/* implicit */long long int) var_1)), (var_15)))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+((+((~(((/* implicit */int) (unsigned short)39433)))))))))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_5)) % (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_13))) : (((/* implicit */unsigned long long int) (+(var_6))))))));
}
