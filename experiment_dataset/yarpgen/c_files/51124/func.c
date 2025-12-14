/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51124
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_19)))))));
    var_21 = ((/* implicit */short) max((var_21), ((short)(-32767 - 1))));
    var_22 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) <= (0ULL))))))) % (((((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) (unsigned short)21151)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)0);
    }
}
