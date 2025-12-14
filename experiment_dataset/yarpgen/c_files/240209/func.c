/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240209
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_2 [i_0] [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (1141974382) : (((/* implicit */int) arr_3 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_3 [i_0])))) < (((/* implicit */int) arr_1 [i_0])))))) : (-3572183390188220167LL)));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65520))))) ? (max((((/* implicit */int) max(((unsigned char)51), (((/* implicit */unsigned char) arr_3 [i_0]))))), (-1992154598))) : (((/* implicit */int) max(((unsigned short)7), (((/* implicit */unsigned short) ((short) 1785612039))))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_3 [i_0])))))) << (((((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0]))) + (704757357))))))));
    }
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (13791918192875018050ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_10))))))) ? (min((3572183390188220167LL), (((/* implicit */long long int) min((var_2), (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) 1785612038)) ? (min((((/* implicit */long long int) var_8)), (562949953420288LL))) : (((/* implicit */long long int) 1785612039))))));
}
