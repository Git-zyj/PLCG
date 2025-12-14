/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36555
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
    var_11 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_10)) + (((/* implicit */int) min((((/* implicit */unsigned short) (short)5883)), ((unsigned short)6434)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) (unsigned short)37972);
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_7))));
        var_14 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
    }
    var_15 = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_4)))));
}
