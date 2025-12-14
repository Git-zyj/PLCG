/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53187
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
    var_17 &= ((/* implicit */int) 9223372036854775807LL);
    var_18 = ((/* implicit */long long int) (+((+(max((7465400557156354538ULL), (((/* implicit */unsigned long long int) 9223372036854775798LL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (((+(((/* implicit */int) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned short) var_2))))))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) min((var_8), (arr_5 [(unsigned short)5] [i_0] [(unsigned short)5]))))))));
                var_20 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-(((max((-9223372036854775790LL), (((/* implicit */long long int) var_16)))) * (var_9)))));
}
