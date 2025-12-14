/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239274
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 *= ((/* implicit */short) (+((~(((/* implicit */int) var_10))))));
        var_19 = (+((-(var_3))));
        var_20 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
    }
    var_21 = ((/* implicit */unsigned int) max(((-(max((((/* implicit */unsigned long long int) -9223372036854775803LL)), (var_13))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!((_Bool)1)))), (max((-1151410652), (var_17))))))));
    var_22 = ((/* implicit */unsigned long long int) min((max(((+(((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_16)))))), (((/* implicit */int) min((max((((/* implicit */unsigned short) var_7)), ((unsigned short)52643))), (min((((/* implicit */unsigned short) var_6)), (var_16))))))));
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_4)), (1184432108))), (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_0)), (var_4)))), (max((var_13), (((/* implicit */unsigned long long int) (_Bool)1))))))));
}
