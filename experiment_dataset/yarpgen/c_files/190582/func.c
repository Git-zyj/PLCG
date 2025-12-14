/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190582
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [10U]))) : (-9223372036854775793LL))) % (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (min((var_3), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_14);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) min((((/* implicit */long long int) -948010481)), ((-9223372036854775807LL - 1LL))))) ? (min((arr_10 [i_1 + 1]), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                var_22 *= ((/* implicit */unsigned char) min(((+(var_8))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -9223372036854775793LL)))))));
            }
        } 
    } 
}
