/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230412
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
    var_19 = ((/* implicit */int) (short)1);
    var_20 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_13)) ? (var_6) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_17)), (var_7))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_21 -= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (short)-22352)), (15662245970469401975ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [(_Bool)1])))))));
        var_22 = (-(((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_15))))) && (((/* implicit */_Bool) (short)-28561))))));
        var_23 &= max((((/* implicit */short) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_4))))) && (((/* implicit */_Bool) min((15908730713031450814ULL), (18446744073709551615ULL))))))), (arr_0 [(signed char)22] [(signed char)22]));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44229)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)65535)))))));
    }
}
