/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38042
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
    var_13 = ((/* implicit */unsigned long long int) ((short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_5)))));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((386434612841306981ULL) - (386434612841306966ULL)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((18060309460868244634ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3])))));
        var_15 = ((/* implicit */long long int) arr_1 [i_0 - 3]);
        var_16 = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) (~(var_7)));
        var_17 -= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [i_1] [i_1])), (var_2)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) * (var_12))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))));
    }
}
