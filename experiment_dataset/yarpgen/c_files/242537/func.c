/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242537
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
    var_13 = ((/* implicit */unsigned char) ((((var_4) > (var_4))) ? (((/* implicit */int) (unsigned short)12796)) : ((+(((/* implicit */int) (unsigned char)132))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((short) (unsigned short)30453)));
        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) arr_2 [7U]))))), (4294967289U)))) ^ (((((/* implicit */_Bool) var_4)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_0 [i_0] [i_0])));
    }
    var_15 = ((/* implicit */unsigned long long int) var_8);
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((var_12), (var_10))))));
}
