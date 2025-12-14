/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48619
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
    var_12 = ((/* implicit */int) (+((-(34634616274944LL)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), ((short)3789)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)157))))) ? ((-(0LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-15)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_14 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-15481))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [(unsigned char)3]) ? (((/* implicit */int) arr_0 [i_0] [(unsigned char)4])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
    }
    var_15 = ((/* implicit */signed char) (~(var_6)));
}
