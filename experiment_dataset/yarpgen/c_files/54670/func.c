/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54670
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
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21515)) ? (-8968750569264403899LL) : (var_13))))))) : (((/* implicit */int) (signed char)29))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((164986505361038900LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (1023077943)))), (((var_16) << (((((/* implicit */int) var_17)) + (548)))))))))))));
                arr_6 [i_0] [i_0] [i_1] = min(((~(((/* implicit */int) ((signed char) arr_1 [9ULL]))))), (((/* implicit */int) ((signed char) (signed char)103))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_12);
}
