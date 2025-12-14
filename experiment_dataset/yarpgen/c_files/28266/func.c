/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28266
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
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((((/* implicit */unsigned long long int) var_7)), (14ULL))))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (1ULL))) ? (18446744073709551605ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (18446744073709551615ULL)))))));
    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
    var_19 = ((/* implicit */short) var_14);
    var_20 = ((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)15939))))))) > (((/* implicit */int) var_12)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_22 = ((/* implicit */signed char) var_10);
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)48072)) ^ (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)80))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((long long int) min(((_Bool)1), ((_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))) < (((((/* implicit */_Bool) 11542786513467361428ULL)) ? (8823884188956876211ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_24 = (_Bool)1;
        var_25 = ((/* implicit */long long int) arr_5 [i_1] [i_1]);
    }
    /* vectorizable */
    for (short i_2 = 4; i_2 < 10; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1]))) : (4661671720148058382ULL)));
        var_26 = var_2;
    }
}
