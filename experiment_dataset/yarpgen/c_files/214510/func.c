/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214510
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
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0 - 2] = ((((/* implicit */int) ((short) (unsigned short)12288))) <= (arr_2 [(_Bool)1] [i_0]));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12281))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]))))));
    }
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_2)) / (((/* implicit */int) (short)-1420))))))) ? (((((/* implicit */_Bool) ((short) (unsigned short)12281))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_19))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
}
