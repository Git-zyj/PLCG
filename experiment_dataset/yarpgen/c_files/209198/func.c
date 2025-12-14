/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209198
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) -1159395542))));
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned short) var_8))) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((var_4) + (249310798)))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) <= ((~(((/* implicit */int) (_Bool)1))))))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (1159395530))), (((/* implicit */int) arr_3 [(unsigned short)12])))))));
            }
        } 
    } 
}
