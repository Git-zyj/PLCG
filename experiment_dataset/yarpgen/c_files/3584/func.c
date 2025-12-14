/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3584
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 684079296)) ? (684079296) : (-684079296)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((arr_1 [i_0]) + (32288153))))))));
        var_16 = (~(((/* implicit */int) ((_Bool) ((-1677004317) | (var_5))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */short) (((+(arr_1 [(unsigned short)9]))) | (((/* implicit */int) ((_Bool) min((var_8), (((/* implicit */int) var_3))))))));
    }
    var_17 = ((min((var_12), (var_4))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) || (((/* implicit */_Bool) ((short) -684079291))))))));
    var_18 = ((/* implicit */long long int) var_7);
}
