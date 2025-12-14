/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21214
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
    var_10 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
        var_11 = ((/* implicit */_Bool) var_4);
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
    }
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_7)))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned long long int) var_3)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)27)) > (((/* implicit */int) (unsigned short)65526)))))))))));
    }
}
