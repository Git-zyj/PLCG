/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28770
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_14 = min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7003456359411859608LL))), (((/* implicit */long long int) min((min((((/* implicit */int) (short)-26722)), (arr_3 [i_0]))), ((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))) + ((-((+(var_12))))))))));
    }
    var_16 = var_1;
}
