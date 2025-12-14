/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228621
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
    var_13 = ((min((min((((/* implicit */int) var_4)), (var_1))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) ^ (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)14015)) <= (((/* implicit */int) (short)14015))))) != ((-(var_10)))))));
    var_14 = var_2;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_15 *= ((/* implicit */short) ((int) arr_1 [16] [16]));
        var_16 ^= arr_0 [i_0] [(short)20];
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) min((arr_4 [i_1] [i_1]), (((/* implicit */int) var_7))));
        var_18 = ((/* implicit */short) (-(((int) ((((/* implicit */_Bool) (short)-29435)) ? (((/* implicit */int) (_Bool)1)) : (var_10))))));
    }
}
