/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224148
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (min((((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), (arr_3 [(unsigned char)18])))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_0)))) - (65483))))), ((-(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((281474976710655ULL) >> (((((/* implicit */int) (signed char)-1)) + (51))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (~(min((((/* implicit */unsigned int) (signed char)112)), (var_11)))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min(((unsigned char)80), (var_6))))));
}
