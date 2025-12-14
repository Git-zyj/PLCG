/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199992
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 762753175U))));
        var_21 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    var_22 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)60759)) : (((/* implicit */int) (short)16355))))) ? ((-(var_12))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60759))))));
    var_23 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_19))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_11))) - (4047214338U))))) * (((/* implicit */long long int) (+(((/* implicit */int) min(((short)-756), ((short)767)))))))));
    var_24 = ((/* implicit */unsigned int) ((long long int) var_5));
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_25 = ((long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_0)) : (var_6)));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_3 [i_1])))) && (((/* implicit */_Bool) ((((arr_3 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)770))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) : (arr_1 [(short)8]))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) min((((unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) var_6)) : (var_2)))), (((/* implicit */unsigned long long int) (((-(arr_4 [i_1]))) / (((long long int) var_3)))))));
    }
}
