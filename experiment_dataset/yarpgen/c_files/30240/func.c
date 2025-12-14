/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30240
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
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_10)))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30))) : (var_18))) >> (((((/* implicit */_Bool) 404120560711853169LL)) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (short)18415)))))) : (-404120560711853169LL))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_5);
    var_22 = (((~(var_1))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))));
    var_23 = ((/* implicit */signed char) ((((((/* implicit */int) (short)14827)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (short)26990)) || ((_Bool)1)))))) & (((/* implicit */int) var_17))));
    var_24 = ((/* implicit */unsigned int) ((short) max(((short)-22233), ((short)-32758))));
}
