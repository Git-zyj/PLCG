/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248081
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
    var_18 = ((/* implicit */unsigned int) ((short) var_1));
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -524400058)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) || ((_Bool)1));
    var_20 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 29U)) ? (var_4) : (-524400058)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 524400056)) ? (((((/* implicit */_Bool) ((-524400058) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_2]))))) ? (min((var_4), (((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_2])))) : ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_1 [i_0]))));
                    arr_6 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_12))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_1])), (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) var_16)))))));
                    var_22 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_0 [i_1] [i_0]))));
                }
            } 
        } 
    } 
}
