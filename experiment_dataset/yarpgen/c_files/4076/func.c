/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4076
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)35))))));
        var_15 = max(((-((~(-1LL))))), ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-6LL))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_7);
    var_17 = ((/* implicit */int) max((((/* implicit */long long int) (_Bool)1)), (((max((-1LL), (((/* implicit */long long int) (short)2037)))) >> (((((((/* implicit */_Bool) 23LL)) ? (4194300LL) : (4194300LL))) - (4194237LL)))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            {
                arr_10 [10ULL] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (1737684794)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) / (-4835627140686887439LL)))) ? (-7761974330045261858LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2])))))));
                arr_11 [i_2] = ((min((((/* implicit */unsigned long long int) arr_8 [i_2])), (arr_1 [i_1]))) >> (((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2011))) : (var_6))) - (1983ULL))));
            }
        } 
    } 
}
