/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229651
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
    var_10 = ((/* implicit */signed char) var_2);
    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (9007824963430755891LL)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) - (max((((/* implicit */int) var_3)), (129682940)))));
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((signed char) ((unsigned long long int) -9007824963430755896LL)))), ((unsigned char)248)));
                var_14 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 - 3])) && (((/* implicit */_Bool) ((unsigned char) var_6))))) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) ((signed char) (signed char)36)))));
            }
        } 
    } 
}
