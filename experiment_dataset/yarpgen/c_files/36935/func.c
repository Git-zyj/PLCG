/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36935
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
    var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) -5495967084552318261LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57469))) ^ (1804576963165287045ULL))))), (((/* implicit */unsigned long long int) ((((1804576963165287045ULL) <= (18302628885633695744ULL))) ? (max((4037226422U), (((/* implicit */unsigned int) (short)16100)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    var_17 = ((/* implicit */unsigned long long int) (((~((-(887180580U))))) != ((~(var_14)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((_Bool) arr_0 [i_1]))))) == (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) arr_2 [i_0] [i_1])) : (((((/* implicit */_Bool) (signed char)127)) ? (3138300304583158669LL) : (((/* implicit */long long int) arr_2 [i_0] [i_1]))))))));
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 16642167110544264570ULL)) ? (((/* implicit */int) (_Bool)1)) : (1379487533))) + ((-(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((/* implicit */int) var_4)))))));
}
