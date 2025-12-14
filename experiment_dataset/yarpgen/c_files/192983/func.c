/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192983
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
    var_10 = ((/* implicit */unsigned short) var_4);
    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) ((_Bool) var_4)))), (((((/* implicit */_Bool) (unsigned char)0)) ? (var_2) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (-1LL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1ULL) % (((unsigned long long int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((var_7) - (16536158566214647725ULL)))))) || ((!(((/* implicit */_Bool) (unsigned char)200))))))) : (((((/* implicit */int) (unsigned char)55)) % (((/* implicit */int) (unsigned short)42691))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((7625561343471693604LL), (((/* implicit */long long int) var_5))));
}
