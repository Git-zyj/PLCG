/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245817
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (short)17473))) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) 1686578407U)) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_12 -= ((/* implicit */_Bool) (((+(((/* implicit */int) var_2)))) | (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            var_13 += ((/* implicit */signed char) 2ULL);
            var_14 -= ((/* implicit */unsigned long long int) var_5);
        }
        arr_5 [7ULL] [i_0] = ((/* implicit */_Bool) -5269695123442204680LL);
        var_15 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_0]));
    }
}
