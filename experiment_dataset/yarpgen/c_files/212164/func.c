/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212164
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)56))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((((((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0 + 3])))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(signed char)2])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [(_Bool)1]) : (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [19U])) | (((/* implicit */int) arr_1 [i_0])))))))));
    }
}
