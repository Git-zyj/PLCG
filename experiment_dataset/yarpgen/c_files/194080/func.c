/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194080
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
    var_15 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (4294967294U))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((long long int) ((short) arr_2 [(unsigned short)14]))))))));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2])))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_1 [i_1]) : (arr_1 [i_1]))), ((~(arr_1 [i_1])))));
        var_17 = ((/* implicit */short) (signed char)119);
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1U)) || ((_Bool)1)))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_14)))))) || (((var_1) && ((!(((/* implicit */_Bool) 1964945099U))))))));
        var_19 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */int) (_Bool)1)) >> (((4294967295U) - (4294967287U))))) * (arr_1 [i_1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) 1338662551U));
        arr_11 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) -143592683))));
    }
}
