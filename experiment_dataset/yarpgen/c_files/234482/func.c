/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234482
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
    var_10 = max((var_7), (((/* implicit */long long int) var_6)));
    var_11 = max((var_2), (((/* implicit */int) (signed char)13)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) (short)15))));
    }
}
