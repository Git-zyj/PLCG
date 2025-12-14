/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199912
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
    var_16 = ((/* implicit */unsigned short) ((((var_7) <= (((/* implicit */int) var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_15)))))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 &= ((/* implicit */unsigned char) (_Bool)1);
                var_18 *= ((/* implicit */_Bool) (signed char)-19);
                var_19 ^= ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))))), (max((arr_2 [i_0]), (arr_2 [i_0])))));
            }
        } 
    } 
}
