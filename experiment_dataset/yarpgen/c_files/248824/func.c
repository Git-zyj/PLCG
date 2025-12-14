/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248824
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_3))));
    var_15 += max((((/* implicit */unsigned int) ((14053593762870606350ULL) != (((/* implicit */unsigned long long int) var_8))))), (max((((unsigned int) var_9)), (((/* implicit */unsigned int) ((short) (short)-24132))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 *= 206361664U;
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((short) ((short) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) 206361668U)))))))));
                var_18 += ((/* implicit */long long int) var_8);
                arr_5 [i_0] [i_0] = max((((/* implicit */unsigned int) ((7054610473608282366LL) != (7810032509961759584LL)))), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24132))) : (var_5))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (4088605639U))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 4088605670U)) : (var_6))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((min((((2100591469U) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((((/* implicit */unsigned long long int) -7054610473608282346LL)) != (16763420548442966905ULL))))) ? (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) var_3))))) ? ((-(((/* implicit */int) (short)-21800)))) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)))) != (((unsigned long long int) var_9)))))));
    var_20 = ((/* implicit */unsigned int) min((7054610473608282366LL), (((/* implicit */long long int) 2029735325U))));
}
