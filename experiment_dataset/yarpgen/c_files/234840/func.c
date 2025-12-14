/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234840
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
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3696818969461384921ULL)) ? (4294967295U) : (1U)))) ? (0U) : (8U)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1 + 1]))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1] [i_0]))))) : (((unsigned int) 4294967275U))));
            var_21 = ((/* implicit */unsigned int) ((signed char) arr_4 [i_0] [i_0]));
        }
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0])))))));
        var_23 = ((/* implicit */_Bool) (~(arr_2 [i_0])));
        var_24 ^= ((/* implicit */unsigned int) ((long long int) arr_0 [i_0]));
    }
    var_25 = ((/* implicit */unsigned long long int) ((signed char) var_4));
    var_26 = ((/* implicit */long long int) (~((+(((unsigned long long int) var_0))))));
}
