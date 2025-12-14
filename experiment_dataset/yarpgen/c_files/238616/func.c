/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238616
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
    var_19 = var_12;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_0])), (max((((/* implicit */int) arr_0 [i_0])), (var_14)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [15LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 147639857U)) ? (4184739605504158368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [(short)10] [i_0])))))) ? (8717045164000559785LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [19])))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_15))));
        }
    }
    var_21 = ((/* implicit */unsigned char) var_16);
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_8))));
}
