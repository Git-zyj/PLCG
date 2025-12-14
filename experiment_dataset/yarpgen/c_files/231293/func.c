/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231293
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((var_10) / (((((/* implicit */int) var_17)) - (((/* implicit */int) var_4)))))), (((/* implicit */int) ((((/* implicit */unsigned int) max((var_13), (var_2)))) != (min((var_0), (((/* implicit */unsigned int) var_12))))))))))));
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((9007199250546688ULL), (((/* implicit */unsigned long long int) 32767U))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11459))) : (272814361893036178LL))) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (var_14)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((arr_1 [i_0]) & (((/* implicit */unsigned long long int) var_10)))))));
    }
}
