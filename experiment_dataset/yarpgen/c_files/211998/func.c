/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211998
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((int) (+(((/* implicit */int) var_8))))) : (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_9);
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_6))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] |= ((/* implicit */unsigned int) arr_1 [(short)0]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned char) ((int) var_4))))));
            var_16 = var_5;
            arr_8 [i_1 + 1] [i_2] [i_1] = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (short)4064)))));
        }
        var_17 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_2 [i_1])) : (((long long int) var_9)))) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2])))));
        arr_9 [(_Bool)1] = ((/* implicit */unsigned char) arr_1 [(unsigned char)8]);
        var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((short) arr_0 [i_1 - 2] [i_1 - 2]))), (var_11))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)4074)) : (((/* implicit */int) (short)4064)))));
    var_20 = ((/* implicit */long long int) ((int) var_6));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) var_5))))) ? (min((var_10), (((/* implicit */int) var_5)))) : (((/* implicit */int) ((_Bool) max((5226884641136746568ULL), (((/* implicit */unsigned long long int) (short)4072))))))));
}
