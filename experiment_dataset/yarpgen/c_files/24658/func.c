/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24658
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
    var_15 = ((/* implicit */short) ((var_9) % (((/* implicit */unsigned long long int) ((-7618471348584570049LL) & (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((int) var_14))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_9)))))))));
    var_17 ^= ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (var_11))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))));
                var_19 = ((/* implicit */unsigned long long int) (short)31656);
            }
        } 
    } 
}
