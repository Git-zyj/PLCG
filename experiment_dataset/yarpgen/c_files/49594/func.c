/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49594
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
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((/* implicit */int) (unsigned short)6144)) : ((~(((/* implicit */int) (_Bool)1))))));
                var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) min((var_5), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))))) : (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) - (var_6))))), (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0])))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) var_4);
    var_16 *= ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) var_9))))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (9379013943864196118ULL)))))), (var_9)));
    var_17 = ((/* implicit */unsigned short) var_4);
    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_3)) : (var_8))))))) : (var_6)));
}
