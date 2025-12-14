/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196511
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((min((var_1), (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_16)))))));
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_2))))));
    var_22 = ((/* implicit */short) max((((((((/* implicit */long long int) ((/* implicit */int) var_0))) == (-13LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (8585740288ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) ((unsigned char) (unsigned char)0))))))));
    var_23 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]);
                var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL))))) : (18446744065123811328ULL)))));
                arr_8 [5] [i_1] = ((/* implicit */int) arr_2 [i_1] [i_0]);
            }
        } 
    } 
}
