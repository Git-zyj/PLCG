/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31531
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
    var_13 = ((/* implicit */signed char) (short)-16014);
    var_14 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = var_3;
        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-70))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-118))))) > ((+(var_8))))))) > (max((max((var_2), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) var_3))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned short)9433))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1 - 1] = ((/* implicit */unsigned short) ((signed char) 5999736630041216127ULL));
        var_18 = (-(var_10));
    }
}
