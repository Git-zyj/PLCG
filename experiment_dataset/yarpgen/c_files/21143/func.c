/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21143
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((_Bool) arr_0 [i_0] [i_0]));
        arr_2 [i_0] = ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (signed char)-92)))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-90)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)8]))));
    }
    var_17 = var_12;
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (max((2882023484U), (((/* implicit */unsigned int) var_4))))))))))));
}
