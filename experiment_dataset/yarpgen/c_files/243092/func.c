/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243092
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */long long int) min((var_10), (((/* implicit */int) var_13))))) > (3709021426076123305LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_11))))))))) : (var_1)));
    var_17 |= ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) min((1924853336), (((/* implicit */int) (short)-2877))));
                var_18 = ((/* implicit */int) arr_2 [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_12);
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13458934885332283674ULL)) && (((/* implicit */_Bool) -1632778367))))))))));
}
