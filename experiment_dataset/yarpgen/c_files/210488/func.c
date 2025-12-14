/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210488
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
    var_18 = ((/* implicit */unsigned char) var_16);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((var_11) + (var_5))), (((/* implicit */unsigned long long int) var_17))))) ? (((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_15)), (var_10))))) : (((-684222230513875897LL) / (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3842545945652553761LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24424))) : (4294967295U)))) ? (-6553336070038137095LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (unsigned short)30023)), (18ULL))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_21 -= var_8;
        var_22 -= ((/* implicit */signed char) ((var_6) >= (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -230115913661099438LL)) ? (((/* implicit */int) (short)23205)) : (((/* implicit */int) (signed char)25)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min(((signed char)28), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_0 [i_1]))) < ((~(((/* implicit */int) var_10))))))))))));
        arr_4 [i_1] = ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1627250423U)))))));
    }
    for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */long long int) (~(min((((/* implicit */int) (short)21746)), (arr_6 [i_2] [i_2])))))) & (min((arr_5 [i_2]), (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))))))));
        arr_7 [i_2 - 1] |= ((/* implicit */short) var_0);
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_13), (var_14)))) + (((/* implicit */int) (unsigned short)21839))));
}
