/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37647
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
    var_20 ^= ((/* implicit */unsigned int) var_9);
    var_21 = ((/* implicit */unsigned long long int) ((var_11) * (((/* implicit */unsigned int) ((((var_5) / (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_22 += ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_0]))))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)4]))) >= ((+(-3391556887630562403LL))))))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(short)18])) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 4294967281U)) && (((/* implicit */_Bool) arr_0 [i_0])))))))) : (9223372036854775780LL)));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] |= ((/* implicit */signed char) ((min((arr_3 [12U]), (arr_3 [(short)16]))) >> (((((arr_3 [(short)4]) * (arr_3 [8U]))) - (9750658U)))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            arr_10 [i_2 + 2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((arr_1 [i_2 + 1]) & (arr_1 [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((var_10), (arr_2 [i_1])))) <= (((/* implicit */int) ((((/* implicit */_Bool) 1U)) || (((/* implicit */_Bool) var_18)))))))))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((long long int) (_Bool)1)))));
        }
        var_26 |= ((/* implicit */_Bool) var_6);
    }
}
