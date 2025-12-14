/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223080
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
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_10)))))))) >= ((~(((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((29ULL), (((/* implicit */unsigned long long int) (unsigned char)128)))), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (90257445352776095ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            var_14 = ((unsigned char) min((var_0), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_0]))));
            var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((((arr_5 [(unsigned char)15] [i_1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1 - 3]))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 3]))))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((((unsigned char) arr_3 [i_1])), (max(((unsigned char)183), ((unsigned char)84))))))));
        }
        var_17 = (+(1886977577345427403ULL));
    }
}
