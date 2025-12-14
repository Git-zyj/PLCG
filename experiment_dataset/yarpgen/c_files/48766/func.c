/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48766
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
    var_12 ^= ((/* implicit */_Bool) (short)16);
    var_13 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) ((signed char) (signed char)1))))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-24458)), (2147483636)))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_1 [9ULL])))))) : (((/* implicit */int) var_4)))))));
        var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))), ((+(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */signed char) max((((/* implicit */int) arr_1 [i_0])), (1)));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_17 = ((/* implicit */int) (signed char)113);
        var_18 *= ((/* implicit */unsigned long long int) (unsigned short)26901);
        var_19 = ((/* implicit */signed char) ((short) ((signed char) ((unsigned int) (short)-24458))));
    }
}
