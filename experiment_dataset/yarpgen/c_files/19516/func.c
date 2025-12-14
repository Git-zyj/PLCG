/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19516
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
    var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) min((var_4), (var_5))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_14))))) < (((((/* implicit */_Bool) (unsigned short)24576)) ? (var_7) : (((/* implicit */long long int) var_2))))))) : (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */long long int) 2678244189U);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) ((var_9) != (((/* implicit */int) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1616723107U))))))))));
                arr_6 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) max((arr_2 [i_1]), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 17590038560768ULL)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) var_14))))))))));
            }
        } 
    } 
}
