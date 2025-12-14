/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33269
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) -6335961314378799690LL))))))) > (var_4))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) ((unsigned char) ((short) 6335961314378799683LL))))));
                arr_5 [i_1] [i_1] &= ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) > (((unsigned int) 4294967269U))))));
                arr_6 [i_1] [i_0 + 1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0 + 1]))) : (arr_3 [i_0] [i_1])))) ? (((/* implicit */int) ((unsigned short) (_Bool)0))) : ((-(((/* implicit */int) (unsigned short)65535))))))) ? (max((((unsigned long long int) arr_0 [i_0])), (((6834142150279568538ULL) + (((/* implicit */unsigned long long int) -6335961314378799700LL)))))) : (((/* implicit */unsigned long long int) (+(-6335961314378799683LL))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
}
