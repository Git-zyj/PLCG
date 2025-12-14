/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38057
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] [7] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50662))) < (min((arr_3 [i_1]), (var_0)))));
                var_20 = ((/* implicit */long long int) arr_0 [(unsigned short)1]);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((unsigned int) ((((int) var_17)) >> (((/* implicit */int) ((((/* implicit */int) (signed char)114)) != (((/* implicit */int) (unsigned short)16))))))));
    var_22 = ((/* implicit */int) var_18);
    var_23 &= ((/* implicit */int) var_12);
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)1)) + (((/* implicit */int) ((var_7) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2702900513U)) ? (var_15) : (((/* implicit */int) (_Bool)0))))))))));
}
