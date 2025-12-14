/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199591
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((((/* implicit */unsigned long long int) var_0)) | (min((524287ULL), (((/* implicit */unsigned long long int) min(((signed char)27), (((/* implicit */signed char) (_Bool)0))))))));
                var_11 = ((/* implicit */signed char) max((max((var_3), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((max((var_4), (((/* implicit */unsigned long long int) var_5)))) >> (((var_4) - (3720852879865109783ULL))))))));
    var_13 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_1)) <= ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
}
