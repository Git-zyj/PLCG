/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242847
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
    var_10 = ((/* implicit */unsigned char) var_6);
    var_11 = ((/* implicit */signed char) (-2147483647 - 1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (arr_0 [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (16777215LL)));
            var_13 ^= ((/* implicit */long long int) (~(arr_4 [i_0 - 1])));
        }
    }
    var_14 &= ((/* implicit */unsigned long long int) max((var_2), (var_3)));
}
