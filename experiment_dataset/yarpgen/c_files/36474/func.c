/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36474
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
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 0ULL))));
    var_15 = ((/* implicit */short) 0ULL);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) | (var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        var_17 = ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(2147483647))))));
        var_19 |= ((/* implicit */signed char) ((((4294967295U) | (((/* implicit */unsigned int) -1754282694)))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) var_5))) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(var_8)))))) : (((((/* implicit */_Bool) 6483174817714702047LL)) ? (6483174817714702047LL) : (((/* implicit */long long int) 4294967295U)))))))));
    var_21 *= ((/* implicit */short) var_1);
}
