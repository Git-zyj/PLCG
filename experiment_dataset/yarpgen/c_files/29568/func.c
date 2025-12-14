/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29568
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
    var_14 = ((/* implicit */unsigned int) ((unsigned short) var_13));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_0 [i_1]), (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_9)))))))) & (((arr_1 [i_0 + 2]) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2])))))));
                var_16 = ((/* implicit */short) var_2);
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)39))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned char) var_0);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned char)141)))))))));
}
