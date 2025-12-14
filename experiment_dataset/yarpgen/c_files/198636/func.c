/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198636
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (3689107533897610964ULL) : (((/* implicit */unsigned long long int) var_16))))))) ? (min((((/* implicit */unsigned int) var_1)), (var_8))) : (((/* implicit */unsigned int) -1862230527))));
    var_21 &= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [11ULL] [i_0] = ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) + (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (_Bool)1)) : (((1023701393) * (0))))))));
        var_22 = ((/* implicit */_Bool) min(((short)255), ((short)-32743)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_23 = (-(var_3));
        var_24 = ((/* implicit */int) (((_Bool)1) ? (arr_3 [i_1]) : (((/* implicit */long long int) var_8))));
    }
    var_25 = ((/* implicit */signed char) var_14);
    var_26 |= ((/* implicit */unsigned int) (_Bool)1);
}
