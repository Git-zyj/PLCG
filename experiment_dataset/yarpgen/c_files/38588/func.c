/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38588
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
    var_10 = ((/* implicit */signed char) ((var_3) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (short)32038)))) : ((~(((/* implicit */int) var_8)))))))));
    var_11 = ((/* implicit */short) (+(var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_9))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(signed char)14] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (15329)))))));
        var_15 = ((((/* implicit */_Bool) (short)15560)) ? (6378480646192036359ULL) : (((/* implicit */unsigned long long int) 1963161659U)));
    }
    var_16 = ((/* implicit */long long int) var_0);
}
