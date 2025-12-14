/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236180
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_1 [i_0] [9U])) : (var_10))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)254))));
        arr_4 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) (signed char)41))), (((((/* implicit */_Bool) (short)11475)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_15 = ((/* implicit */short) ((max((844424930131968LL), (((/* implicit */long long int) (unsigned char)246)))) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    var_16 -= ((/* implicit */unsigned int) var_3);
}
