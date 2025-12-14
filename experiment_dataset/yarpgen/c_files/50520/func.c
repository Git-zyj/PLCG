/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50520
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 &= ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) min((arr_2 [i_0]), (arr_0 [(unsigned char)2])))), (arr_1 [i_0] [i_0]))))));
        var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [8U] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_16)) & (var_7))));
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) 4294967295U))));
    var_24 = (short)4040;
}
