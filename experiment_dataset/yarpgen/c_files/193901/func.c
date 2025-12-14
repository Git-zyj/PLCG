/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193901
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) >= ((~(max((((/* implicit */unsigned long long int) 72758373)), (var_0)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_3);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) var_12))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 - 1]))));
    }
    var_18 = ((/* implicit */long long int) var_13);
}
