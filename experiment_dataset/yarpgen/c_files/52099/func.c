/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52099
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((((((/* implicit */_Bool) 576460683583946752LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4666827383701241908ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8257536)) ? (((/* implicit */int) (short)-24518)) : (((/* implicit */int) var_3)))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned char) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) 0ULL);
    }
    var_15 = ((/* implicit */_Bool) min((var_15), (((((((/* implicit */long long int) ((/* implicit */int) (signed char)20))) - (-576460683583946752LL))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    var_16 += ((/* implicit */long long int) ((((/* implicit */int) ((signed char) 18446744073709551615ULL))) < (((/* implicit */int) var_1))));
}
