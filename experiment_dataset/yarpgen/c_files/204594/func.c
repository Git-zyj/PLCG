/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204594
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
    var_14 |= ((/* implicit */unsigned short) ((((_Bool) max((((/* implicit */unsigned char) (signed char)121)), ((unsigned char)112)))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((int) ((unsigned int) arr_0 [2LL] [2LL])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))))) * (((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) var_5)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_6)))))));
        var_15 ^= ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_2 [(_Bool)1])));
    }
}
