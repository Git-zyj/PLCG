/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224254
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
    var_12 = ((/* implicit */long long int) min((var_12), (min((((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) 0U)) == (6844174413517001025LL))))), (max((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (max((((/* implicit */long long int) 4294967271U)), (1LL)))))))));
    var_13 *= ((/* implicit */unsigned long long int) (+(4294967295U)));
    var_14 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_9)) : ((+(2977267470U))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (((+(var_3))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max((2147483647), (-2616243)));
    }
    var_16 = ((/* implicit */unsigned char) (_Bool)1);
}
