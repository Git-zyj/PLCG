/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209058
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) (~(var_7)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) * (var_1)))))));
                var_15 -= ((/* implicit */short) ((unsigned char) ((unsigned long long int) (~(((/* implicit */int) var_0))))));
                var_16 = ((unsigned long long int) (~((+(((/* implicit */int) (signed char)-120))))));
                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)32331)), (1759814176)));
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (arr_6 [i_0])))) + ((+(((/* implicit */int) ((unsigned char) (unsigned short)32331)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_4);
}
