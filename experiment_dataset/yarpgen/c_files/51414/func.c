/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51414
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62095)) ? (((/* implicit */long long int) var_5)) : (arr_1 [i_0])))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((1044008081) >> (((2004237022U) - (2004236998U))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 511893838)) ? (((/* implicit */int) (short)6702)) : (((/* implicit */int) var_10))));
    }
    var_20 = ((/* implicit */int) min((var_3), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23403)) ? (((/* implicit */int) (short)23377)) : (((/* implicit */int) (short)-23377))))))))));
}
