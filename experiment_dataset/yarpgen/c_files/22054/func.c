/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22054
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
    var_13 ^= ((/* implicit */short) ((unsigned int) var_5));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_12)) > (((/* implicit */int) arr_0 [i_0])))) && (((_Bool) var_2)))))) ^ (((unsigned int) ((8810913470055478520LL) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) ((unsigned short) ((long long int) 8810913470055478500LL))));
        var_15 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= ((-9223372036854775807LL - 1LL))))) < (((/* implicit */int) ((_Bool) -8810913470055478493LL)))));
    }
    var_16 = ((/* implicit */short) var_4);
}
