/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44092
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
    var_15 = var_7;
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_12))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [(signed char)16] = ((/* implicit */short) var_10);
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1171694437)), (11377613226055019970ULL)))) ? ((+(((/* implicit */int) (unsigned char)0)))) : ((+(((/* implicit */int) var_11))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 4; i_1 < 12; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 2])) ? (((/* implicit */int) (short)2984)) : (((/* implicit */int) (unsigned short)0))))) ? ((-(((/* implicit */int) arr_1 [i_1])))) : ((+(((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 3])))))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((/* implicit */int) var_1)))))));
    }
}
