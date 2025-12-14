/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218703
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0 + 1] [i_0 + 1]));
        var_19 = ((/* implicit */short) arr_2 [i_0]);
        var_20 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_6))))));
        var_21 = ((/* implicit */long long int) arr_1 [i_0 + 1]);
        var_22 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) arr_2 [i_1 + 1]));
        var_23 = ((((/* implicit */_Bool) (~(var_10)))) ? ((+(((/* implicit */int) arr_4 [i_1] [i_1])))) : ((+(((/* implicit */int) arr_0 [i_1] [i_1 - 1])))));
        var_24 = ((/* implicit */int) var_11);
        arr_6 [i_1] [1] = ((/* implicit */_Bool) var_15);
        arr_7 [i_1] [i_1] = (~(((((/* implicit */_Bool) var_7)) ? (5411355267272236317ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) var_4);
        arr_12 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_2)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))) : (5411355267272236317ULL)));
    }
    var_25 = -682930757;
}
