/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214251
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) (unsigned char)255)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2]))));
        arr_4 [i_0 - 1] [i_0] &= ((/* implicit */unsigned short) ((3221225472U) + (0U)));
    }
}
