/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22972
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 147033411U)) ? (var_3) : (((((/* implicit */_Bool) ((var_12) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) 0U))))))));
    var_15 = ((/* implicit */long long int) ((signed char) var_6));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((unsigned int) (short)-9806));
        arr_3 [i_0] = ((/* implicit */_Bool) 0U);
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_17 = arr_5 [i_1] [i_1 - 1];
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((max((arr_4 [i_1 + 1]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [8ULL] [8ULL])), (-8241469835871162680LL)))))), (min((min((arr_4 [i_1]), (arr_4 [i_1]))), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))))))));
        var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) 3521979091U)) ? (((/* implicit */long long int) var_13)) : (var_9)))))), (max((((/* implicit */unsigned long long int) 0U)), (((arr_4 [i_1]) % (var_5)))))));
    }
    for (signed char i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        var_20 = (~(8241469835871162680LL));
        var_21 += ((/* implicit */short) var_8);
    }
    var_22 = ((signed char) var_11);
}
