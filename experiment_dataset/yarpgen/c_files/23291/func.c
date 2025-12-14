/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23291
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
    var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((1), (((/* implicit */int) (unsigned short)50387))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (min((986056014), (((/* implicit */int) (_Bool)1)))))), (((int) ((signed char) (signed char)32)))));
    var_15 = ((/* implicit */_Bool) var_0);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (signed char)-33)))), (((/* implicit */int) var_8))))) ? (min((((/* implicit */int) min((((/* implicit */short) (unsigned char)200)), ((short)13416)))), ((~(((/* implicit */int) (short)-6204)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (11469983909895379858ULL)))) ? (var_0) : (((/* implicit */int) ((signed char) var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */signed char) max((((/* implicit */int) ((short) (unsigned char)210))), ((~(var_5)))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), ((unsigned char)69)))) || (((((/* implicit */_Bool) arr_5 [i_1] [12])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0]))))));
            }
        } 
    } 
}
