/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202905
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
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        var_19 |= ((/* implicit */long long int) ((min((arr_0 [i_0]), (((/* implicit */int) (short)0)))) > (((/* implicit */int) (!((_Bool)0))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((4294967266U) >> (((/* implicit */int) ((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (short)-7))))) != (((((/* implicit */int) (short)(-32767 - 1))) ^ (-1)))))))))));
        arr_2 [i_0] = 1;
    }
    var_21 = ((/* implicit */int) var_5);
}
