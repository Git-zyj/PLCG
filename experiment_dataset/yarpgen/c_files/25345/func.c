/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25345
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 *= ((/* implicit */short) (unsigned short)65535);
        var_14 -= ((unsigned short) min((((/* implicit */long long int) arr_0 [i_0])), (min((6325791373405165387LL), (((/* implicit */long long int) arr_0 [i_0]))))));
    }
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(var_6)))))) || (((/* implicit */_Bool) min((((((/* implicit */int) var_12)) << (((((/* implicit */int) (unsigned short)13347)) - (13341))))), ((~(((/* implicit */int) var_7)))))))));
    var_16 = ((/* implicit */signed char) var_1);
}
