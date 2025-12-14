/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229595
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)12)) == (((/* implicit */int) var_0)))))) : (((var_9) - (((/* implicit */long long int) ((/* implicit */int) (short)-32747)))))))), (((arr_4 [0LL]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
                var_13 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) & (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26586)))))))));
                var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)74)) == (((/* implicit */int) (signed char)88))))) != (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) arr_2 [i_0])))))));
                arr_7 [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)32736))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) & (arr_2 [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (short)32758);
}
