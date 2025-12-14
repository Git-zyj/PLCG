/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30305
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)55778))))) : (((((/* implicit */int) (short)11029)) % (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8))))) < (((/* implicit */int) (unsigned short)38525))))) : (((((((/* implicit */_Bool) 7LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-31841)))) * (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_9))))))));
        arr_4 [i_0] = min((((((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (min((8949817303278920199LL), (var_7))) : (((/* implicit */long long int) max((0), (((/* implicit */int) var_6))))))), (((var_3) % (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)22)))))));
    }
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (1040384U)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13153)) >> (((((/* implicit */int) var_6)) - (7453)))))))) ? (min((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 70264675))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))));
    var_13 = ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */unsigned long long int) 262142)) : (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (var_7))))));
    var_14 = ((/* implicit */unsigned short) (!(var_0)));
}
