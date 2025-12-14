/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195964
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */short) arr_2 [i_1]);
                var_14 *= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9747)) ? (arr_2 [i_0]) : (((/* implicit */int) (short)-14980))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_3 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), ((+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_3 [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_6))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */short) var_8)))))))) != (((/* implicit */int) ((unsigned char) var_10)))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_2), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (var_11))))))), (((((/* implicit */_Bool) ((unsigned long long int) (short)-4232))) ? (((9223372036854775807LL) + (-95200577317642427LL))) : (var_0))))))));
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */int) (((!(((16288090113724966816ULL) <= (8825110467385762650ULL))))) ? (((var_4) << (((max((((/* implicit */unsigned long long int) var_8)), (var_4))) - (4509888735644594864ULL))))) : (((((/* implicit */_Bool) max((16LL), (((/* implicit */long long int) (unsigned char)187))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14651))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_12)), (var_2)))))))));
}
