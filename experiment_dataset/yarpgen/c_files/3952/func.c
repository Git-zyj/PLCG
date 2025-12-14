/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3952
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_0 [i_0])))))) && (((/* implicit */_Bool) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_6))))) : (arr_2 [(unsigned char)10] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) -8837650970808312121LL)) ? (((/* implicit */int) (short)10238)) : (((/* implicit */int) (unsigned short)45094))))));
        var_16 *= var_4;
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        arr_10 [i_2] [i_2 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59465))) - (arr_9 [i_2])))));
        var_17 = ((/* implicit */short) (-(2817621886U)));
        var_18 = ((/* implicit */unsigned short) ((var_13) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) (unsigned short)6070))))))));
    }
    var_19 = var_1;
}
