/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217776
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) var_13)), (var_1))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_6)) : (68719476735ULL)))));
    var_21 = ((/* implicit */short) ((unsigned int) var_13));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(max(((~(6285820813202649357ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) 10586475075465127042ULL))));
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_1 [i_0] [i_0])) - (arr_0 [i_0]))) - (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */int) max((((long long int) arr_1 [i_1] [i_1])), (arr_0 [i_1])));
        var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(10586475075465127047ULL))) >> (((((/* implicit */int) var_19)) + (119)))))) ? (((((/* implicit */_Bool) arr_2 [24ULL] [i_1])) ? (((/* implicit */unsigned long long int) 2033089352)) : (((10586475075465127040ULL) << (((((/* implicit */int) (unsigned short)48778)) - (48720))))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_1]), (arr_0 [i_1]))))));
    }
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) var_5)))) * (((/* implicit */int) ((_Bool) (short)-636)))))))))));
}
