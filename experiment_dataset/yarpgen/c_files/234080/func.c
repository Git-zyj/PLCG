/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234080
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 23ULL)) ? (max((2U), (((/* implicit */unsigned int) (signed char)-30)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))), (((((/* implicit */_Bool) (~(1591255342U)))) ? (1591255365U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54590)))))));
                var_17 += ((/* implicit */signed char) 0ULL);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(var_10)))))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-28)), (var_12)))))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)9924))))));
    var_19 += ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)30)))), ((~(((/* implicit */int) (_Bool)1))))))));
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
}
