/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23342
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] [(signed char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5357)) ? (2147483638) : (((/* implicit */int) (short)22187))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (1451406835))))))) : (((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0]))) ? (-1451406850) : (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) var_1)) : (arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~((+((~(var_2)))))));
    }
    var_16 = (~(((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_2)))) ? (((((/* implicit */_Bool) var_9)) ? (1451406835) : (var_9))) : (((/* implicit */int) var_6)))));
    var_17 |= (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 1451406850)), (var_0))))))));
    var_18 = var_2;
}
