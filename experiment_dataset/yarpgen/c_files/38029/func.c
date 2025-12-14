/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38029
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_11)))))) : (((/* implicit */int) max(((signed char)-64), (((/* implicit */signed char) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) + (13593633729953050769ULL)));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) | (var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))))))) + (min((((/* implicit */unsigned long long int) (unsigned short)45033)), (((13593633729953050747ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2044))) : (13593633729953050746ULL)))) ? (max((((/* implicit */long long int) (unsigned short)124)), (-2902387404608944191LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 13593633729953050747ULL)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (_Bool)1)))))));
    }
}
