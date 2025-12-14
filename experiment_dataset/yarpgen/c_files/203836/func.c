/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203836
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1597678291))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((_Bool) 2224457423U)))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2224457423U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) >= (2309284949962601249ULL)))))))) && (((((/* implicit */_Bool) 2070509886U)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (2224457388U))))))));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned int) var_4)), ((-(var_9))))))))));
}
