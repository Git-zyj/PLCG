/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198952
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 += ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 3]))) : (2804919423U)))) : ((-(((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)0))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (max((((/* implicit */int) (unsigned char)202)), (arr_0 [i_1 + 2]))) : (((/* implicit */int) (signed char)(-127 - 1)))));
            }
        } 
    } 
    var_18 &= ((/* implicit */int) var_5);
}
