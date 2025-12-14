/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44592
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */_Bool) (unsigned short)24814)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (8388607U)))))))));
                var_13 = (unsigned short)2;
                var_14 -= ((-1178943494) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (((unsigned long long int) -476042286))))));
                arr_5 [(signed char)1] [i_1] [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -6484869478769306915LL)) ? ((~(-1178943514))) : ((~(((/* implicit */int) (_Bool)1)))))));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (signed char)99))));
            }
        } 
    } 
    var_16 = ((signed char) ((unsigned int) 1178943508));
    var_17 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) 6484869478769306914LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (-6484869478769306937LL))) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
}
