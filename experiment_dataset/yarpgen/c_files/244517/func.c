/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244517
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
    var_17 = ((/* implicit */unsigned long long int) ((4672966989202495137LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)172)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [10U]))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65196)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned char)177)))) < (((int) (_Bool)1)))))));
                arr_6 [3U] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)209))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(var_10)))) ? (((12704689669016567993ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -6195625441599148649LL)))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((int) (unsigned char)229)))));
}
