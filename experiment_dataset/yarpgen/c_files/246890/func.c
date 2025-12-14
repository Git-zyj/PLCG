/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246890
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (unsigned short)44533))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_1] [13ULL])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (arr_3 [i_0] [i_0] [i_1]))) / (18446744073709551615ULL)));
                var_13 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]);
            }
        } 
    } 
}
