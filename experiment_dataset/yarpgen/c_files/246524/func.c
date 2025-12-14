/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246524
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) var_0)))))))) ? (min((4737833915437868143LL), (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((unsigned int) var_14))));
        var_18 *= ((/* implicit */unsigned int) ((_Bool) min((var_2), (((/* implicit */long long int) 0U)))));
        arr_4 [i_0] [i_0] |= ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)64195))))), (((((/* implicit */_Bool) 7334614256394187737LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254)))))))));
    }
    var_19 = ((/* implicit */long long int) min((var_19), ((-(max((((/* implicit */long long int) ((var_13) - (((/* implicit */unsigned int) -1768816488))))), (min((((/* implicit */long long int) var_5)), (var_6)))))))));
}
