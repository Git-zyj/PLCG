/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198310
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((((var_0) <= (((/* implicit */unsigned long long int) -3056896756785677041LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (1302437700746333692LL))) : (((/* implicit */long long int) (~(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~(var_0)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (max((((/* implicit */long long int) (_Bool)0)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) arr_0 [i_0]))))))));
    }
    var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (var_9)))))));
    var_17 = ((/* implicit */short) max((var_0), (max((((var_9) | (var_0))), (var_9)))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)-32))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (max((var_4), (((/* implicit */long long int) (unsigned char)1))))))));
}
