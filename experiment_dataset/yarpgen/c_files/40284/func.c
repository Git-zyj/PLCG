/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40284
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 - 1]))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_1 [13U]))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32759)))));
        var_14 += ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0 + 1])) >= (((/* implicit */int) (short)4064)))) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1396976107U))))));
    }
    for (short i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1 + 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) 1396976107U)))));
        arr_8 [(unsigned char)2] = max((((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1396976124U))), (((/* implicit */unsigned int) ((arr_5 [i_1 + 3]) < (arr_5 [i_1 + 2])))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (((((~(arr_5 [i_1 + 1]))) + (9223372036854775807LL))) << (((max((max((((/* implicit */long long int) 2897991188U)), (var_13))), (((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */long long int) 83075978U)))))) - (2897991188LL)))));
    }
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) 1396976107U))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_3)))) ? ((+((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) max((var_7), (var_5)))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11))))))));
}
