/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238543
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_0), (((/* implicit */int) var_10))))), (((unsigned int) var_8)))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10456)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_10))))) ? (var_0) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_4))))))) : (((((/* implicit */int) var_5)) >> ((-(((/* implicit */int) (unsigned short)0))))))));
    var_13 = (~(((/* implicit */int) ((unsigned short) min((var_8), ((short)26109))))));
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_9))) ? (min((((/* implicit */unsigned int) min((var_10), (var_8)))), (18U))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)3951)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)32767)))))))));
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) arr_1 [i_1 + 1]))))) ? (((long long int) arr_1 [i_0 - 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */int) var_8)))))));
                var_17 = ((/* implicit */unsigned short) ((int) var_10));
            }
        } 
    } 
}
