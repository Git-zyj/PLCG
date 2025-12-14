/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226001
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) arr_3 [i_1] [i_0]);
                arr_4 [(unsigned char)6] [i_1] [2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(arr_3 [(short)16] [1ULL])))), (arr_0 [i_0] [i_0])));
                arr_5 [(short)2] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1825216544934949981LL)) ? (((/* implicit */int) var_2)) : ((-2147483647 - 1))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [(short)18] [i_1] [(signed char)16])), (var_10)))))))));
            }
        } 
    } 
    var_13 ^= max(((~(min((var_5), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_7)) - (55189)))))))));
    var_14 -= ((/* implicit */long long int) (+((((~((-2147483647 - 1)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
}
