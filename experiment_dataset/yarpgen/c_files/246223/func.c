/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246223
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8074))) : (var_8))), (((/* implicit */unsigned long long int) var_15))))) ? (max((((/* implicit */unsigned int) var_9)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((short) var_10)), (((short) var_6))))))));
    var_17 = ((/* implicit */_Bool) ((short) ((unsigned long long int) max((((/* implicit */int) var_4)), (var_14)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (short)32767);
        var_18 = ((unsigned int) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_19 |= ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)8074)))))) ? (max((((unsigned long long int) arr_3 [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) var_3))))))) : ((~(((unsigned long long int) 8564253488242025130ULL)))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((int) 4122173814U))) : (((unsigned int) ((int) arr_4 [i_1] [i_1])))));
        var_20 = ((int) ((841166010U) & (4122173816U)));
    }
}
