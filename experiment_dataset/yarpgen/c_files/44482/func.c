/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44482
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
    var_18 = max((((((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) 2305842940494217216ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) (unsigned short)3209))))) : (((((/* implicit */_Bool) 10300084200226425713ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25))) : (10300084200226425714ULL))))), (((/* implicit */unsigned long long int) var_12)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)3209))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (arr_3 [(_Bool)1] [i_1])));
            }
        } 
    } 
}
