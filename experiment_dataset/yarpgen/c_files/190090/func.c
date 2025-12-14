/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190090
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
    var_13 &= ((/* implicit */long long int) var_5);
    var_14 *= ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */long long int) (_Bool)1);
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)12))));
        var_16 = (~(((var_1) + (var_6))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (-(((min((var_12), (var_12))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31054)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)7)))))))));
    }
}
