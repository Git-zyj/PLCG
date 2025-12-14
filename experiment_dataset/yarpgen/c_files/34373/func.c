/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34373
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
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 4])) ? (min((arr_3 [i_1 - 3] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((var_6) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)510)))) : (((/* implicit */long long int) max((2389560746U), (((/* implicit */unsigned int) (unsigned char)75))))))))))));
                var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (short)15360))));
            }
        } 
    } 
    var_16 &= ((/* implicit */unsigned char) ((_Bool) var_3));
}
