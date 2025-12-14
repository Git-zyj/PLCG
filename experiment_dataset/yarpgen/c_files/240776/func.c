/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240776
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
    var_15 = var_3;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) (~((+(min((var_1), (var_10)))))));
                    arr_7 [i_0] [12ULL] [i_2] |= min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)198));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (signed char)74))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) (signed char)127))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)141))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)84))))));
}
