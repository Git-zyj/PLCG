/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249999
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((short) (_Bool)1));
        var_17 = ((/* implicit */signed char) min((((arr_0 [i_0 + 1] [i_0]) & ((+(var_14))))), (min((((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 3])) ? (((/* implicit */int) (signed char)60)) : (152748645))), (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1]))))));
        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 3])) : (((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 1]))))) ? (((long long int) arr_3 [i_0] [i_0 - 2])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 1])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) ((int) -6884122925350331568LL))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (var_11) : (var_11))) : (((/* implicit */long long int) ((int) 2469406051U))))) : (-5LL)));
        var_19 |= ((/* implicit */short) (_Bool)1);
    }
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) 1644373411))) >= (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-41)))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) -958160262)) ? (((/* implicit */int) (short)28169)) : (((/* implicit */int) (unsigned char)4))))));
}
