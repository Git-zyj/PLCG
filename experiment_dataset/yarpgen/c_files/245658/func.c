/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245658
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_3 [(signed char)12] [(signed char)12] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) - (((unsigned long long int) var_8))))));
                var_14 = ((/* implicit */_Bool) (signed char)28);
            }
        } 
    } 
    var_15 = var_7;
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_0)), ((signed char)27)))) || (((/* implicit */_Bool) (signed char)-28))))), (min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (18446744073709551615ULL)))), (min((((/* implicit */unsigned short) var_10)), (var_4)))))));
    var_17 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)36))))) ? (((((/* implicit */_Bool) (signed char)28)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), ((_Bool)0)))))))));
}
