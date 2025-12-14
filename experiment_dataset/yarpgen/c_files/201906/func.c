/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201906
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (signed char)31)))))));
        var_11 *= ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
        var_12 = ((/* implicit */long long int) ((short) arr_4 [i_1]));
    }
    var_13 *= ((/* implicit */short) (signed char)31);
}
