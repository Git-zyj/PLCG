/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198528
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
    var_10 &= ((/* implicit */_Bool) ((int) var_7));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2899667369687930393ULL) & (((/* implicit */unsigned long long int) arr_3 [13LL]))))) ? (((((/* implicit */_Bool) 2899667369687930393ULL)) ? (15547076704021621238ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0] [i_0 + 2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((-(15547076704021621222ULL)))));
                var_12 = ((/* implicit */unsigned int) var_2);
                var_13 |= max((min((arr_0 [i_0]), (max((536870911ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_7))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1] [0U])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_6);
}
