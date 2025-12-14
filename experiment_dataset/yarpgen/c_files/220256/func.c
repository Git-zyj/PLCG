/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220256
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) var_6)))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_4 [i_0 - 2]) >= (min((((/* implicit */unsigned int) var_0)), (arr_2 [i_1] [i_0])))))) > (((/* implicit */int) ((((/* implicit */_Bool) -7102220234555240085LL)) && ((_Bool)1))))));
                var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_6);
    var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1630695940)) ? (((/* implicit */unsigned int) -911119484)) : (1004532596U)))) && (((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) >= (var_8))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((unsigned short) 17592186044412LL)), (((/* implicit */unsigned short) var_0)))))) : (min((((/* implicit */long long int) ((var_1) > (var_7)))), (max((4190599075906381472LL), (var_4)))))));
    var_19 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_6))))) : (-7882174793915339372LL));
}
