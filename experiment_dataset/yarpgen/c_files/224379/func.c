/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224379
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
    var_19 = (~(((((/* implicit */_Bool) 5939472925284959231LL)) ? (-5939472925284959216LL) : (5939472925284959204LL))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_1))))))) ? (var_18) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (((5939472925284959231LL) << (((5939472925284959215LL) - (5939472925284959215LL))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_5 [i_0 + 1])), (-5939472925284959216LL))), (((/* implicit */long long int) ((unsigned short) var_10)))));
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((-5939472925284959229LL), (-5939472925284959216LL)))), (var_11)));
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65527))));
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) max((((/* implicit */short) var_15)), (var_2))))))) : (((/* implicit */int) var_17))));
}
