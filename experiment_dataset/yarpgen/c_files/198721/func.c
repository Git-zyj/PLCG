/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198721
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
    var_19 = ((/* implicit */unsigned char) 12755531632761281308ULL);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 *= ((/* implicit */short) max((((long long int) (short)6827)), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) 12755531632761281290ULL)) ? (15) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) -20)) && (((/* implicit */_Bool) (signed char)-35)))))))) ? (5691212440948270307ULL) : (((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL)))))));
    }
}
