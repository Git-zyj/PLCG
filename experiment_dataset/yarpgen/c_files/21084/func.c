/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21084
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
    var_17 = ((/* implicit */unsigned int) 1240571560);
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) 1023U)) ? (var_9) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1644187959U)) ? (3114467790U) : (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -501451542731368010LL)) ? (-1180287820) : (var_5)))) : (1644187979U))))))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1830360851)) ? (var_3) : (((/* implicit */long long int) var_10)))) << (((((var_8) ? (1644187943U) : (1262566101U))) - (1644187943U))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned int) 0);
        var_21 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3673352446U))));
        var_22 = ((/* implicit */_Bool) arr_0 [i_0] [4U]);
    }
    var_23 = ((/* implicit */int) ((min((((/* implicit */unsigned int) 5880444)), (1644187962U))) != (((((/* implicit */_Bool) ((var_11) << (((5880444) - (5880444)))))) ? (((((/* implicit */_Bool) 501451542731368003LL)) ? (8388607U) : (1644187983U))) : (((1856449098U) ^ (3454414589U)))))));
}
