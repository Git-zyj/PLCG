/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194749
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
    var_11 = ((/* implicit */signed char) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((((/* implicit */_Bool) var_2)) ? (-3463754833852630986LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))))) / (min((((/* implicit */long long int) 4294967284U)), (var_1)))))));
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) - (17482106459125053157ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] [(unsigned short)17] |= ((/* implicit */unsigned char) ((unsigned short) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
        var_13 = min((max((var_8), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((arr_2 [i_0] [i_0]) / (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
}
