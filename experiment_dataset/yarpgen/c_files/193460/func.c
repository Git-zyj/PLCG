/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193460
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((max((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [(short)20])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-2464))))))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)3336)) : (((/* implicit */int) (_Bool)1)))) - (3335))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_1 [i_0 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((4144087152578534434LL), (((/* implicit */long long int) arr_0 [i_0] [i_0 - 1])))))))));
        arr_3 [13ULL] [13ULL] = ((/* implicit */_Bool) var_7);
    }
    var_14 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 18446744073709551587ULL)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) (!((_Bool)1)))))) : ((~(((((/* implicit */_Bool) (unsigned short)64483)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-1058))))))));
    var_15 &= ((/* implicit */unsigned long long int) ((signed char) (short)4092));
    var_16 = ((/* implicit */short) ((long long int) var_4));
}
