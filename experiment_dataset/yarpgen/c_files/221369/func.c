/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221369
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [5ULL] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)205)))) > (((/* implicit */int) ((4778899032026565204ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))))))));
        var_10 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) == (var_2)));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [(signed char)7])) - (((/* implicit */int) arr_2 [i_0 - 2]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14527475114714794954ULL)) ? (18359033482335647971ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (short)18636)) : (((/* implicit */int) (short)32744)))))));
    }
    var_11 = ((/* implicit */signed char) (-((((-(var_0))) + (max((var_5), (((/* implicit */unsigned long long int) var_3))))))));
    var_12 = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (var_1))) ? ((~(var_8))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))))))) == (max(((-(var_2))), (((((/* implicit */_Bool) var_5)) ? (6797137303604512951ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1860)))))))));
    var_13 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (~(var_8))))))));
    var_14 = ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))));
}
