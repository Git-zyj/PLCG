/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193296
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
    var_21 = ((/* implicit */unsigned int) var_18);
    var_22 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(402653184U)))) ? (((var_5) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11139))) & (4512055140217214302ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) (signed char)104)))) < (((arr_1 [(short)10]) % (((/* implicit */int) arr_0 [i_0] [8]))))))))));
        arr_3 [i_0] = ((/* implicit */int) ((max((arr_2 [(_Bool)1] [i_0]), (min((((/* implicit */unsigned int) var_7)), (var_0))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */int) arr_0 [i_1] [i_1]);
        var_25 &= ((/* implicit */_Bool) arr_2 [(unsigned char)4] [i_1]);
        var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1]))));
        var_27 -= ((/* implicit */_Bool) (signed char)-105);
    }
}
