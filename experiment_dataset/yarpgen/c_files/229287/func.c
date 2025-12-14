/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229287
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    var_21 = ((/* implicit */signed char) (short)0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = (+(((/* implicit */int) var_18)));
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))), ((+(var_14)))))));
        var_23 = ((/* implicit */signed char) ((_Bool) ((arr_2 [i_0] [i_0]) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) ((signed char) var_4))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((9223372036854775807LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_19)) ^ (2147483647))))))))));
        arr_5 [i_0] = ((/* implicit */_Bool) (signed char)-85);
    }
}
