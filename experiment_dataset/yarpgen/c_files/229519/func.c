/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229519
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((_Bool) var_10));
        arr_3 [i_0] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (9168995783260893258ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) / (((/* implicit */unsigned long long int) var_1))));
        var_12 = ((/* implicit */long long int) (~(2668296750091450688ULL)));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
        arr_7 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_1])))) - ((+(((2668296750091450672ULL) + (((/* implicit */unsigned long long int) 1909366061U))))))));
    }
    var_14 = var_2;
}
