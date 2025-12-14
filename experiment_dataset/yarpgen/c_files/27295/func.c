/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27295
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) (-((-(((int) var_8))))));
                var_13 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min(((unsigned char)235), (((/* implicit */unsigned char) var_1))))) ? (((unsigned long long int) 0LL)) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) 0)) / (3577586067962962756ULL))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)103)))) / ((+(((/* implicit */int) var_0)))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_1))) ? ((-(0))) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) 0LL))));
}
