/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40820
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
    var_11 = ((/* implicit */unsigned long long int) (-(var_3)));
    var_12 &= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)31)))) ? (9403306235975740113ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58)))))) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) max(((signed char)-7), ((signed char)-33)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (18446744073709551615ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [8])) ? (13623616646877985451ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29)))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_5) : (4976357189737431114ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (short)-18271)), (((long long int) ((((/* implicit */int) (signed char)-60)) * (((/* implicit */int) (signed char)105)))))));
        var_14 ^= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), ((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) min(((signed char)6), ((signed char)-32)))) ? (((unsigned long long int) arr_0 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_15 ^= ((/* implicit */_Bool) ((signed char) (_Bool)0));
        var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)43)))))));
    }
}
