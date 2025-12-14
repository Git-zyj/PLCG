/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236077
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
    var_10 = -1459304808513076647LL;
    var_11 = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_7)))), (min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), ((~(((/* implicit */int) (unsigned char)41))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [4U] [4U])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_3 [(unsigned char)6] [i_1] [(unsigned char)6])))))), (((/* implicit */int) var_5))));
                var_13 = max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) : (arr_0 [11U] [11U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
