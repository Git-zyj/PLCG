/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194983
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [(unsigned short)21])) ^ (((/* implicit */int) arr_0 [i_0 - 3])))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16844)))))));
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) 1756940344U)) : (arr_1 [i_0])))) != (3545517450811367752ULL)));
    }
    var_22 = ((/* implicit */signed char) var_12);
}
