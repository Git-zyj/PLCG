/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218384
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (3558958865110516185ULL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) arr_1 [(_Bool)1]);
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(10098329175510038816ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) : (3558958865110516166ULL))))));
        arr_4 [(unsigned short)9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 14887785208599035414ULL))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((((((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_5)))) & (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) min((((/* implicit */signed char) arr_3 [(signed char)2])), (arr_1 [i_0]))))))));
        arr_6 [i_0] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) var_2)))))))));
    }
}
