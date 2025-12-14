/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43868
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) var_4))));
        var_18 = ((/* implicit */short) 0U);
        var_19 = ((/* implicit */short) ((4263538265U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-27659)))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((((/* implicit */_Bool) 3571315540U)) ? (((((/* implicit */unsigned int) 1345948481)) - (31429031U))) : (((((/* implicit */unsigned int) 134217600)) - (31429030U))))), (((/* implicit */unsigned int) var_13)))))));
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)90))))) ? (max((31429050U), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0 - 1]))))));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1310404800U)))), (var_7)))) ? (((-1) % (((/* implicit */int) (short)-24299)))) : (((/* implicit */int) var_13))));
}
