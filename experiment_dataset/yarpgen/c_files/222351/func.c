/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222351
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
    var_12 = ((/* implicit */unsigned int) ((int) 8794215572108826538ULL));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9652528501600725083ULL))))), (((unsigned long long int) ((((/* implicit */_Bool) 8794215572108826538ULL)) ? (0ULL) : (8794215572108826538ULL))))));
                var_14 = ((/* implicit */unsigned int) ((9652528501600725078ULL) % (((/* implicit */unsigned long long int) 381314961U))));
                var_15 = ((/* implicit */_Bool) var_7);
                arr_5 [i_0] [6ULL] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9652528501600725061ULL)) || (((/* implicit */_Bool) arr_4 [i_1 + 1]))))), (((unsigned long long int) var_4)));
                arr_6 [18ULL] = ((/* implicit */unsigned long long int) ((-1232750732) * (((int) max((((/* implicit */int) var_1)), (arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
}
