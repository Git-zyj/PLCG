/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192158
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] = min((18446744073709551615ULL), (((((/* implicit */_Bool) ((4791524143792832173ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55834)))))) ? (min((((/* implicit */unsigned long long int) (short)-18848)), (13655219929916719426ULL))) : (((/* implicit */unsigned long long int) -27)))));
                var_10 = ((/* implicit */short) (_Bool)0);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) (unsigned short)9697);
}
