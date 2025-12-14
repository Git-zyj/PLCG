/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223290
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
    var_10 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (3304032661U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))))), (((/* implicit */unsigned int) var_1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) ((arr_2 [i_0 - 1]) / (((/* implicit */int) var_0))));
        var_12 = ((((/* implicit */_Bool) ((unsigned int) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))) ? (((((((/* implicit */int) var_0)) >= (var_8))) ? (((var_4) % (-1156116466))) : (((/* implicit */int) var_0)))) : (arr_2 [i_0 + 3]));
        var_13 = var_1;
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0 + 2] [(unsigned short)7])) + (23)))))) ? (((int) arr_3 [i_0])) : (((/* implicit */int) ((signed char) arr_1 [i_0]))))), (((((/* implicit */_Bool) ((var_2) ? (var_8) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) == (var_3)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [8])) : (((/* implicit */int) arr_3 [i_0])))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (max((((/* implicit */unsigned int) arr_3 [i_1])), (min((((/* implicit */unsigned int) var_9)), (3563723501U))))))))));
        arr_6 [i_1] = ((/* implicit */signed char) var_7);
    }
    var_16 += ((/* implicit */unsigned long long int) (unsigned char)134);
}
