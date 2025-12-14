/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40829
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [8U] = ((/* implicit */long long int) var_0);
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((((unsigned long long int) arr_2 [i_0])) & (((/* implicit */unsigned long long int) -1568831171))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))));
        var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-607662226709934579LL)))) || (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned long long int) (+((~(arr_2 [i_1])))));
        var_14 = ((/* implicit */_Bool) ((unsigned short) arr_2 [i_1]));
        arr_7 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (+(-607662226709934572LL))));
    }
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((817537352U), (((/* implicit */unsigned int) ((signed char) 607662226709934578LL)))))), (-6784686217248210750LL)));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((unsigned long long int) var_8)))))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_3)))))))));
}
