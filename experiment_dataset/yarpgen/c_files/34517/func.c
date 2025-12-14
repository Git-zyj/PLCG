/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34517
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
    var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) 246954916U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -9LL))))) : (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_13))))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) -5788541380358205868LL)))) ? (((/* implicit */int) var_7)) : (min((((/* implicit */int) (!(((/* implicit */_Bool) (short)512))))), (((975491919) / (975491919)))))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_0 [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(var_9)))) ? (max((var_1), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
}
