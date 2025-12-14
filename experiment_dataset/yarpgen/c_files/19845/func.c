/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19845
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((signed char) ((long long int) arr_0 [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) 1960601441689408958LL);
        var_20 = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) max(((signed char)-126), (var_10)))))));
    }
    var_21 = ((/* implicit */short) min((var_4), (((/* implicit */unsigned long long int) (+(min((-4983604780314078962LL), (((/* implicit */long long int) (short)-24306)))))))));
}
