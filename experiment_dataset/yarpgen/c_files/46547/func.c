/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46547
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
    var_10 |= min((((/* implicit */long long int) ((((/* implicit */int) max((var_8), (var_8)))) & (((((/* implicit */int) var_1)) << (((((/* implicit */int) var_1)) - (114)))))))), (var_2));
    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8))))), (var_8)))) || (((((/* implicit */_Bool) 2577011232U)) && (((/* implicit */_Bool) (short)24823))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [(short)4] [(signed char)6] [i_0] |= ((/* implicit */long long int) (+(((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) var_4))))));
                var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)47)) && (((/* implicit */_Bool) 1717956063U))))))) != (((arr_0 [i_0]) + (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_1)))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_7);
}
