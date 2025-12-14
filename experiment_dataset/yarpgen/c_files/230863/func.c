/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230863
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_0 [i_1]);
                var_18 += ((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */int) arr_5 [i_1] [i_0] [i_0 - 1])) & (((/* implicit */int) arr_2 [i_0 - 3] [i_1]))))));
                arr_7 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1])) : (((((/* implicit */_Bool) arr_2 [i_0] [(short)11])) ? (((/* implicit */int) arr_0 [3])) : (((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_19 = ((long long int) ((((((/* implicit */_Bool) 1507520133956911580ULL)) || (var_9))) ? (max((-4087446494980287093LL), (4087446494980287093LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    var_20 |= ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) == (var_0))))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_11)))))));
}
