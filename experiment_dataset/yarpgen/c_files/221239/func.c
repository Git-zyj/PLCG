/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221239
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] &= ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((unsigned short) (unsigned char)100))));
        var_20 = (~(var_14));
        var_21 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14724740804430451758ULL)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (signed char)-32))))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [3LL] [i_0]))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_23 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((14724740804430451762ULL) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (1703))))))));
    }
    var_24 = ((var_11) / (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_17)))))));
    var_25 &= ((/* implicit */unsigned short) ((-1LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((+(376964363))) : (((/* implicit */int) var_12)))))));
    var_26 = ((/* implicit */unsigned int) (!(((((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))))) < (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
}
