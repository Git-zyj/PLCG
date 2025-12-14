/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197763
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
    var_20 = ((/* implicit */int) max((8795824586752LL), (((/* implicit */long long int) -47435433))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -729315029)) ? (((/* implicit */long long int) var_4)) : (var_9)));
        var_21 = ((/* implicit */long long int) min((var_21), (arr_1 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_22 = var_11;
        var_23 = (-(arr_1 [i_1]));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_24 = ((/* implicit */long long int) ((int) arr_6 [i_2]));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) -1LL))));
    }
}
