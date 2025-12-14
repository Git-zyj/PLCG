/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19376
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
    var_12 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
    var_13 = ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */int) ((signed char) var_2))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))) : ((~(((/* implicit */int) max(((unsigned short)42409), (((/* implicit */unsigned short) var_2))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0 - 1] [i_0 - 1]);
                arr_6 [8U] |= ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)26)), (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 2])), (18446744073709551615ULL)))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) : (max((-909866950335642688LL), (((long long int) (unsigned char)119)))))))));
}
