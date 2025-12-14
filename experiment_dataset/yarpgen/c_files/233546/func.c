/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233546
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_9) % (((/* implicit */long long int) var_2)))), (max((((/* implicit */long long int) 4294967292U)), (arr_5 [i_0] [10U] [i_2])))))) ? (min((var_9), (((/* implicit */long long int) ((int) 132120576))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(var_8)))))))));
                    var_11 -= ((/* implicit */int) max((min((((/* implicit */long long int) 4294967292U)), (1927809916125483581LL))), (((/* implicit */long long int) var_5))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
}
