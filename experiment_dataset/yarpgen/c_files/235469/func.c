/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235469
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
    var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) : ((+(12089582269713386018ULL)))))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [9U] [i_1] [9U] = ((/* implicit */unsigned char) ((signed char) max((max((var_10), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((short) (unsigned char)121))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(arr_1 [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_0 - 1])), (arr_0 [i_0 + 1] [(_Bool)0])))))))) ? (((/* implicit */int) max(((short)-17373), (((/* implicit */short) (unsigned char)136))))) : (max((((/* implicit */int) (unsigned short)0)), (-1032777741)))));
            }
        } 
    } 
}
