/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228255
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_8))))) && ((!(((/* implicit */_Bool) var_3)))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)32567)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))) / (((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (unsigned char)138))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (((arr_1 [i_0]) / (((/* implicit */long long int) -515862945)))))))))));
        var_16 += ((/* implicit */short) var_4);
    }
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */int) max((-2859337538093276126LL), (((/* implicit */long long int) arr_2 [i_1]))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_2 [i_1 + 1]))))));
        arr_10 [i_1] [4] = ((/* implicit */signed char) max(((+(((/* implicit */int) var_3)))), (max((arr_7 [i_1 + 2] [i_1 + 1]), (((/* implicit */int) arr_0 [i_1 + 2]))))));
    }
    var_17 += ((/* implicit */int) var_7);
}
