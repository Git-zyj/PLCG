/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216880
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
    var_20 = var_3;
    var_21 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((short) (unsigned short)29080)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */long long int) arr_1 [i_0])) - (var_3))) : (((long long int) 3520801878U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))) : ((~(arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))));
    }
    var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (var_11) : (((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
