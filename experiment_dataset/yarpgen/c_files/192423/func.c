/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192423
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
    var_20 = max((((/* implicit */int) ((((/* implicit */int) var_1)) >= (((int) var_14))))), (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((-(((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_3) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0]))))))), (((var_17) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
        var_22 = ((/* implicit */long long int) var_6);
        var_23 = ((/* implicit */long long int) (~(var_0)));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(var_4)))))) && (((/* implicit */_Bool) ((-1069860269) & (-6))))));
        var_25 = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1]))))), (((((/* implicit */_Bool) (signed char)85)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_8)) ? (-29) : (((/* implicit */int) var_1)))))));
        arr_5 [4] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)236))))) <= ((~(((((/* implicit */_Bool) (unsigned short)34084)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17384))) : (18446744073709551613ULL)))))));
        var_26 ^= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_2 [i_1]))))));
        var_27 = ((/* implicit */int) var_15);
    }
}
