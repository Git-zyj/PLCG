/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203703
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
    var_19 = ((/* implicit */_Bool) var_14);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((569271074) - (((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned char) var_18)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [(_Bool)1] [i_0] = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) max((10445029999721858895ULL), (((/* implicit */unsigned long long int) 616516162U))))));
                var_21 = ((/* implicit */short) (~((~(arr_2 [i_0])))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_0] [i_0]))))) >= (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_16))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
}
