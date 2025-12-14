/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237580
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */signed char) max((((/* implicit */int) (!((!(((/* implicit */_Bool) -1900788221))))))), (((((/* implicit */_Bool) (+(182770563)))) ? (((((/* implicit */_Bool) (short)14844)) ? (((/* implicit */int) (short)-14856)) : (((/* implicit */int) (short)2167)))) : ((~(((/* implicit */int) (short)14870))))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)-73))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) -1627875361))), ((+(1664312076U)))))) : (((((/* implicit */long long int) (~(1064518987)))) ^ (((((/* implicit */_Bool) -8132882381873899156LL)) ? (-8132882381873899156LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14856)))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -8132882381873899156LL)) ? (((/* implicit */int) (short)14856)) : (1064518987)))));
            }
        } 
    } 
    var_21 = min(((-(((((/* implicit */_Bool) 2089288439U)) ? (((/* implicit */int) (short)-14873)) : (1064518986))))), (((var_14) ? (((((/* implicit */_Bool) 14U)) ? (((/* implicit */int) (_Bool)0)) : (1064518987))) : (((((/* implicit */int) (unsigned short)28890)) + (7340032))))));
    var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) -8132882381873899136LL)) ? (12366650095470291885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) var_7))))));
    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-5063)))))))));
}
