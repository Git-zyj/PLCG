/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31555
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
    var_18 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((/* implicit */int) var_13)) >= (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_4))))))) ? (((/* implicit */int) arr_1 [i_0] [14])) : (((/* implicit */int) ((_Bool) var_6))))))));
        var_20 = ((/* implicit */_Bool) var_0);
        arr_2 [i_0] = (((!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_3))))))) ? (max((3627616442U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned int) arr_0 [i_0])));
    }
}
