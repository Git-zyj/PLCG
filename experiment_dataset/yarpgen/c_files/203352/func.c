/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203352
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
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned short)45771)))))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_7)), (var_3)))), (arr_1 [i_0 + 3]))))));
                var_22 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_14))))));
            }
        } 
    } 
}
