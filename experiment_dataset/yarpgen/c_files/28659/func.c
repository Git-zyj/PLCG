/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28659
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
    var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (2280504012U))))) : (var_5))) == (max(((-(var_5))), (((/* implicit */long long int) max((2280504012U), (2014463271U))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 |= ((/* implicit */int) var_1);
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) arr_0 [i_0]))));
        var_13 ^= ((/* implicit */signed char) arr_1 [(_Bool)1]);
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10)) || (((/* implicit */_Bool) 18446744073709551615ULL))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (2280504018U))) ? (((4798685594531902523ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
    }
}
