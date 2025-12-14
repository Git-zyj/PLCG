/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24244
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [(signed char)7] [4LL] = ((/* implicit */signed char) ((int) (~(max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_2 [(_Bool)1])))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (470802674181796481LL) : (((/* implicit */long long int) arr_0 [i_0])))))) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-55))))));
    }
    var_11 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2)))) ? (((/* implicit */int) var_10)) : (var_0)))));
}
