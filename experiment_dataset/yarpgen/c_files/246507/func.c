/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246507
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
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) var_0);
                arr_9 [i_0] [i_0] = ((/* implicit */int) 4266357602258839150ULL);
            }
        } 
    } 
    var_17 = ((((/* implicit */int) (!(((/* implicit */_Bool) 59785866U))))) * (((/* implicit */int) var_14)));
    var_18 = ((/* implicit */_Bool) max((max(((-(18446744073709551608ULL))), (max((((/* implicit */unsigned long long int) var_5)), (var_0))))), (max((max((18446744073709551608ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_14))))));
}
