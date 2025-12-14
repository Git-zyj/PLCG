/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191359
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) min((-1103328107), (((/* implicit */int) (signed char)-99))))) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) ((short) (~(arr_1 [i_0]))))));
        var_16 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 1103328104)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
        var_17 = ((/* implicit */signed char) arr_1 [i_0]);
        var_18 = ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3703))));
    }
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((short) (short)896)))));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_8))));
    var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))) || (((/* implicit */_Bool) var_5))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (signed char)0))));
}
