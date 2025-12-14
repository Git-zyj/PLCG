/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199670
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (2142768675U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))))));
                arr_6 [6U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) - ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2181843386368ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1018690062))))))))));
    var_17 = ((/* implicit */_Bool) var_8);
}
