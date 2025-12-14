/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22685
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = var_1;
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (short)16878);
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (signed char)-13))))) ? (var_15) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)8)) && (((/* implicit */_Bool) arr_2 [3LL] [(unsigned char)5]))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((-1328848154) - ((((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-24))))));
}
