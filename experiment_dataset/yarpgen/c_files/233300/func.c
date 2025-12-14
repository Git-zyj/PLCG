/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233300
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) ^ (var_8)))) ? (((/* implicit */unsigned int) var_8)) : (var_11))))));
    var_21 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [(unsigned short)5] = ((/* implicit */unsigned int) min((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (unsigned short)51457))));
        arr_3 [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 7; i_1 += 2) 
    {
        var_22 *= ((/* implicit */signed char) ((((((((/* implicit */int) var_14)) + (2147483647))) >> (((611160738U) - (611160707U))))) % (((/* implicit */int) ((((/* implicit */_Bool) (short)32745)) || (((/* implicit */_Bool) (unsigned char)27)))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 3]))))))));
    }
    for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((unsigned short) (-(((/* implicit */int) arr_6 [6]))))), (((/* implicit */unsigned short) (unsigned char)219)))))));
        var_25 = ((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19100))) : ((+(((long long int) (unsigned short)28710)))));
    }
}
