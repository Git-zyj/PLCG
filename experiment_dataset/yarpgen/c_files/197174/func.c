/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197174
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_3)));
    var_12 = ((/* implicit */_Bool) ((var_1) ? ((((_Bool)1) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 |= arr_5 [i_0] [i_0];
                var_14 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_0]);
                arr_7 [i_0] [i_0] [i_0] = min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (arr_2 [i_1])))), (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)95))))))), (max((((/* implicit */long long int) ((arr_2 [i_0]) < (arr_4 [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_0] [i_1]))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) var_5)) ? (5623413667194342914ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_10))))));
    var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2161942537U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-385455149087562168LL)))), (min((((/* implicit */unsigned long long int) 288230376151711743LL)), (2648212703596837210ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) 15966837088820491919ULL)) ? (15208465621451679769ULL) : (((/* implicit */unsigned long long int) -385455149087562185LL))))));
}
