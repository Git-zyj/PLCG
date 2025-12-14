/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211474
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 274877906943LL))))) : (var_1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1 - 2] [i_1 + 1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : ((~(arr_1 [i_1]))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) 3940565404175453517LL))));
                }
            } 
        } 
    } 
}
