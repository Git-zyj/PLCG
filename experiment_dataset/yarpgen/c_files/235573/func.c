/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235573
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
    var_18 = ((/* implicit */_Bool) var_4);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((var_17), (((/* implicit */unsigned long long int) var_11)))) * (((((/* implicit */_Bool) var_8)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-878919074)))) && ((_Bool)0))))) : (var_9)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (var_11)))))));
        arr_5 [i_0] [i_0] &= ((/* implicit */short) min((((int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
    }
    var_21 &= ((/* implicit */int) min((((((/* implicit */unsigned long long int) 262143LL)) * (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (17253151727503309901ULL))))), (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) var_3))))))))));
}
