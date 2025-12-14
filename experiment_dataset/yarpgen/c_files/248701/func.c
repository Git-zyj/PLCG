/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248701
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
    var_13 -= ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */signed char) 6814069139900355627ULL);
        var_15 *= ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_0 [8ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [(signed char)6]))), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) (unsigned char)92))));
    }
}
