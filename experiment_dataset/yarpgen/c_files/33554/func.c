/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33554
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13023)) ? (1309025455U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22668))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) 15ULL);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) min((min((arr_0 [i_0 + 1] [i_0]), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) + (var_6)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_11 [i_1] [i_2] [i_1] = ((/* implicit */short) arr_8 [i_1]);
            var_17 *= ((short) arr_10 [i_1] [i_2] [i_2]);
        }
        var_18 = ((/* implicit */short) (+(((((arr_7 [i_1] [i_1]) >= (((/* implicit */int) arr_0 [i_1] [i_1])))) ? (((var_13) << (((var_15) - (1410676442U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))))));
    }
    var_19 = ((/* implicit */unsigned char) var_1);
    var_20 = ((var_16) % ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_13))))));
}
