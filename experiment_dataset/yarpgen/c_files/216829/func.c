/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216829
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
    var_13 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)23969))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 = (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-9)))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)30)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) > (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) > (18277592877661110932ULL))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (535626854U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)0])))))), (var_0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18277592877661110936ULL)) ? (((/* implicit */int) arr_1 [i_1])) : (arr_5 [i_1])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (~(var_7))))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
                var_17 = ((((/* implicit */_Bool) (~(3157727553U)))) ? (((/* implicit */int) ((var_0) > (((/* implicit */long long int) -458949474))))) : ((+(((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned short)26611)))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    var_19 += ((/* implicit */unsigned int) (((~(((/* implicit */int) var_11)))) > (((((((/* implicit */_Bool) 2945134091220450843LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))) << (((var_0) - (1318564774548639173LL)))))));
}
