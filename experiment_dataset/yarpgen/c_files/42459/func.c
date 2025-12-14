/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42459
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
    var_10 = var_3;
    var_11 = ((/* implicit */long long int) (((((~(((/* implicit */int) var_3)))) + (2147483647))) << (((var_5) - (834717818U)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned short) ((arr_2 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */signed char) arr_1 [i_0] [i_0 - 1])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (short)-21570)))))) : ((~(var_5))))), (((/* implicit */unsigned int) (signed char)111))));
    }
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */int) var_7)) <= (((((/* implicit */_Bool) ((3487919533953445817LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
}
