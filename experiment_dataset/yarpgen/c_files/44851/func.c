/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44851
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
    var_16 = ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) & (var_15)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1720217447U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) : (var_12))) >> (((var_6) + (1383687335))));
    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (max((17210800U), (17210800U))) : (4277756503U)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38790))) / (4277756475U)))) : (-344827923518061677LL)));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) 4277756496U))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [20LL] |= ((min((arr_2 [(short)2]), (arr_2 [0]))) ? (((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) (short)28926)))) : (((var_11) ? (((/* implicit */int) arr_0 [(short)3])) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) arr_0 [(short)4]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) | (var_8))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) & (var_3)))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (arr_7 [i_1])))) ? ((~(arr_7 [i_1]))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (var_7) : (arr_7 [i_1])))));
    }
    var_21 *= ((/* implicit */short) ((var_1) ^ (((/* implicit */long long int) var_7))));
}
