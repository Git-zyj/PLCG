/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202725
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
    var_11 *= ((/* implicit */unsigned int) (short)32767);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                arr_6 [12] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_3 [i_0]) ^ (arr_3 [i_0]))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))), (((((/* implicit */int) var_5)) << (((min((-3750079216040824535LL), (((/* implicit */long long int) arr_2 [i_0])))) + (3750079216040824542LL)))))));
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -4986965745397855363LL)), (var_2)))) ? ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) 3891660305750819136ULL)))))))) ? ((-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3891660305750819111ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (short)-7))))), ((+(var_1))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) max(((short)14750), ((short)14750))))), (4294967295U)));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (((18446744073709551592ULL) << (((min((8296302594552928370ULL), (14555083767958732486ULL))) - (8296302594552928357ULL))))))))));
}
