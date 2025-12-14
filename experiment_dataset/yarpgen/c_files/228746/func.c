/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228746
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_16 |= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (var_13))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [8] [i_0])), (arr_0 [1U]))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((arr_0 [i_0]) != (((unsigned int) (unsigned short)0))))));
    }
    var_18 = -7798041669876306221LL;
    var_19 = ((((/* implicit */_Bool) -91607891384992142LL)) ? (((/* implicit */int) (unsigned short)5352)) : (863709770));
}
