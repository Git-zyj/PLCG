/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236416
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [8ULL] = ((/* implicit */unsigned int) ((long long int) (unsigned char)199));
                arr_6 [i_0] = ((((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) < (((/* implicit */int) var_0)))) ? (max((((/* implicit */long long int) (short)9058)), (-3510184368259126338LL))) : (-3685827648050378072LL));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max(((short)30153), (((/* implicit */short) (unsigned char)108))))) ? (((/* implicit */int) max(((_Bool)0), (var_0)))) : (((((/* implicit */int) (short)29445)) - (((/* implicit */int) (short)29425))))))));
}
