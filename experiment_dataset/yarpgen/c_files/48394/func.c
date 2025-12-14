/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48394
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
    var_20 = (-(((/* implicit */int) (unsigned short)60888)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned char) (signed char)58));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (unsigned short)60904)) : (-1799463475)))) ? (((/* implicit */int) ((2ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (unsigned short)60888))));
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max(((signed char)114), (((/* implicit */signed char) (_Bool)0)))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) 323791508)) ^ (var_4))), (((/* implicit */long long int) ((((/* implicit */int) var_19)) / (((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27158)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14198))) : (var_14)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_12)) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) : (((/* implicit */long long int) min((323791517), ((+(((/* implicit */int) (_Bool)1)))))))));
    var_24 = ((/* implicit */unsigned short) -6139505062109194348LL);
}
