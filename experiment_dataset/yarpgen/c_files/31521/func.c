/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31521
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
    var_18 *= var_16;
    var_19 |= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_11) || (((/* implicit */_Bool) 4U))))), (var_10)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) 9432928038598381670ULL)) ? (338121443) : (((/* implicit */int) (signed char)-117)))), (((/* implicit */int) ((var_16) || (((/* implicit */_Bool) 212286832U)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((9432928038598381667ULL), (((/* implicit */unsigned long long int) 145159754U))))) ? (((/* implicit */unsigned int) arr_0 [i_0 + 2])) : (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((arr_1 [i_0 - 1]) * (arr_1 [i_0 + 1]))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) var_17);
        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1] [i_1]))));
    }
}
