/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52700
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((var_6) / (((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_15)));
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (0ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) var_17))));
    var_20 += ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) var_16)) : ((+(var_1)))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 2632971200U)) : (14ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) & ((+(-3))))))));
        var_22 = ((/* implicit */unsigned int) -6526400475238532593LL);
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7007874303729045736ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (134217727U)));
        var_24 -= ((/* implicit */short) (+((-(var_13)))));
    }
}
