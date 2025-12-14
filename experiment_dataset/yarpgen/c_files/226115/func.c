/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226115
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
    var_13 = 1143729909405915608ULL;
    var_14 = (signed char)5;
    var_15 ^= ((/* implicit */_Bool) min((((/* implicit */int) max((var_5), (var_5)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) + (max((((/* implicit */unsigned long long int) (_Bool)0)), (17303014164303636007ULL)))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) (short)4032)))), (((/* implicit */int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) arr_0 [i_0 + 1])))) : ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [(signed char)8]))))))));
    }
}
