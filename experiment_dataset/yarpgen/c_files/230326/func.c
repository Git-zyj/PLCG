/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230326
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) 6229126096681981025ULL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((~(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) var_4))))));
    var_18 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [12U] |= ((/* implicit */int) (-(min(((~(var_8))), (arr_1 [(short)10])))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0]))) <= ((~(arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) ? (max((var_6), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */int) (_Bool)1)))))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((min((((/* implicit */unsigned int) var_11)), (arr_0 [i_0] [i_0 - 1]))) ^ (((/* implicit */unsigned int) var_6))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) max((((((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_4)))) ^ (((/* implicit */int) (signed char)(-127 - 1))))), ((~(((/* implicit */int) var_11))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_7)) == (var_14)));
}
