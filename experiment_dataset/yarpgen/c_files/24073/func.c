/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24073
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
    var_18 *= ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) arr_0 [(unsigned char)5]);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_0 [5LL]))));
        var_21 ^= ((/* implicit */int) ((unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (arr_0 [i_0]))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55160))) : (arr_0 [4ULL]))))));
        arr_2 [1] &= ((/* implicit */short) (-(((arr_0 [i_0 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_1 [i_0 + 1] [i_0])))))))));
    }
}
