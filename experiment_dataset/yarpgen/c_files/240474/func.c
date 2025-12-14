/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240474
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) (+(((arr_2 [(_Bool)1] [i_1]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                var_17 = ((/* implicit */unsigned long long int) var_3);
                arr_4 [i_0] [i_0] [i_0] = arr_2 [14U] [14U];
                var_18 = ((/* implicit */signed char) 751398823);
                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((var_4), (((/* implicit */signed char) arr_1 [i_0])))))))), (var_12)));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) + (809919738184263929ULL)));
    var_21 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9773))) : (17831050929274188334ULL)));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (unsigned short)33610)) : (-751398823)));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_2)) << (((var_7) - (10202869524614700005ULL)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((10253134606888595646ULL), (((/* implicit */unsigned long long int) (unsigned short)16342))))))));
}
