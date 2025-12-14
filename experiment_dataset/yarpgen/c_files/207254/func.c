/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207254
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) 1330065197U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) arr_5 [i_1]);
        arr_7 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((unsigned long long int) ((((/* implicit */int) (unsigned char)156)) == (((/* implicit */int) arr_1 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))));
        var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
    }
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -841050170)) ? ((((!(((/* implicit */_Bool) var_9)))) ? ((+(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((((int) 1632532114)) >> (((((/* implicit */int) var_4)) - (209))))))));
}
