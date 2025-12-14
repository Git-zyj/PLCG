/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23996
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
    var_15 = ((/* implicit */unsigned int) (_Bool)1);
    var_16 += ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_4)))) ? (((int) arr_1 [i_0])) : ((-(((/* implicit */int) (_Bool)1))))));
        var_18 &= (~(((/* implicit */int) max((var_13), (var_11)))));
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    }
}
