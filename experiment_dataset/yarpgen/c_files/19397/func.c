/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19397
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
    var_16 = ((/* implicit */_Bool) ((((unsigned long long int) var_1)) - (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_15)) > (var_8)))), (((unsigned long long int) var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [12ULL] [12ULL]), (arr_4 [4U] [4U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -721780890681117715LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))) : (4572830182147617857ULL))))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
            }
        } 
    } 
}
