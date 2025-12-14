/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38228
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
    var_12 = ((/* implicit */unsigned char) var_0);
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((int) 4294967294U)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */int) (unsigned char)128)), (var_3))), (var_5)))) && (((/* implicit */_Bool) var_2))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) 1327089191)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_1))), (((/* implicit */unsigned int) var_8))));
        var_15 = ((/* implicit */long long int) max((((/* implicit */int) max(((short)14730), ((short)28273)))), (((int) var_4))));
        var_16 -= ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) arr_2 [i_0] [i_0])));
    }
    var_17 = ((/* implicit */int) (-(825239868U)));
}
