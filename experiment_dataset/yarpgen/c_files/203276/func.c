/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203276
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (max((var_12), (((/* implicit */unsigned int) var_4)))))), (var_15))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned long long int) (signed char)-49)), (min((((/* implicit */unsigned long long int) 1252669890)), (15457141746214904870ULL)))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) 747925059U)), (33822867456ULL)))))));
                }
            } 
        } 
    } 
}
