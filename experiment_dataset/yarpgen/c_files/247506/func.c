/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247506
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))))) : ((-(((/* implicit */int) (short)17348)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((arr_0 [i_0 + 3]) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) (unsigned short)15627)))) : (min((((/* implicit */int) ((short) var_7))), ((-(((/* implicit */int) (short)30320))))))));
        var_13 += ((/* implicit */unsigned short) var_3);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)128), (((/* implicit */unsigned char) (signed char)2))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) 9186990647705404766LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) arr_3 [i_1])) : (((((/* implicit */_Bool) ((int) var_6))) ? (524987178) : (((/* implicit */int) var_7))))));
        arr_4 [(signed char)0] [(signed char)0] |= ((/* implicit */unsigned int) -524987194);
    }
}
