/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196240
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)87)) <= (((/* implicit */int) (_Bool)1))))) ^ ((~(((/* implicit */int) (_Bool)1))))));
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_7))));
    var_17 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((17995902178310936444ULL) > (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
        var_19 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))), (min((var_14), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (short)32764)))));
    }
    var_21 |= ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) -6639082338315426158LL)));
}
