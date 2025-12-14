/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20776
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
    var_13 = ((/* implicit */int) min((((/* implicit */short) (!((!(var_7)))))), (var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_7 [i_0 + 1] = ((/* implicit */int) -1377548050802391765LL);
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_6))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) -2147483633))))) : (((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1377548050802391765LL), (((/* implicit */long long int) arr_0 [i_0] [(_Bool)1]))))) ? (min((((/* implicit */long long int) arr_4 [i_1])), (-1377548050802391765LL))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_0 + 2])))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)32768))))));
    var_16 = ((/* implicit */unsigned int) var_0);
}
