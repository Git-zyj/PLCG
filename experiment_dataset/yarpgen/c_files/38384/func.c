/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38384
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
    var_20 = ((/* implicit */_Bool) 524287);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) arr_3 [(short)0] [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned short) ((13413790063076665743ULL) | (((/* implicit */unsigned long long int) 2467661775U))));
                var_23 = ((((/* implicit */unsigned long long int) (-(2467661776U)))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_0 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (max((9861338168185951340ULL), (((/* implicit */unsigned long long int) 374014016U)))))));
            }
        } 
    } 
    var_24 = ((((((/* implicit */_Bool) 15964610138952877100ULL)) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)12386)) : (((/* implicit */int) (unsigned short)28132))))))) * (4294967280U));
    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (short)25085)) != (((/* implicit */int) (_Bool)0)))))))) | (((((((/* implicit */_Bool) (unsigned short)28132)) ? (var_15) : (3508625467U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))));
}
