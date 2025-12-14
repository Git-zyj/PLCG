/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249863
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
    var_11 |= ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (_Bool)1)))))))), (18446744073709551615ULL)));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))));
    }
    var_14 *= var_0;
    var_15 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)-1)))) || ((!(((/* implicit */_Bool) var_10)))))), (((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_10))))) < (((/* implicit */int) (unsigned char)113))))));
}
