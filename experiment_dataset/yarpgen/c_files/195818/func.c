/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195818
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1950229908)) ? (((/* implicit */unsigned long long int) 1333730306U)) : (18446744073709551615ULL)))))));
        arr_3 [i_0] &= ((/* implicit */short) (~((~(((/* implicit */int) arr_2 [i_0]))))));
        var_15 |= ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) (short)-20458))), ((+(((arr_0 [1ULL]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))))));
        var_16 *= ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((var_11), (((/* implicit */unsigned long long int) (signed char)19))))))));
    var_18 = ((/* implicit */int) var_4);
}
