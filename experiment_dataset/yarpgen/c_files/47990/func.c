/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47990
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
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (arr_1 [i_0] [22LL])));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)169));
        var_19 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    var_20 = ((/* implicit */unsigned int) ((signed char) min((min((var_9), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 2948234893U)) >= (1839786030541735196LL)))))));
    var_21 = ((/* implicit */signed char) (~(18446744073709551615ULL)));
}
