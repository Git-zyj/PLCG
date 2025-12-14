/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1972
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
    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2184898406U) % (((((/* implicit */_Bool) 1350758247U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32753))) : (3991218497U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_4))))) : (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_2))))) + (((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    var_16 = ((/* implicit */unsigned int) ((((var_0) < (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((2110068910U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)50414)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 3]))));
        var_18 ^= ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) ((short) arr_0 [i_0 - 2]))));
    }
}
