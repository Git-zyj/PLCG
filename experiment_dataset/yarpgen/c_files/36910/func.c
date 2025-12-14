/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36910
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
    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (short)-16202)) == (((/* implicit */int) (signed char)-34))))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1271593036U)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (short)-1404))));
        var_20 *= ((/* implicit */_Bool) arr_1 [6ULL] [6ULL]);
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0] [i_0])))) * ((-(((/* implicit */int) (short)25677))))));
        var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 668952681)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) min((9007199254675456LL), (((/* implicit */long long int) (unsigned short)9))))) : (min((4ULL), (8475680149711894897ULL)))))));
    }
    var_23 = ((/* implicit */unsigned short) var_5);
}
