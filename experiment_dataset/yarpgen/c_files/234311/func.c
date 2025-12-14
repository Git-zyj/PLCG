/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234311
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)3]))) : ((-(arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_9);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) (-(arr_4 [i_1])));
        var_19 -= ((/* implicit */unsigned short) arr_4 [i_1]);
        arr_7 [(_Bool)1] [i_1] = ((/* implicit */short) arr_4 [i_1]);
    }
    var_20 &= ((/* implicit */unsigned long long int) var_12);
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_12))));
}
