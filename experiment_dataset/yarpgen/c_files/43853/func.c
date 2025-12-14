/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43853
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
    var_13 = ((/* implicit */int) var_1);
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(1521468857U))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && ((_Bool)1)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0 - 3]))));
        arr_5 [i_0 + 4] [i_0 - 1] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)131));
    }
    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
}
