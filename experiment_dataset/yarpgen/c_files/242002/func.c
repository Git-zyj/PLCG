/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242002
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
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) var_2))));
    var_16 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((long long int) (-(arr_2 [i_0] [i_0])));
        arr_3 [i_0] [2LL] = ((max((arr_2 [0LL] [i_0]), (max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))) > (arr_2 [i_0] [i_0]));
        arr_4 [i_0] = ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) % (arr_1 [i_0])))) & (max((0LL), (((/* implicit */long long int) (unsigned char)117)))));
        var_18 = ((/* implicit */signed char) ((min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0])))) ^ (((((arr_2 [i_0] [i_0]) + (9223372036854775807LL))) << (0LL)))));
    }
}
