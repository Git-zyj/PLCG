/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33261
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned long long int) arr_0 [5ULL])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-13056), (((/* implicit */short) (unsigned char)250)))))))) : (var_5)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (~((+(((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
}
