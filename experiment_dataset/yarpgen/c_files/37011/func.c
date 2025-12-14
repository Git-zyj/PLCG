/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37011
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
    var_14 = ((/* implicit */long long int) (unsigned short)31706);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max((((arr_1 [i_0 - 2]) ? (-796410866) : (((/* implicit */int) arr_1 [i_0 - 2])))), (((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
        var_15 = ((int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1]))) != (5520983860170927976ULL))) && (((/* implicit */_Bool) (unsigned char)255))));
        arr_7 [i_1] = ((/* implicit */short) ((arr_4 [i_1]) >> (((((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1] [i_1]))))) + (3589206407U))) - (3589267686U)))));
    }
    for (short i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2 - 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2 + 1]))))) ? ((+(-1403503810))) : (((/* implicit */int) ((var_13) != (((/* implicit */int) (unsigned short)37420))))))), (((/* implicit */int) (unsigned char)22))));
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (((_Bool)1) ? (var_5) : (((/* implicit */int) arr_1 [i_2 - 2]))))) - (((((/* implicit */_Bool) (-(606121206U)))) ? (((/* implicit */unsigned int) arr_9 [i_2 - 2])) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 + 1]))) - (4117605007U)))))));
    }
}
