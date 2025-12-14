/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47467
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
    var_17 = 3767003619062141491ULL;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = 9467312793690100296ULL;
                var_19 -= ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) var_15)))))) && ((!(((/* implicit */_Bool) 3767003619062141486ULL))))));
                var_20 = ((((/* implicit */_Bool) 16957570522688173922ULL)) ? (3767003619062141486ULL) : (14679740454647410124ULL));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_16) : (((((/* implicit */_Bool) var_0)) ? (17614948256539491682ULL) : (var_15))))))));
}
