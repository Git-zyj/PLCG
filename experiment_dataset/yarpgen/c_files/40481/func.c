/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40481
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_18)), (((((/* implicit */_Bool) 9671679826899176940ULL)) ? (((var_1) & (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) arr_6 [i_1]);
        arr_8 [i_1] = ((/* implicit */long long int) ((unsigned char) arr_6 [i_1]));
        arr_9 [i_1] = ((/* implicit */_Bool) (+(arr_6 [i_1])));
    }
    var_20 = ((/* implicit */unsigned char) (~(min((max((((/* implicit */long long int) 2470044661U)), (-8253313267921068997LL))), (((/* implicit */long long int) (short)(-32767 - 1)))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((signed char) 114688U))) ? ((~(2470044661U))) : (min((2470044673U), (((/* implicit */unsigned int) var_2))))))))));
    var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((var_10) & (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)7)), (var_5)))))), (((/* implicit */unsigned long long int) var_13))));
}
