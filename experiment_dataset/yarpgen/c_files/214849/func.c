/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214849
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) 18265103245068479729ULL))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_0]))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_6))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)15014)) : (((/* implicit */int) (short)30720)))) : (((/* implicit */int) arr_2 [i_1] [15LL])))))));
                var_17 = ((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1]);
            }
        } 
    } 
}
