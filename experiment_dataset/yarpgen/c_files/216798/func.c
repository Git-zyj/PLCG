/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216798
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
    var_16 += ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) var_7))));
    var_17 += ((/* implicit */long long int) ((0LL) < (((/* implicit */long long int) 702196838U))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) min((((13275188441698389236ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((var_10) <= (702196838U))))))));
        var_19 = ((/* implicit */unsigned int) max((arr_1 [i_0 - 1] [i_0 + 1]), (min((arr_1 [i_0 - 1] [i_0]), (((/* implicit */short) (signed char)-11))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3592770458U)))) ? (19LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (702196838U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))))))));
        var_21 = ((/* implicit */unsigned char) var_11);
        var_22 = ((/* implicit */int) (-(min((4885982561609457836ULL), (((/* implicit */unsigned long long int) (signed char)37))))));
    }
    var_23 = ((/* implicit */unsigned int) min((var_23), (var_9)));
    var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */short) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)191)), (min((var_12), (((/* implicit */short) (signed char)28)))))))) : (min((((/* implicit */long long int) min((-300778303), (((/* implicit */int) (signed char)19))))), (max((((/* implicit */long long int) (unsigned char)95)), (var_11)))))));
}
