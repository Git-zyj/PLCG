/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27053
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
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [(unsigned short)16] = ((/* implicit */unsigned char) (!(((arr_1 [i_0 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))))))));
                var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) ((signed char) 2139095040U)))), (((((/* implicit */_Bool) ((unsigned short) arr_1 [i_1]))) ? (var_11) : ((-(127LL)))))));
                var_15 = ((/* implicit */unsigned short) (signed char)-41);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((((/* implicit */short) var_7)), (max((((/* implicit */short) var_3)), (var_10)))));
    var_17 = ((/* implicit */unsigned short) min(((~(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (3541090043U))))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned char) var_7))))))));
}
