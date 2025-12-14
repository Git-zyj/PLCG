/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234542
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
    var_17 += ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) arr_1 [i_0 - 4]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14)))) : (((int) 2190817792U))))) ? (min((((unsigned int) 2104149505U)), (((/* implicit */unsigned int) var_7)))) : (((((((/* implicit */_Bool) 577236641)) && (((/* implicit */_Bool) 2190817792U)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) arr_0 [i_0 - 3]))))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) min((-1857441358), (((/* implicit */int) arr_7 [i_1]))));
            var_19 -= ((/* implicit */int) ((((min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) (-(((int) arr_5 [i_1] [i_0 - 3])))))));
        }
    }
}
