/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240173
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
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)120)) : (var_0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])) ^ (var_13))) & (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))));
                var_16 -= ((/* implicit */int) (unsigned char)134);
                var_17 |= ((/* implicit */unsigned char) var_11);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)131)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1797872576) : (((/* implicit */int) (unsigned char)121))))) ? (((((/* implicit */int) (signed char)90)) * (((/* implicit */int) (unsigned char)121)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_7)))))))));
}
