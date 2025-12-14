/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245106
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 2] [i_0 - 2])) && (((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_1]))))), (18446744073709551585ULL));
                arr_6 [i_0] = ((unsigned long long int) (~(arr_4 [i_0] [i_0 + 1] [i_0])));
                arr_7 [i_0] [i_0] = (+(((((/* implicit */_Bool) 4)) ? (((/* implicit */unsigned long long int) (+(var_12)))) : (((var_15) & (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))))));
                var_16 = (-((~(var_4))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (min((var_7), (((((/* implicit */unsigned long long int) min((var_6), (var_6)))) % (((((/* implicit */_Bool) var_6)) ? (5426912809395265143ULL) : (var_11)))))))));
    var_18 |= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 13)))) ? (((var_15) * (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((13019831264314286472ULL) <= (8611533398984934818ULL)))))))) ? ((+(min((var_2), (var_0))))) : (((/* implicit */unsigned long long int) var_13)));
    var_19 = (~(min((var_0), (((/* implicit */unsigned long long int) (~(var_9)))))));
}
