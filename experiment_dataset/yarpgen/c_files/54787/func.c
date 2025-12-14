/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54787
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? ((((!(var_14))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : ((~(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] [7ULL] = ((/* implicit */signed char) min(((-(arr_0 [i_0]))), (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3355203574U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2U])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (1700242725U)))) ? (max((arr_1 [10U] [10U]), (((/* implicit */unsigned long long int) (signed char)28)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3655))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_12) / (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (286557481U))))))));
        arr_5 [(unsigned short)10] [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) 286557481U)) ? (((/* implicit */int) var_7)) : (2147483647)))))));
    }
    var_17 = ((/* implicit */long long int) 287994769);
    var_18 = ((/* implicit */unsigned short) (~(min(((~(((/* implicit */int) (signed char)40)))), (((var_14) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))));
}
