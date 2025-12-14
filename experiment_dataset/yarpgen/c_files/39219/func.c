/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39219
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
    var_17 = ((/* implicit */short) 2836343118U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)192))));
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551589ULL)) && (((/* implicit */_Bool) var_14))));
    }
    var_18 = ((/* implicit */signed char) var_0);
    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-15))))))) : (((long long int) min((((/* implicit */unsigned long long int) var_5)), (2305838611167182848ULL))))));
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_6 [5LL] [i_1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((unsigned char) arr_5 [5U] [i_1]))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))) - (var_14))))) >= (var_14)));
        var_20 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + ((-(((/* implicit */int) arr_5 [i_1] [i_1]))))));
        arr_7 [i_1] = min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (100663296ULL))), (((/* implicit */unsigned long long int) ((unsigned int) (~(18446744073608888301ULL))))));
    }
    for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((100663296ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1]))))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned long long int) 7420102002500481356LL)))));
    }
}
