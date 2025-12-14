/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198854
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
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (316822128U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_19))));
        arr_3 [9U] = ((/* implicit */short) ((unsigned char) arr_1 [i_0] [i_0]));
        arr_4 [i_0] = ((/* implicit */short) ((unsigned short) var_6));
        var_22 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    var_23 = ((/* implicit */unsigned int) ((long long int) var_17));
    var_24 = ((/* implicit */_Bool) min((3978145159U), (((/* implicit */unsigned int) (_Bool)1))));
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_17))));
}
