/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29149
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5331)) ? (((arr_2 [i_0]) >> (((((/* implicit */int) var_16)) - (4221))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_15)))))))), (max((((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) var_8))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_1 + 2]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned long long int) (unsigned short)51497)), (min((3732655769239172507ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) 13378982022915140947ULL);
    var_21 = ((/* implicit */unsigned short) var_4);
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_5))))) && (((/* implicit */_Bool) var_13))))) & ((+(((/* implicit */int) min((var_13), (((/* implicit */unsigned char) var_3)))))))));
}
