/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37216
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
    var_16 = ((/* implicit */unsigned short) var_4);
    var_17 = ((/* implicit */_Bool) -6898507777093122545LL);
    var_18 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)78))))) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) var_7)))) : (((/* implicit */int) var_10))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (_Bool)1))));
        var_19 ^= ((/* implicit */signed char) ((-1407350046239029229LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))));
        var_20 *= ((/* implicit */signed char) ((_Bool) (((!(arr_3 [i_0]))) ? (((((/* implicit */int) (unsigned char)82)) - (((/* implicit */int) (unsigned char)107)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)129)))))));
    }
}
