/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24884
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? ((~((+(((/* implicit */int) var_8)))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) 12688675734308346197ULL)))), (var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0])) >> (((((/* implicit */int) arr_3 [i_0] [2ULL])) - (65)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_1))))) : (13990566490874695863ULL)))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))), (max((((/* implicit */signed char) arr_2 [i_1] [i_1])), (var_1)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (((+(((/* implicit */int) arr_1 [i_0] [i_0])))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned int) (~(var_16)))) : (2604461394U)));
}
