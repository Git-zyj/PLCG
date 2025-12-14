/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29098
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))) | (max((((/* implicit */unsigned long long int) 3627507016U)), (4944294918753658155ULL))))), (((/* implicit */unsigned long long int) -9223372036854775806LL))));
                var_16 = ((/* implicit */unsigned char) ((unsigned long long int) 9223372036854775799LL));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) 9597952911819131757ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))))), ((+(((long long int) var_7))))));
}
