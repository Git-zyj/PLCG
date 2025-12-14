/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50877
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
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((int) arr_1 [4LL] [i_0]);
        var_21 ^= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 - 2])) && (((/* implicit */_Bool) var_8)))));
        var_22 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) -1851964905)), (max((var_6), (((/* implicit */long long int) arr_1 [i_0 + 1] [i_0]))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_1 [i_0 + 2] [i_0 + 2]))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((unsigned short) ((unsigned char) arr_1 [i_0 + 3] [i_0 - 1])))));
    }
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) min((0), (-1549577813))))));
    var_26 = var_18;
    var_27 -= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((var_16) >= (((/* implicit */long long int) 419214698))))))))));
}
