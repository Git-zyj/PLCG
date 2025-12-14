/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246198
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
    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(((var_13) + (max((((/* implicit */unsigned long long int) 7704394188485210097LL)), (var_12))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) * (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7704394188485210119LL)) && (((/* implicit */_Bool) -7704394188485210097LL)))))) : (((arr_2 [i_0] [i_0]) | (((/* implicit */unsigned long long int) -7704394188485210119LL))))));
        arr_4 [i_0] [i_0] = (~(-5915201311556349985LL));
        arr_5 [0U] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 828053548U)))))));
    }
}
