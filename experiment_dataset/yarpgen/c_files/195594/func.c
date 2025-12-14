/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195594
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 += ((/* implicit */int) arr_1 [i_0]);
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) arr_0 [1ULL])))) : (((((/* implicit */int) (unsigned short)26862)) / (var_12)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((int) arr_2 [i_1 + 1] [i_1 + 1]));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_3 [1U]);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (signed char)52))));
        var_19 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (signed char)-53)), (3359364332733180992ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) <= ((+(12291638315602147508ULL)))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_14))));
    var_21 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38674)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (3359364332733180992ULL)))) ? (((576460752286646272LL) / (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
    var_22 = ((/* implicit */long long int) var_5);
}
