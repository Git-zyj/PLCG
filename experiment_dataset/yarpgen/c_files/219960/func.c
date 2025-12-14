/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219960
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */signed char) arr_1 [i_0])), ((signed char)-88)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)94)))) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_8))));
                var_11 = ((/* implicit */unsigned char) var_3);
                var_12 |= ((((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [6U]))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) max(((signed char)77), ((signed char)-88)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
}
