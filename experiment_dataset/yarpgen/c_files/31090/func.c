/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31090
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
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (7034345491949192902LL)));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((min((-1894459731), (((/* implicit */int) (short)26931)))) < (min((((/* implicit */int) var_14)), (var_15)))))) / (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_19 |= ((/* implicit */unsigned long long int) max(((unsigned short)60231), ((unsigned short)5282)));
        var_20 = min(((_Bool)1), (((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) << (((/* implicit */int) ((_Bool) (unsigned short)5323)))))), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (var_3))))))));
        var_22 = ((/* implicit */short) arr_0 [i_0] [i_0]);
    }
}
