/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224402
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) min(((short)4086), (((/* implicit */short) var_7))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_0)))))))) / (min((((/* implicit */unsigned long long int) ((long long int) (unsigned char)9))), (((((/* implicit */_Bool) var_14)) ? (11706199233075982262ULL) : (((/* implicit */unsigned long long int) var_11)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 -= ((/* implicit */unsigned int) (_Bool)0);
        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_0] [i_0]));
    }
}
