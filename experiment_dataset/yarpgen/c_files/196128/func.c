/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196128
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned long long int) var_9);
        arr_2 [i_0] = ((/* implicit */unsigned short) var_7);
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (short)-1024)) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_0 [i_0]))))))));
            arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (arr_0 [i_1])));
            var_20 = ((/* implicit */int) var_9);
            arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((long long int) arr_0 [i_0]))));
        }
        for (short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (var_2)));
            var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -2695169686910486297LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)55))))));
            var_22 = ((/* implicit */unsigned long long int) arr_7 [i_2]);
            var_23 -= ((/* implicit */unsigned short) arr_8 [i_0]);
        }
        arr_10 [(short)13] = ((/* implicit */long long int) var_17);
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) arr_11 [i_3]);
        var_25 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
    }
    var_26 = ((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) max((var_4), (((/* implicit */int) var_6))))), (max((var_2), (((/* implicit */long long int) var_3)))))));
}
