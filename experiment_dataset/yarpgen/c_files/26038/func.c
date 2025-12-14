/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26038
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_20 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 12000753335344501191ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)27816)))))), (((unsigned short) ((unsigned int) arr_1 [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (short)26769))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        arr_5 [i_1 + 1] [i_1] = ((/* implicit */unsigned char) 2147483640);
        var_22 = ((/* implicit */unsigned short) var_8);
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_1) << (((2147483640) - (2147483612)))))), ((-(-2481648776143248582LL)))))) ? ((-(min((var_12), (((/* implicit */unsigned long long int) -4895570579891707172LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (546487600650287134LL))))) : (var_5))))));
}
