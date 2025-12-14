/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46251
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_17) | (((/* implicit */int) var_7))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((_Bool) var_4)))));
    var_21 = ((/* implicit */unsigned long long int) ((var_8) >> ((((~(((/* implicit */int) var_14)))) - (117)))));
    var_22 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_23 = ((((/* implicit */unsigned long long int) ((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) | (var_19));
        arr_3 [i_0] = ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (unsigned short)42780)), (72057593769492480ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_2 [i_0])))))) : (var_8));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) (unsigned short)53930)) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
        arr_5 [i_0] = (~(arr_2 [i_0]));
        arr_6 [i_0] = ((/* implicit */long long int) 1845117786U);
    }
}
