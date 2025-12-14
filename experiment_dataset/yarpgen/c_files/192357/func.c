/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192357
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] &= var_6;
        var_11 -= ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2914844369231069663ULL)))) ? (2914844369231069682ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned short)11])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4224322209U)))) : ((-((~(15531899704478481959ULL)))))));
        var_13 = min((max((min((var_2), (((/* implicit */long long int) (short)-1)))), (((/* implicit */long long int) ((unsigned char) var_7))))), (((/* implicit */long long int) ((int) var_9))));
    }
    var_14 = ((/* implicit */unsigned int) ((unsigned char) 22LL));
}
