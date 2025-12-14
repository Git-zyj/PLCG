/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194158
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */short) max((((/* implicit */unsigned char) (signed char)-75)), (arr_3 [i_1]))))));
                var_15 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [18U] [i_1])) ? (((4294967295U) >> (((((/* implicit */int) (signed char)-75)) + (75))))) : (var_9))) == (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-75)) ^ (((/* implicit */int) (unsigned short)13247)))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) var_5);
    var_17 *= (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))))));
    var_18 = ((/* implicit */unsigned char) (-(var_9)));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)74)), (((((/* implicit */_Bool) -8072817215557310959LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))) : (var_10)))))), (var_0)));
}
