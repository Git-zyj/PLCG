/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237977
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [5ULL] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)12631))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (((((/* implicit */unsigned int) -1575217726)) * (var_8)))))) * ((-((((_Bool)0) ? (((/* implicit */long long int) 3)) : (1099511627775LL)))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (max(((_Bool)1), ((_Bool)1)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((min((var_4), (((/* implicit */unsigned int) (_Bool)1)))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) (signed char)-1))))) ? (min((((/* implicit */unsigned long long int) var_15)), (566046562371228716ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) >= (((/* implicit */int) var_13)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) << (((max((((/* implicit */long long int) (_Bool)1)), (1099511627775LL))) - (1099511627757LL))))))));
}
