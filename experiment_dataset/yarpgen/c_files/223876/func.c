/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223876
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
    var_20 = (signed char)-11;
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_10))))), ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))));
    var_22 = var_15;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) var_19);
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_0 [14U])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))));
        var_25 *= ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_0 [i_0])));
        var_26 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8)));
    }
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((var_10), (((/* implicit */long long int) ((_Bool) var_15)))))));
}
